typedef void GArray;typedef int target_pid_t;typedef uint32_t target_ulong;typedef int32_t target_long;typedef uint32_t target_ulong;
/**
* assumptions.h. The sad truth of a not truly auto-generated file.
* If something has gone wrong it's probably in here.
*/

typedef uint64_t ram_addr_t;
extern ram_addr_t ram_size; //gives us the ram_size variable
typedef uint64_t tb_page_addr_t;
typedef uint64_t hwaddr;
typedef uint64_t MemTxResult;
typedef uint8_t Int128[16]; 
typedef uint64_t vaddr;
typedef uint8_t sigjmp_buf[200];
typedef uint8_t pthread_mutex_t[40];
typedef enum {
   IOMMU_NONE = 0,
   IOMMU_RO   = 1,
   IOMMU_WO   = 2,
   IOMMU_RW   = 3,
} IOMMUAccessFlags;
typedef enum {
    IOMMU_NOTIFIER_NONE = 0,
    IOMMU_NOTIFIER_UNMAP = 0x1,
    IOMMU_NOTIFIER_MAP = 0x2,
} IOMMUNotifierFlag;
enum QemuOptType {
    QEMU_OPT_STRING = 0,  
    QEMU_OPT_BOOL,        
    QEMU_OPT_NUMBER,      
    QEMU_OPT_SIZE, 
};
enum device_endian {
    DEVICE_NATIVE_ENDIAN,
    DEVICE_BIG_ENDIAN,
    DEVICE_LITTLE_ENDIAN,
};
typedef void CPUWriteMemoryFunc(void *opaque, hwaddr addr, uint32_t value);
typedef uint32_t CPUReadMemoryFunc(void *opaque, hwaddr addr);
typedef uint64_t CPUArchIdList;
typedef uint8_t FPReg[16];
typedef char flag;
typedef struct {
	uint64_t low;
	uint16_t high;
} floatx80; 
typedef uint32_t float32;
typedef uint64_t float64;
typedef uint32_t FeatureWordArray[18];
typedef struct {
    uint64_t base;
    uint64_t mask;
} MTRRVar;
typedef enum TPRAccess {
    TPR_ACCESS_READ,
    TPR_ACCESS_WRITE,
} TPRAccess;
typedef struct {
    uint64_t raw_tcr;
    uint32_t mask;
    uint32_t base_mask;
} TCR;
typedef uint32_t TCGMemOp;
typedef uint32_t QEMUClockType;
typedef void QEMUTimerCB(void *opaque);
typedef void QEMUTimerListNotifyCB(void *opaque, QEMUClockType type);
typedef uint32_t (*dcr_read_cb)(void *opaque, int dcrn);
typedef void (*dcr_write_cb)(void *opaque, int dcrn, uint32_t val);
typedef uint32_t powerpc_mmu_t;
typedef uint32_t powerpc_excp_t;
typedef uint32_t powerpc_input_t;
typedef void RCUCBFunc(struct rcu_head *head);
typedef uint8_t ZMMReg[40];
typedef uint8_t MMXReg[8];
typedef uint8_t ppc_avr_t[16];
typedef uint8_t ppc_tlb_t[8];
typedef uint64_t hax_fd;
struct hax_vcpu_state {
    hax_fd fd;
    int vcpu_id;
    struct hax_tunnel *tunnel;
    unsigned char *iobuf;
};
typedef struct hax_state hax_global;
typedef struct hax_vcpu_state hax_vcpu_state;
typedef uint64_t pthread_t;
typedef uint8_t pthread_cond_t[48]; 
typedef void * run_on_cpu_func;
typedef uint64_t run_on_cpu_data;
typedef int gdb_reg_cb;
typedef uint8_t __u8;
typedef uint32_t __u32;
typedef uint16_t __u16;
typedef uint64_t __u64;
struct GHashTable {};
typedef struct GHashTable GHashTable;
typedef void IOEventHandler(void *opaque, int event);
typedef void IOReadHandler(void *opaque, const uint8_t *buf, int size);
typedef int IOCanReadHandler(void *opaque);
typedef uint32_t guint;
typedef uint32_t QType; // actually an enum
typedef void ReadLineCompletionFunc(void *opaque, const char *cmdline);
typedef void ReadLineFlushFunc(void *opaque);
typedef void ReadLineFunc(void *opaque, const char *str,void *readline_opaque);
typedef void ReadLinePrintfFunc(void *opaque,const char *fmt, ...);
typedef uint8_t MonitorQMP[72];
typedef void BlockCompletionFunc(void *opaque, int ret);
typedef uint8_t QDict[4120];
typedef uint8_t mon_cmd_t[56];
typedef char gchar;
struct QemuThread;
typedef struct QemuThread QemuThread;
struct QemuThread {
	pthread_t                  thread;               /*     0     8 */
	/* size: 8, cachelines: 1, members: 1 */
	/* last cacheline: 8 bytes */
};
struct QemuCond;
typedef struct QemuCond QemuCond;
struct QemuCond {
	pthread_cond_t             cond;                 /*     0    48 */
	/* size: 48, cachelines: 1, members: 1 */
	/* last cacheline: 48 bytes */
};
struct qemu_work_item;
typedef struct qemu_work_item qemu_work_item;
struct qemu_work_item {
	struct qemu_work_item *    next;                 /*     0     8 */
	run_on_cpu_func            func;                 /*     8     8 */
	run_on_cpu_data            data;                 /*    16     8 */
	_Bool                      free;                 /*    24     1 */
	_Bool                      exclusive;            /*    25     1 */
	_Bool                      done;                 /*    26     1 */
	/* size: 32, cachelines: 1, members: 6 */
	/* padding: 5 */
	/* last cacheline: 32 bytes */
};
struct GDBRegisterState;
typedef struct GDBRegisterState GDBRegisterState;
struct GDBRegisterState {
	int                        base_reg;             /*     0     4 */
	int                        num_regs;             /*     4     4 */
	gdb_reg_cb                 get_reg;              /*     8     8 */
	gdb_reg_cb                 set_reg;              /*    16     8 */
	const char  *              xml;                  /*    24     8 */
	struct GDBRegisterState *  next;                 /*    32     8 */
	/* size: 40, cachelines: 1, members: 6 */
	/* last cacheline: 40 bytes */
};
struct TranslationBlock;
typedef struct TranslationBlock TranslationBlock;
struct TranslationBlock {
	target_ulong               pc;                   /*     0     4 */
	target_ulong               cs_base;              /*     4     4 */
	uint32_t                   flags;                /*     8     4 */
	uint16_t                   size;                 /*    12     2 */
	uint16_t                   icount;               /*    14     2 */
	uint32_t                   cflags;               /*    16     4 */
	uint16_t                   invalid;              /*    20     2 */
	/* XXX 2 bytes hole, try to pack */
	void *                     tc_ptr;               /*    24     8 */
	uint8_t *                  tc_search;            /*    32     8 */
	struct TranslationBlock *  orig_tb;              /*    40     8 */
	struct TranslationBlock *  page_next[2];         /*    48    16 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	tb_page_addr_t             page_addr[2];         /*    64    16 */
	uint16_t                   jmp_reset_offset[2];  /*    80     4 */
	uint16_t                   jmp_insn_offset[2];   /*    84     4 */
	uintptr_t                  jmp_list_next[2];     /*    88    16 */
	uintptr_t                  jmp_list_first;       /*   104     8 */
	void *           tcg_llvm_context;     /*   112     8 */
	struct Function *          llvm_function;        /*   120     8 */
	/* --- cacheline 2 boundary (128 bytes) --- */
	uint8_t *                  llvm_tc_ptr;          /*   128     8 */
	uint8_t *                  llvm_tc_end;          /*   136     8 */
	struct TranslationBlock *  llvm_tb_next[2];      /*   144    16 */
	/* size: 160, cachelines: 3, members: 21 */
	/* sum members: 158, holes: 1, sum holes: 2 */
	/* last cacheline: 32 bytes */
};
struct Object;
typedef struct Object Object;
struct Object {
	void * klass;
	void * free;
	void * properties;
	uint32_t ref;
	void * parent;
	};
struct CharBackend;
typedef struct CharBackend CharBackend;
struct Chardev;
typedef struct Chardev Chardev;
struct CharBackend {
	Chardev *                  chr;                  /*     0     8 */
	IOEventHandler *           chr_event;            /*     8     8 */
	IOCanReadHandler *         chr_can_read;         /*    16     8 */
	IOReadHandler *            chr_read;             /*    24     8 */
	void *                     opaque;               /*    32     8 */
	int                        tag;                  /*    40     4 */
	int                        fe_open;              /*    44     4 */
	/* size: 48, cachelines: 1, members: 7 */
	/* last cacheline: 48 bytes */
};
struct QemuMutex;
typedef struct QemuMutex QemuMutex;
struct QemuMutex {
	pthread_mutex_t            lock;                 /*     0    40 */
	/* size: 40, cachelines: 1, members: 1 */
	/* last cacheline: 40 bytes */
};
struct QemuOptDesc;
typedef struct QemuOptDesc QemuOptDesc;
struct QemuOptDesc {
	const char  *              name;                 /*     0     8 */
	enum QemuOptType           type;                 /*     8     4 */
	/* XXX 4 bytes hole, try to pack */
	const char  *              help;                 /*    16     8 */
	const char  *              def_value_str;        /*    24     8 */
	/* size: 32, cachelines: 1, members: 4 */
	/* sum members: 28, holes: 1, sum holes: 4 */
	/* last cacheline: 32 bytes */
};
struct Location;
typedef struct Location Location;
struct Location {
	int                        num;                  /*     4     4 */
	const void  *              ptr;                  /*     8     8 */
	struct Location *          prev;                 /*    16     8 */
	/* size: 24, cachelines: 1, members: 4 */
	/* last cacheline: 24 bytes */
};
struct HotplugHandler;
typedef struct HotplugHandler HotplugHandler;
struct HotplugHandler {
	Object                     Parent;               /*     0    40 */
	/* size: 40, cachelines: 1, members: 1 */
	/* last cacheline: 40 bytes */
};
struct RAMBlock;
typedef struct RAMBlock RAMBlock;
struct RAMBlock {
	struct rcu_head            rcu;                  /*     0    16 */
	struct MemoryRegion *      mr;                   /*    16     8 */
	uint8_t *                  host;                 /*    24     8 */
	ram_addr_t                 offset;               /*    32     8 */
	ram_addr_t                 used_length;          /*    40     8 */
	ram_addr_t                 max_length;           /*    48     8 */
	void                       (*resized)(const char  *, uint64_t, void *); /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	uint32_t                   flags;                /*    64     4 */
	char                       idstr[256];           /*    68   256 */
	/* XXX 4 bytes hole, try to pack */
	/* --- cacheline 5 boundary (320 bytes) was 8 bytes ago --- */
	struct {
		struct RAMBlock *  le_next;              /*   328     8 */
		struct RAMBlock * * le_prev;             /*   336     8 */
	} next;                                          /*   328    16 */
	struct {
		struct RAMBlockNotifier * lh_first;      /*   344     8 */
	} ramblock_notifiers;                            /*   344     8 */
	int                        fd;                   /*   352     4 */
	/* XXX 4 bytes hole, try to pack */
	size_t                     page_size;            /*   360     8 */
	/* size: 368, cachelines: 6, members: 13 */
	/* sum members: 360, holes: 2, sum holes: 8 */
	/* last cacheline: 48 bytes */
};
struct MemTxAttrs;
typedef struct MemTxAttrs MemTxAttrs;
struct MemTxAttrs {
	unsigned int               unspecified:1;        /*     0: 0  4 */
	unsigned int               secure:1;             /*     0: 1  4 */
	unsigned int               user:1;               /*     0: 2  4 */
	unsigned int               requester_id:16;      /*     0: 3  4 */
	/* size: 4, cachelines: 1, members: 4 */
	/* bit_padding: 13 bits */
	/* last cacheline: 4 bytes */
};
struct Notifier;
typedef struct Notifier Notifier;
struct Notifier {
	void                       (*notify)(Notifier *, void *); /*     0     8 */
	struct {
		struct Notifier *  le_next;              /*     8     8 */
		struct Notifier * * le_prev;             /*    16     8 */
	} node;                                          /*     8    16 */
	/* size: 24, cachelines: 1, members: 2 */
	/* last cacheline: 24 bytes */
};
struct QObject;
typedef struct QObject QObject;
struct QObject {
	QType                      type;                 /*     0     4 */
	/* XXX 4 bytes hole, try to pack */
	size_t                     refcnt;               /*     8     8 */
	/* size: 16, cachelines: 1, members: 2 */
	/* sum members: 12, holes: 1, sum holes: 4 */
	/* last cacheline: 16 bytes */
};
struct MemoryRegionMmio;
typedef struct MemoryRegionMmio MemoryRegionMmio;
struct MemoryRegionMmio {
	CPUReadMemoryFunc *        read[3];              /*     0    24 */
	CPUWriteMemoryFunc *       write[3];             /*    24    24 */
	/* size: 48, cachelines: 1, members: 2 */
	/* last cacheline: 48 bytes */
};
struct AddrRange;
typedef struct AddrRange AddrRange;
struct AddrRange {
	Int128                     start;                /*     0    16 */
	Int128                     size;                 /*    16    16 */
	/* size: 32, cachelines: 1, members: 2 */
	/* last cacheline: 32 bytes */
};
struct EventNotifier;
typedef struct EventNotifier EventNotifier;
struct EventNotifier {
	int                        rfd;                  /*     0     4 */
	int                        wfd;                  /*     4     4 */
	/* size: 8, cachelines: 1, members: 2 */
	/* last cacheline: 8 bytes */
};
struct ARMGenericTimer;
typedef struct ARMGenericTimer ARMGenericTimer;
struct ARMGenericTimer {
	uint64_t                   cval;                 /*     0     8 */
	uint64_t                   ctl;                  /*     8     8 */
	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct float_status;
typedef struct float_status float_status;
struct float_status {
	signed char                float_detect_tininess; /*     0     1 */
	signed char                float_rounding_mode;  /*     1     1 */
	uint8_t                    float_exception_flags; /*     2     1 */
	signed char                floatx80_rounding_precision; /*     3     1 */
	flag                       flush_to_zero;        /*     4     1 */
	flag                       flush_inputs_to_zero; /*     5     1 */
	flag                       default_nan_mode;     /*     6     1 */
	flag                       snan_bit_is_one;      /*     7     1 */
	/* size: 8, cachelines: 1, members: 8 */
	/* last cacheline: 8 bytes */
};
struct AccelState;
typedef struct AccelState AccelState;
struct AccelState {
	Object                     parent_obj;           /*     0    40 */
	/* size: 40, cachelines: 1, members: 1 */
	/* last cacheline: 40 bytes */
};
struct ReadLineState;
typedef struct ReadLineState ReadLineState;
struct ReadLineState {
	char                       cmd_buf[4096];        /*     0  4096 */
	/* --- cacheline 64 boundary (4096 bytes) --- */
	int                        cmd_buf_index;        /*  4096     4 */
	int                        cmd_buf_size;         /*  4100     4 */
	char                       last_cmd_buf[4096];   /*  4104  4096 */
	/* --- cacheline 128 boundary (8192 bytes) was 8 bytes ago --- */
	int                        last_cmd_buf_index;   /*  8200     4 */
	int                        last_cmd_buf_size;    /*  8204     4 */
	int                        esc_state;            /*  8208     4 */
	int                        esc_param;            /*  8212     4 */
	char *                     history[64];          /*  8216   512 */
	/* --- cacheline 136 boundary (8704 bytes) was 24 bytes ago --- */
	int                        hist_entry;           /*  8728     4 */
	/* XXX 4 bytes hole, try to pack */
	ReadLineCompletionFunc *   completion_finder;    /*  8736     8 */
	char *                     completions[256];     /*  8744  2048 */
	/* --- cacheline 168 boundary (10752 bytes) was 40 bytes ago --- */
	int                        nb_completions;       /* 10792     4 */
	int                        completion_index;     /* 10796     4 */
	ReadLineFunc *             readline_func;        /* 10800     8 */
	void *                     readline_opaque;      /* 10808     8 */
	/* --- cacheline 169 boundary (10816 bytes) --- */
	int                        read_password;        /* 10816     4 */
	char                       prompt[256];          /* 10820   256 */
	/* XXX 4 bytes hole, try to pack */
	/* --- cacheline 173 boundary (11072 bytes) was 8 bytes ago --- */
	ReadLinePrintfFunc *       printf_func;          /* 11080     8 */
	ReadLineFlushFunc *        flush_func;           /* 11088     8 */
	void *                     opaque;               /* 11096     8 */
	/* size: 11104, cachelines: 174, members: 21 */
	/* sum members: 11096, holes: 2, sum holes: 8 */
	/* last cacheline: 32 bytes */
};
struct CPUTLBEntry;
typedef struct CPUTLBEntry CPUTLBEntry;
struct CPUTLBEntry {
		struct {
			target_ulong addr_read;          /*     0     4 */
			target_ulong addr_write;         /*     4     4 */
			target_ulong addr_code;          /*     8     4 */
			/* XXX 4 bytes hole, try to pack */
			uintptr_t  addend;               /*    16     8 */
		};                                       /*     0    24 */
	/* size: 32, cachelines: 1, members: 1 */
	/* last cacheline: 32 bytes */
};
struct CPUIOTLBEntry;
typedef struct CPUIOTLBEntry CPUIOTLBEntry;
struct CPUIOTLBEntry {
	hwaddr                     addr;                 /*     0     8 */
	MemTxAttrs                 attrs;                /*     8     4 */
	/* size: 16, cachelines: 1, members: 2 */
	/* padding: 4 */
	/* last cacheline: 16 bytes */
};
struct CPUWatchpoint;
typedef struct CPUWatchpoint CPUWatchpoint;
struct CPUWatchpoint {
	vaddr                      virtaddr;             /*     0     8 */
	vaddr                      len;                  /*     8     8 */
	vaddr                      hitaddr;              /*    16     8 */
	MemTxAttrs                 hitattrs;             /*    24     4 */
	int                        flags;                /*    28     4 */
	struct {
		struct CPUWatchpoint * tqe_next;         /*    32     8 */
		struct CPUWatchpoint * * tqe_prev;       /*    40     8 */
	} entry;                                         /*    32    16 */
	/* size: 48, cachelines: 1, members: 6 */
	/* last cacheline: 48 bytes */
};
struct icount_decr_u16;
typedef struct icount_decr_u16 icount_decr_u16;
struct icount_decr_u16 {
	uint16_t                   low;                  /*     0     2 */
	uint16_t                   high;                 /*     2     2 */
	/* size: 4, cachelines: 1, members: 2 */
	/* last cacheline: 4 bytes */
};
struct breakpoints_head;
typedef struct breakpoints_head breakpoints_head;
struct breakpoints_head {
	struct CPUBreakpoint *     tqh_first;            /*     0     8 */
	struct CPUBreakpoint * *   tqh_last;             /*     8     8 */
	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct watchpoints_head;
typedef struct watchpoints_head watchpoints_head;
struct watchpoints_head {
	struct CPUWatchpoint *     tqh_first;            /*     0     8 */
	struct CPUWatchpoint * *   tqh_last;             /*     8     8 */
	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct QemuOptHead;
typedef struct QemuOptHead QemuOptHead;
struct QemuOptHead {
	struct QemuOpt *           tqh_first;            /*     0     8 */
	struct QemuOpt * *         tqh_last;             /*     8     8 */
	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct ChildrenHead;
typedef struct ChildrenHead ChildrenHead;
struct ChildrenHead {
	struct BusChild *          tqh_first;            /*     0     8 */
	struct BusChild * *        tqh_last;             /*     8     8 */
	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct rcu_head;
typedef struct rcu_head rcu_head;
struct rcu_head {
	struct rcu_head *          next;                 /*     0     8 */
	RCUCBFunc *                func;                 /*     8     8 */
	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct memory_listeners_as;
typedef struct memory_listeners_as memory_listeners_as;
struct memory_listeners_as {
	struct MemoryListener *    tqh_first;            /*     0     8 */
	struct MemoryListener * *  tqh_last;             /*     8     8 */
	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct subregions;
typedef struct subregions subregions;
struct subregions {
	struct MemoryRegion *      tqh_first;            /*     0     8 */
	struct MemoryRegion * *    tqh_last;             /*     8     8 */
	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct coalesced_ranges;
typedef struct coalesced_ranges coalesced_ranges;
struct coalesced_ranges {
	struct CoalescedMemoryRange * tqh_first;         /*     0     8 */
	struct CoalescedMemoryRange * * tqh_last;        /*     8     8 */
	/* size: 16, cachelines: 1, members: 2 */
	/* last cacheline: 16 bytes */
};
struct AddressSpace;
typedef struct AddressSpace AddressSpace;
struct MemoryRegion;
typedef struct MemoryRegion MemoryRegion;
struct MemoryListener;
typedef struct MemoryListener MemoryListener;
struct AddressSpace {
	struct rcu_head            rcu;                  /*     0    16 */
	char *                     name;                 /*    16     8 */
	MemoryRegion *             root;                 /*    24     8 */
	int                        ref_count;            /*    32     4 */
	_Bool                      malloced;             /*    36     1 */
	/* XXX 3 bytes hole, try to pack */
	struct FlatView *          current_map;          /*    40     8 */
	int                        ioeventfd_nb;         /*    48     4 */
	/* XXX 4 bytes hole, try to pack */
	struct MemoryRegionIoeventfd * ioeventfds;       /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	struct AddressSpaceDispatch * dispatch;          /*    64     8 */
	struct AddressSpaceDispatch * next_dispatch;     /*    72     8 */
	MemoryListener             dispatch_listener;    /*    80   160 */
	/* --- cacheline 3 boundary (192 bytes) was 48 bytes ago --- */
	struct memory_listeners_as listeners;            /*   240    16 */
	/* --- cacheline 4 boundary (256 bytes) --- */
	struct {
		struct AddressSpace * tqe_next;          /*   256     8 */
		struct AddressSpace * * tqe_prev;        /*   264     8 */
	} address_spaces_link;                           /*   256    16 */
	/* size: 272, cachelines: 5, members: 13 */
	/* sum members: 265, holes: 2, sum holes: 7 */
	/* last cacheline: 16 bytes */
};
struct CPUAddressSpace;
typedef struct CPUAddressSpace CPUAddressSpace;
struct CPUState;
typedef struct CPUState CPUState;
struct CPUAddressSpace {
	CPUState *                 cpu;                  /*     0     8 */
	AddressSpace *             as;                   /*     8     8 */
	struct AddressSpaceDispatch * memory_dispatch;   /*    16     8 */
	MemoryListener             tcg_as_listener;      /*    24   160 */
	/* size: 184, cachelines: 3, members: 4 */
	/* last cacheline: 56 bytes */
};
struct QemuOptsList;
typedef struct QemuOptsList QemuOptsList;
struct QemuOptsList {
	const char  *              name;                 /*     0     8 */
	const char  *              implied_opt_name;     /*     8     8 */
	_Bool                      merge_lists;          /*    16     1 */
	/* XXX 7 bytes hole, try to pack */
	struct {
		struct QemuOpts *  tqh_first;            /*    24     8 */
		struct QemuOpts * * tqh_last;            /*    32     8 */
	} head;                                          /*    24    16 */
	QemuOptDesc                desc[];               /*    40     0 */
	/* size: 40, cachelines: 1, members: 5 */
	/* sum members: 33, holes: 1, sum holes: 7 */
	/* last cacheline: 40 bytes */
};
struct IOMMUTLBEntry;
typedef struct IOMMUTLBEntry IOMMUTLBEntry;
struct IOMMUTLBEntry {
	AddressSpace *             target_as;            /*     0     8 */
	hwaddr                     iova;                 /*     8     8 */
	hwaddr                     translated_addr;      /*    16     8 */
	hwaddr                     addr_mask;            /*    24     8 */
	IOMMUAccessFlags           perm;                 /*    32     4 */
	/* size: 40, cachelines: 1, members: 5 */
	/* padding: 4 */
	/* last cacheline: 40 bytes */
};
struct MemoryRegionIOMMUOps;
typedef struct MemoryRegionIOMMUOps MemoryRegionIOMMUOps;
struct MemoryRegionIOMMUOps {
	IOMMUTLBEntry              (*translate)(MemoryRegion *, hwaddr, _Bool); /*     0     8 */
	uint64_t                   (*get_min_page_size)(MemoryRegion *); /*     8     8 */
	void                       (*notify_flag_changed)(MemoryRegion *, IOMMUNotifierFlag, IOMMUNotifierFlag); /*    16     8 */
	/* size: 24, cachelines: 1, members: 3 */
	/* last cacheline: 24 bytes */
};
struct MemoryRegionOps;
typedef struct MemoryRegionOps MemoryRegionOps;
struct MemoryRegionOps {
	uint64_t                   (*read)(void *, hwaddr, unsigned int); /*     0     8 */
	void                       (*write)(void *, hwaddr, uint64_t, unsigned int); /*     8     8 */
	MemTxResult                (*read_with_attrs)(void *, hwaddr, uint64_t *, unsigned int, MemTxAttrs); /*    16     8 */
	MemTxResult                (*write_with_attrs)(void *, hwaddr, uint64_t, unsigned int, MemTxAttrs); /*    24     8 */
	enum device_endian         endianness;           /*    32     4 */
	/* XXX 4 bytes hole, try to pack */
	struct {
		unsigned int       min_access_size;      /*    40     4 */
		unsigned int       max_access_size;      /*    44     4 */
		_Bool              unaligned;            /*    48     1 */
		/* XXX 7 bytes hole, try to pack */
		_Bool              (*accepts)(void *, hwaddr, unsigned int, _Bool); /*    56     8 */
	} valid;                                         /*    40    24 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	struct {
		unsigned int       min_access_size;      /*    64     4 */
		unsigned int       max_access_size;      /*    68     4 */
		_Bool              unaligned;            /*    72     1 */
	} impl;                                          /*    64    12 */
	/* XXX last struct has 3 bytes of padding */
	/* XXX 4 bytes hole, try to pack */
	const MemoryRegionMmio     old_mmio;             /*    80    48 */
	/* size: 128, cachelines: 2, members: 8 */
	/* sum members: 120, holes: 2, sum holes: 8 */
	/* paddings: 1, sum paddings: 3 */
};
struct MemoryRegionIoeventfd;
typedef struct MemoryRegionIoeventfd MemoryRegionIoeventfd;
struct MemoryRegionIoeventfd {
	AddrRange                  addr;                 /*     0    32 */
	_Bool                      match_data;           /*    32     1 */
	/* XXX 7 bytes hole, try to pack */
	uint64_t                   data;                 /*    40     8 */
	EventNotifier *            e;                    /*    48     8 */
	/* size: 64, cachelines: 1, members: 4 */
	/* sum members: 49, holes: 1, sum holes: 7 */
	/* padding: 8 */
};
struct MemoryRegion;
typedef struct MemoryRegion MemoryRegion;
struct MemoryRegion {
	Object                     parent_obj;           /*     0    40 */
	_Bool                      romd_mode;            /*    40     1 */
	_Bool                      ram;                  /*    41     1 */
	_Bool                      subpage;              /*    42     1 */
	_Bool                      readonly;             /*    43     1 */
	_Bool                      rom_device;           /*    44     1 */
	_Bool                      flush_coalesced_mmio; /*    45     1 */
	_Bool                      global_locking;       /*    46     1 */
	uint8_t                    dirty_log_mask;       /*    47     1 */
	RAMBlock *                 ram_block;            /*    48     8 */
	Object *                   owner;                /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	const MemoryRegionIOMMUOps  * iommu_ops;         /*    64     8 */
	const MemoryRegionOps  *   ops;                  /*    72     8 */
	void *                     opaque;               /*    80     8 */
	MemoryRegion *             container;            /*    88     8 */
	Int128                     size;                 /*    96    16 */
	hwaddr                     addr;                 /*   112     8 */
	void                       (*destructor)(MemoryRegion *); /*   120     8 */
	/* --- cacheline 2 boundary (128 bytes) --- */
	uint64_t                   align;                /*   128     8 */
	_Bool                      terminates;           /*   136     1 */
	_Bool                      ram_device;           /*   137     1 */
	_Bool                      enabled;              /*   138     1 */
	_Bool                      warning_printed;      /*   139     1 */
	uint8_t                    vga_logging_count;    /*   140     1 */
	/* XXX 3 bytes hole, try to pack */
	MemoryRegion *             alias;                /*   144     8 */
	hwaddr                     alias_offset;         /*   152     8 */
	int32_t                    priority;             /*   160     4 */
	/* XXX 4 bytes hole, try to pack */
	struct subregions          subregions;           /*   168    16 */
	struct {
		struct MemoryRegion * tqe_next;          /*   184     8 */
		/* --- cacheline 3 boundary (192 bytes) --- */
		struct MemoryRegion * * tqe_prev;        /*   192     8 */
	} subregions_link;                               /*   184    16 */
	struct coalesced_ranges    coalesced;            /*   200    16 */
	const char  *              name;                 /*   216     8 */
	unsigned int               ioeventfd_nb;         /*   224     4 */
	/* XXX 4 bytes hole, try to pack */
	MemoryRegionIoeventfd *    ioeventfds;           /*   232     8 */
	struct {
		struct IOMMUNotifier * lh_first;         /*   240     8 */
	} iommu_notify;                                  /*   240     8 */
	IOMMUNotifierFlag          iommu_notify_flags;   /*   248     4 */
	/* size: 256, cachelines: 4, members: 35 */
	/* sum members: 241, holes: 3, sum holes: 11 */
	/* padding: 4 */
};
struct MemoryRegionSection;
typedef struct MemoryRegionSection MemoryRegionSection;
struct MemoryRegionSection {
	MemoryRegion *             mr;                   /*     0     8 */
	AddressSpace *             address_space;        /*     8     8 */
	hwaddr                     offset_within_region; /*    16     8 */
	/* XXX 8 bytes hole, try to pack */
	Int128                     size;                 /*    32    16 */
	hwaddr                     offset_within_address_space; /*    48     8 */
	_Bool                      readonly;             /*    56     1 */
	/* size: 64, cachelines: 1, members: 6 */
	/* sum members: 49, holes: 1, sum holes: 8 */
	/* padding: 7 */
};
struct MemoryListener;
typedef struct MemoryListener MemoryListener;
struct MemoryListener {
	void                       (*begin)(MemoryListener *); /*     0     8 */
	void                       (*commit)(MemoryListener *); /*     8     8 */
	void                       (*region_add)(MemoryListener *, MemoryRegionSection *); /*    16     8 */
	void                       (*region_del)(MemoryListener *, MemoryRegionSection *); /*    24     8 */
	void                       (*region_nop)(MemoryListener *, MemoryRegionSection *); /*    32     8 */
	void                       (*log_start)(MemoryListener *, MemoryRegionSection *, int, int); /*    40     8 */
	void                       (*log_stop)(MemoryListener *, MemoryRegionSection *, int, int); /*    48     8 */
	void                       (*log_sync)(MemoryListener *, MemoryRegionSection *); /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	void                       (*log_global_start)(MemoryListener *); /*    64     8 */
	void                       (*log_global_stop)(MemoryListener *); /*    72     8 */
	void                       (*eventfd_add)(MemoryListener *, MemoryRegionSection *, _Bool, uint64_t, EventNotifier *); /*    80     8 */
	void                       (*eventfd_del)(MemoryListener *, MemoryRegionSection *, _Bool, uint64_t, EventNotifier *); /*    88     8 */
	void                       (*coalesced_mmio_add)(MemoryListener *, MemoryRegionSection *, hwaddr, hwaddr); /*    96     8 */
	void                       (*coalesced_mmio_del)(MemoryListener *, MemoryRegionSection *, hwaddr, hwaddr); /*   104     8 */
	unsigned int               priority;             /*   112     4 */
	/* XXX 4 bytes hole, try to pack */
	AddressSpace *             address_space;        /*   120     8 */
	/* --- cacheline 2 boundary (128 bytes) --- */
	struct {
		struct MemoryListener * tqe_next;        /*   128     8 */
		struct MemoryListener * * tqe_prev;      /*   136     8 */
	} link;                                          /*   128    16 */
	struct {
		struct MemoryListener * tqe_next;        /*   144     8 */
		struct MemoryListener * * tqe_prev;      /*   152     8 */
	} link_as;                                       /*   144    16 */
	/* size: 160, cachelines: 3, members: 18 */
	/* sum members: 156, holes: 1, sum holes: 4 */
	/* last cacheline: 32 bytes */
};
struct QString;
typedef struct QString QString;
struct QString {
	QObject                    base;                 /*     0    16 */
	char *                     string;               /*    16     8 */
	size_t                     length;               /*    24     8 */
	size_t                     capacity;             /*    32     8 */
	/* size: 40, cachelines: 1, members: 4 */
	/* last cacheline: 40 bytes */
};
struct QemuOpts;
typedef struct QemuOpts QemuOpts;
struct QemuOpts {
	char *                     id;                   /*     0     8 */
	QemuOptsList *             list;                 /*     8     8 */
	Location                   loc;                  /*    16    24 */
	struct QemuOptHead         head;                 /*    40    16 */
	struct {
		struct QemuOpts *  tqe_next;             /*    56     8 */
		/* --- cacheline 1 boundary (64 bytes) --- */
		struct QemuOpts * * tqe_prev;            /*    64     8 */
	} next;                                          /*    56    16 */
	/* size: 72, cachelines: 2, members: 5 */
	/* last cacheline: 8 bytes */
};
struct DeviceState;
typedef struct DeviceState DeviceState;
struct BusState;
typedef struct BusState BusState;
struct DeviceState {
	Object                     parent_obj;           /*     0    40 */
	const char  *              id;                   /*    40     8 */
	_Bool                      realized;             /*    48     1 */
	_Bool                      pending_deleted_event; /*    49     1 */
	/* XXX 6 bytes hole, try to pack */
	QemuOpts *                 opts;                 /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	int                        hotplugged;           /*    64     4 */
	/* XXX 4 bytes hole, try to pack */
	BusState *                 parent_bus;           /*    72     8 */
	struct {
		struct NamedGPIOList * lh_first;         /*    80     8 */
	} gpios;                                         /*    80     8 */
	struct {
		struct BusState *  lh_first;             /*    88     8 */
	} child_bus;                                     /*    88     8 */
	int                        num_child_bus;        /*    96     4 */
	int                        instance_id_alias;    /*   100     4 */
	int                        alias_required_for_version; /*   104     4 */
	/* size: 112, cachelines: 2, members: 12 */
	/* sum members: 98, holes: 2, sum holes: 10 */
	/* padding: 4 */
	/* last cacheline: 48 bytes */
};
struct Chardev;
typedef struct Chardev Chardev;
struct Chardev {
	Object                     parent_obj;           /*     0    40 */
	QemuMutex                  chr_write_lock;       /*    40    40 */
	/* --- cacheline 1 boundary (64 bytes) was 16 bytes ago --- */
	CharBackend *              be;                   /*    80     8 */
	char *                     label;                /*    88     8 */
	char *                     filename;             /*    96     8 */
	int                        logfd;                /*   104     4 */
	int                        be_open;              /*   108     4 */
	guint                      fd_in_tag;            /*   112     4 */
	/* XXX 4 bytes hole, try to pack */
	long unsigned int          features[1];          /*   120     8 */
	/* --- cacheline 2 boundary (128 bytes) --- */
	struct {
		struct Chardev *   tqe_next;             /*   128     8 */
		struct Chardev * * tqe_prev;             /*   136     8 */
	} next;                                          /*   128    16 */
	/* size: 144, cachelines: 3, members: 10 */
	/* sum members: 140, holes: 1, sum holes: 4 */
	/* last cacheline: 16 bytes */
};
struct MachineState;
typedef struct MachineState MachineState;
struct MachineState {
	Object                     parent_obj;           /*     0    40 */
	Notifier                   sysbus_notifier;      /*    40    24 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	char *                     accel;                /*    64     8 */
	_Bool                      kernel_irqchip_allowed; /*    72     1 */
	_Bool                      kernel_irqchip_required; /*    73     1 */
	_Bool                      kernel_irqchip_split; /*    74     1 */
	/* XXX 1 byte hole, try to pack */
	int                        kvm_shadow_mem;       /*    76     4 */
	char *                     dtb;                  /*    80     8 */
	char *                     dumpdtb;              /*    88     8 */
	int                        phandle_start;        /*    96     4 */
	/* XXX 4 bytes hole, try to pack */
	char *                     dt_compatible;        /*   104     8 */
	_Bool                      dump_guest_core;      /*   112     1 */
	_Bool                      mem_merge;            /*   113     1 */
	_Bool                      usb;                  /*   114     1 */
	_Bool                      usb_disabled;         /*   115     1 */
	_Bool                      igd_gfx_passthru;     /*   116     1 */
	/* XXX 3 bytes hole, try to pack */
	char *                     firmware;             /*   120     8 */
	/* --- cacheline 2 boundary (128 bytes) --- */
	_Bool                      iommu;                /*   128     1 */
	_Bool                      suppress_vmdesc;      /*   129     1 */
	_Bool                      enforce_config_section; /*   130     1 */
	_Bool                      enable_graphics;      /*   131     1 */
	int                        board_id;             /*   132     4 */
	char *                     mem_map_str;          /*   136     8 */
	ram_addr_t                 ram_size;             /*   144     8 */
	ram_addr_t                 maxram_size;          /*   152     8 */
	uint64_t                   ram_slots;            /*   160     8 */
	const char  *              boot_order;           /*   168     8 */
	char *                     kernel_filename;      /*   176     8 */
	char *                     kernel_cmdline;       /*   184     8 */
	/* --- cacheline 3 boundary (192 bytes) --- */
	char *                     initrd_filename;      /*   192     8 */
	const char  *              cpu_model;            /*   200     8 */
	AccelState *               accelerator;          /*   208     8 */
	CPUArchIdList *            possible_cpus;        /*   216     8 */
	/* size: 224, cachelines: 4, members: 33 */
	/* sum members: 216, holes: 3, sum holes: 8 */
	/* last cacheline: 32 bytes */
};
struct Monitor;
typedef struct Monitor Monitor;
struct Monitor {
	CharBackend                chr;                  /*     0    48 */
	int                        reset_seen;           /*    48     4 */
	int                        flags;                /*    52     4 */
	int                        suspend_cnt;          /*    56     4 */
	_Bool                      skip_flush;           /*    60     1 */
	/* XXX 3 bytes hole, try to pack */
	/* --- cacheline 1 boundary (64 bytes) --- */
	QemuMutex                  out_lock;             /*    64    40 */
	QString *                  outbuf;               /*   104     8 */
	guint                      out_watch;            /*   112     4 */
	int                        mux_out;              /*   116     4 */
	ReadLineState *            rs;                   /*   120     8 */
	/* --- cacheline 2 boundary (128 bytes) --- */
	MonitorQMP                 qmp;                  /*   128    72 */
	/* --- cacheline 3 boundary (192 bytes) was 8 bytes ago --- */
	CPUState *                 mon_cpu;              /*   200     8 */
	BlockCompletionFunc *      password_completion_cb; /*   208     8 */
	void *                     password_opaque;      /*   216     8 */
	mon_cmd_t *                cmd_table;            /*   224     8 */
	struct {
		struct mon_fd_t *  lh_first;             /*   232     8 */
	} fds;                                           /*   232     8 */
	struct {
		struct Monitor *   le_next;              /*   240     8 */
		struct Monitor * * le_prev;              /*   248     8 */
	} entry;                                         /*   240    16 */
	/* size: 256, cachelines: 4, members: 17 */
	/* sum members: 253, holes: 1, sum holes: 3 */
};
struct BusState;
typedef struct BusState BusState;
struct BusState {
	Object                     obj;                  /*     0    40 */
	DeviceState *              parent;               /*    40     8 */
	char *                     name;                 /*    48     8 */
	HotplugHandler *           hotplug_handler;      /*    56     8 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	int                        max_index;            /*    64     4 */
	_Bool                      realized;             /*    68     1 */
	/* XXX 3 bytes hole, try to pack */
	struct ChildrenHead        children;             /*    72    16 */
	struct {
		struct BusState *  le_next;              /*    88     8 */
		struct BusState * * le_prev;             /*    96     8 */
	} sibling;                                       /*    88    16 */
	/* size: 104, cachelines: 2, members: 8 */
	/* sum members: 101, holes: 1, sum holes: 3 */
	/* last cacheline: 40 bytes */
};
struct CPUARMState;
typedef struct CPUARMState CPUARMState;
struct CPUARMState {
	uint32_t                   regs[16];             /*     0    64 */
	/* --- cacheline 1 boundary (64 bytes) --- */
	uint64_t                   xregs[32];            /*    64   256 */
	/* --- cacheline 5 boundary (320 bytes) --- */
	uint64_t                   pc;                   /*   320     8 */
	uint32_t                   pstate;               /*   328     4 */
	uint32_t                   aarch64;              /*   332     4 */
	uint32_t                   uncached_cpsr;        /*   336     4 */
	uint32_t                   spsr;                 /*   340     4 */
	uint64_t                   banked_spsr[8];       /*   344    64 */
	/* --- cacheline 6 boundary (384 bytes) was 24 bytes ago --- */
	uint32_t                   banked_r13[8];        /*   408    32 */
	uint32_t                   banked_r14[8];        /*   440    32 */
	/* --- cacheline 7 boundary (448 bytes) was 24 bytes ago --- */
	uint32_t                   usr_regs[5];          /*   472    20 */
	uint32_t                   fiq_regs[5];          /*   492    20 */
	/* --- cacheline 8 boundary (512 bytes) --- */
	uint32_t                   CF;                   /*   512     4 */
	uint32_t                   VF;                   /*   516     4 */
	uint32_t                   NF;                   /*   520     4 */
	uint32_t                   ZF;                   /*   524     4 */
	uint32_t                   QF;                   /*   528     4 */
	uint32_t                   GE;                   /*   532     4 */
	uint32_t                   thumb;                /*   536     4 */
	uint32_t                   condexec_bits;        /*   540     4 */
	uint64_t                   daif;                 /*   544     8 */
	uint64_t                   elr_el[4];            /*   552    32 */
	/* --- cacheline 9 boundary (576 bytes) was 8 bytes ago --- */
	uint64_t                   sp_el[4];             /*   584    32 */
	struct {
		uint32_t           c0_cpuid;             /*   616     4 */
		/* XXX 4 bytes hole, try to pack */
		union {
			struct {
				uint64_t _unused_csselr0; /*   624     8 */
				uint64_t csselr_ns;      /*   632     8 */
				/* --- cacheline 10 boundary (640 bytes) --- */
				uint64_t _unused_csselr1; /*   640     8 */
				uint64_t csselr_s;       /*   648     8 */
			};                               /*   624    32 */
			uint64_t   csselr_el[4];         /*   624    32 */
		};                                       /*   624    32 */
		/* --- cacheline 10 boundary (640 bytes) was 16 bytes ago --- */
		union {
			struct {
				uint64_t _unused_sctlr;  /*   656     8 */
				uint64_t sctlr_ns;       /*   664     8 */
				uint64_t hsctlr;         /*   672     8 */
				uint64_t sctlr_s;        /*   680     8 */
			};                               /*   656    32 */
			uint64_t   sctlr_el[4];          /*   656    32 */
		};                                       /*   656    32 */
		uint64_t           cpacr_el1;            /*   688     8 */
		uint64_t           cptr_el[4];           /*   696    32 */
		/* --- cacheline 11 boundary (704 bytes) was 24 bytes ago --- */
		uint32_t           c1_xscaleauxcr;       /*   728     4 */
		/* XXX 4 bytes hole, try to pack */
		uint64_t           sder;                 /*   736     8 */
		uint32_t           nsacr;                /*   744     4 */
		/* XXX 4 bytes hole, try to pack */
		union {
			struct {
				uint64_t _unused_ttbr0_0; /*   752     8 */
				uint64_t ttbr0_ns;       /*   760     8 */
				/* --- cacheline 12 boundary (768 bytes) --- */
				uint64_t _unused_ttbr0_1; /*   768     8 */
				uint64_t ttbr0_s;        /*   776     8 */
			};                               /*   752    32 */
			uint64_t   ttbr0_el[4];          /*   752    32 */
		};                                       /*   752    32 */
		/* --- cacheline 12 boundary (768 bytes) was 16 bytes ago --- */
		union {
			struct {
				uint64_t _unused_ttbr1_0; /*   784     8 */
				uint64_t ttbr1_ns;       /*   792     8 */
				uint64_t _unused_ttbr1_1; /*   800     8 */
				uint64_t ttbr1_s;        /*   808     8 */
			};                               /*   784    32 */
			uint64_t   ttbr1_el[4];          /*   784    32 */
		};                                       /*   784    32 */
		uint64_t           vttbr_el2;            /*   816     8 */
		TCR                tcr_el[4];            /*   824    64 */
		/* --- cacheline 13 boundary (832 bytes) was 56 bytes ago --- */
		TCR                vtcr_el2;             /*   888    16 */
		/* --- cacheline 14 boundary (896 bytes) was 8 bytes ago --- */
		uint32_t           c2_data;              /*   904     4 */
		uint32_t           c2_insn;              /*   908     4 */
			struct {
				uint64_t dacr_ns;        /*   912     8 */
				uint64_t dacr_s;         /*   920     8 */
			};                               /*   912    16 */
		uint32_t           pmsav5_data_ap;       /*   928     4 */
		uint32_t           pmsav5_insn_ap;       /*   932     4 */
		uint64_t           hcr_el2;              /*   936     8 */
		uint64_t           scr_el3;              /*   944     8 */
			struct {
				uint64_t ifsr_ns;        /*   952     8 */
				/* --- cacheline 15 boundary (960 bytes) --- */
				uint64_t ifsr_s;         /*   960     8 */
			};                               /*   952    16 */
		/* --- cacheline 15 boundary (960 bytes) was 8 bytes ago --- */
			struct {
				uint64_t _unused_dfsr;   /*   968     8 */
				uint64_t dfsr_ns;        /*   976     8 */
				uint64_t hsr;            /*   984     8 */
				uint64_t dfsr_s;         /*   992     8 */
			};                               /*   968    32 */
		uint32_t           c6_region[8];         /*  1000    32 */
		/* --- cacheline 16 boundary (1024 bytes) was 8 bytes ago --- */
			struct {
				uint64_t _unused_far0;   /*  1032     8 */
				uint32_t dfar_ns;        /*  1040     4 */
				uint32_t ifar_ns;        /*  1044     4 */
				uint32_t dfar_s;         /*  1048     4 */
				uint32_t ifar_s;         /*  1052     4 */
				uint64_t _unused_far3;   /*  1056     8 */
			};                               /*  1032    32 */
		uint64_t           hpfar_el2;            /*  1064     8 */
		uint64_t           hstr_el2;             /*  1072     8 */
			struct {
				uint64_t _unused_par_0;  /*  1080     8 */
				/* --- cacheline 17 boundary (1088 bytes) --- */
				uint64_t par_ns;         /*  1088     8 */
				uint64_t _unused_par_1;  /*  1096     8 */
				uint64_t par_s;          /*  1104     8 */
			};                               /*  1080    32 */
		/* --- cacheline 17 boundary (1088 bytes) was 24 bytes ago --- */
		uint32_t           c6_rgnr;              /*  1112     4 */
		uint32_t           c9_insn;              /*  1116     4 */
		uint32_t           c9_data;              /*  1120     4 */
		/* XXX 4 bytes hole, try to pack */
		uint64_t           c9_pmcr;              /*  1128     8 */
		uint64_t           c9_pmcnten;           /*  1136     8 */
		uint32_t           c9_pmovsr;            /*  1144     4 */
		uint32_t           c9_pmuserenr;         /*  1148     4 */
		/* --- cacheline 18 boundary (1152 bytes) --- */
		uint64_t           c9_pmselr;            /*  1152     8 */
		uint64_t           c9_pminten;           /*  1160     8 */
			struct {
				uint64_t _unused_mair_0; /*  1168     8 */
				uint32_t mair0_ns;       /*  1176     4 */
				uint32_t mair1_ns;       /*  1180     4 */
				uint64_t _unused_mair_1; /*  1184     8 */
				uint32_t mair0_s;        /*  1192     4 */
				uint32_t mair1_s;        /*  1196     4 */
			};                               /*  1168    32 */
			struct {
				uint64_t _unused_vbar;   /*  1200     8 */
				uint64_t vbar_ns;        /*  1208     8 */
				/* --- cacheline 19 boundary (1216 bytes) --- */
				uint64_t hvbar;          /*  1216     8 */
				uint64_t vbar_s;         /*  1224     8 */
			};                               /*  1200    32 */
		/* --- cacheline 19 boundary (1216 bytes) was 16 bytes ago --- */
		uint32_t           mvbar;                /*  1232     4 */
		struct {
			uint32_t   fcseidr_ns;           /*  1236     4 */
			uint32_t   fcseidr_s;            /*  1240     4 */
		};                                       /*  1236     8 */
		/* XXX 4 bytes hole, try to pack */
			struct {
				uint64_t _unused_contextidr_0; /*  1248     8 */
				uint64_t contextidr_ns;  /*  1256     8 */
				uint64_t _unused_contextidr_1; /*  1264     8 */
				uint64_t contextidr_s;   /*  1272     8 */
			};                               /*  1248    32 */
		/* --- cacheline 20 boundary (1280 bytes) --- */
			struct {
				uint64_t tpidrurw_ns;    /*  1280     8 */
				uint64_t tpidrprw_ns;    /*  1288     8 */
				uint64_t htpidr;         /*  1296     8 */
				uint64_t _tpidr_el3;     /*  1304     8 */
			};                               /*  1280    32 */
		uint64_t           tpidrurw_s;           /*  1312     8 */
		uint64_t           tpidrprw_s;           /*  1320     8 */
		uint64_t           tpidruro_s;           /*  1328     8 */
			uint64_t   tpidruro_ns;          /*  1336     8 */
		/* --- cacheline 21 boundary (1344 bytes) --- */
		uint64_t           c14_cntfrq;           /*  1344     8 */
		uint64_t           c14_cntkctl;          /*  1352     8 */
		uint32_t           cnthctl_el2;          /*  1360     4 */
		/* XXX 4 bytes hole, try to pack */
		uint64_t           cntvoff_el2;          /*  1368     8 */
		ARMGenericTimer    c14_timer[4];         /*  1376    64 */
		/* --- cacheline 22 boundary (1408 bytes) was 32 bytes ago --- */
		uint32_t           c15_cpar;             /*  1440     4 */
		uint32_t           c15_ticonfig;         /*  1444     4 */
		uint32_t           c15_i_max;            /*  1448     4 */
		uint32_t           c15_i_min;            /*  1452     4 */
		uint32_t           c15_threadid;         /*  1456     4 */
		uint32_t           c15_config_base_address; /*  1460     4 */
		uint32_t           c15_diagnostic;       /*  1464     4 */
		uint32_t           c15_power_diagnostic; /*  1468     4 */
		/* --- cacheline 23 boundary (1472 bytes) --- */
		uint32_t           c15_power_control;    /*  1472     4 */
		/* XXX 4 bytes hole, try to pack */
		uint64_t           dbgbvr[16];           /*  1480   128 */
		/* --- cacheline 25 boundary (1600 bytes) was 8 bytes ago --- */
		uint64_t           dbgbcr[16];           /*  1608   128 */
		/* --- cacheline 27 boundary (1728 bytes) was 8 bytes ago --- */
		uint64_t           dbgwvr[16];           /*  1736   128 */
		/* --- cacheline 29 boundary (1856 bytes) was 8 bytes ago --- */
		uint64_t           dbgwcr[16];           /*  1864   128 */
		/* --- cacheline 31 boundary (1984 bytes) was 8 bytes ago --- */
		uint64_t           mdscr_el1;            /*  1992     8 */
		uint64_t           oslsr_el1;            /*  2000     8 */
		uint64_t           mdcr_el2;             /*  2008     8 */
		uint64_t           mdcr_el3;             /*  2016     8 */
		uint64_t           c15_ccnt;             /*  2024     8 */
		uint64_t           pmccfiltr_el0;        /*  2032     8 */
		uint64_t           vpidr_el2;            /*  2040     8 */
		/* --- cacheline 32 boundary (2048 bytes) --- */
		uint64_t           vmpidr_el2;           /*  2048     8 */
	} cp15;                                          /*   616  1440 */
	struct {
		uint32_t           other_sp;             /*  2056     4 */
		uint32_t           vecbase;              /*  2060     4 */
		uint32_t           basepri;              /*  2064     4 */
		uint32_t           control;              /*  2068     4 */
		uint32_t           ccr;                  /*  2072     4 */
		uint32_t           cfsr;                 /*  2076     4 */
		uint32_t           hfsr;                 /*  2080     4 */
		uint32_t           dfsr;                 /*  2084     4 */
		uint32_t           mmfar;                /*  2088     4 */
		uint32_t           bfar;                 /*  2092     4 */
		int                exception;            /*  2096     4 */
	} v7m;                                           /*  2056    44 */
	/* XXX 4 bytes hole, try to pack */
	struct {
		uint32_t           syndrome;             /*  2104     4 */
		uint32_t           fsr;                  /*  2108     4 */
		/* --- cacheline 33 boundary (2112 bytes) --- */
		uint64_t           vaddress;             /*  2112     8 */
		uint32_t           target_el;            /*  2120     4 */
	} exception;                                     /*  2104    24 */
	/* XXX last struct has 4 bytes of padding */
	uint32_t                   teecr;                /*  2128     4 */
	uint32_t                   teehbr;               /*  2132     4 */
	struct {
		float64            regs[64];             /*  2136   512 */
		/* --- cacheline 41 boundary (2624 bytes) was 24 bytes ago --- */
		uint32_t           xregs[16];            /*  2648    64 */
		/* --- cacheline 42 boundary (2688 bytes) was 24 bytes ago --- */
		int                vec_len;              /*  2712     4 */
		int                vec_stride;           /*  2716     4 */
		uint32_t           scratch[8];           /*  2720    32 */
		/* --- cacheline 43 boundary (2752 bytes) --- */
		float_status       fp_status;            /*  2752     8 */
		float_status       standard_fp_status;   /*  2760     8 */
	} vfp;                                           /*  2136   632 */
	uint64_t                   exclusive_addr;       /*  2768     8 */
	uint64_t                   exclusive_val;        /*  2776     8 */
	uint64_t                   exclusive_high;       /*  2784     8 */
	struct {
		uint64_t           regs[16];             /*  2792   128 */
		/* --- cacheline 45 boundary (2880 bytes) was 40 bytes ago --- */
		uint64_t           val;                  /*  2920     8 */
		uint32_t           cregs[16];            /*  2928    64 */
	} iwmmxt;                                        /*  2792   200 */
	/* --- cacheline 46 boundary (2944 bytes) was 48 bytes ago --- */
	struct CPUBreakpoint *     cpu_breakpoint[16];   /*  2992   128 */
	/* --- cacheline 48 boundary (3072 bytes) was 48 bytes ago --- */
	struct CPUWatchpoint *     cpu_watchpoint[16];   /*  3120   128 */
	/* --- cacheline 50 boundary (3200 bytes) was 48 bytes ago --- */
	struct {
	} end_reset_fields;                              /*  3248     0 */
	CPUTLBEntry                tlb_table[7][256];    /*  3248 57344 */
	/* --- cacheline 946 boundary (60544 bytes) was 48 bytes ago --- */
	CPUTLBEntry                tlb_v_table[7][8];    /* 60592  1792 */
	/* --- cacheline 974 boundary (62336 bytes) was 48 bytes ago --- */
	CPUIOTLBEntry              iotlb[7][256];        /* 62384 28672 */
	/* --- cacheline 1422 boundary (91008 bytes) was 48 bytes ago --- */
	CPUIOTLBEntry              iotlb_v[7][8];        /* 91056   896 */
	/* --- cacheline 1436 boundary (91904 bytes) was 48 bytes ago --- */
	target_ulong               tlb_flush_addr;       /* 91952     4 */
	target_ulong               tlb_flush_mask;       /* 91956     4 */
	target_ulong               vtlb_index;           /* 91960     4 */
	/* XXX 4 bytes hole, try to pack */
	/* --- cacheline 1437 boundary (91968 bytes) --- */
	uint64_t                   features;             /* 91968     8 */
	struct {
		uint32_t *         drbar;                /* 91976     8 */
		uint32_t *         drsr;                 /* 91984     8 */
		uint32_t *         dracr;                /* 91992     8 */
	} pmsav7;                                        /* 91976    24 */
	void *                     nvic;                 /* 92000     8 */
	const struct arm_boot_info  * boot_info;         /* 92008     8 */
	void *                     gicv3state;           /* 92016     8 */
	/* size: 92024, cachelines: 1438, members: 48 */
	/* sum members: 92016, holes: 2, sum holes: 8 */
	/* paddings: 1, sum paddings: 4 */
	/* last cacheline: 56 bytes */
};
struct CPUState;
typedef struct CPUState CPUState;
struct CPUState {
	DeviceState                parent_obj;           /*     0   112 */
	/* --- cacheline 1 boundary (64 bytes) was 48 bytes ago --- */
	int                        nr_cores;             /*   112     4 */
	int                        nr_threads;           /*   116     4 */
	int                        numa_node;            /*   120     4 */
	/* XXX 4 bytes hole, try to pack */
	/* --- cacheline 2 boundary (128 bytes) --- */
	struct QemuThread *        thread;               /*   128     8 */
	int                        thread_id;            /*   136     4 */
	uint32_t                   host_tid;             /*   140     4 */
	_Bool                      running;              /*   144     1 */
	_Bool                      has_waiter;           /*   145     1 */
	/* XXX 6 bytes hole, try to pack */
	struct QemuCond *          halt_cond;            /*   152     8 */
	_Bool                      thread_kicked;        /*   160     1 */
	_Bool                      created;              /*   161     1 */
	_Bool                      stop;                 /*   162     1 */
	_Bool                      stopped;              /*   163     1 */
	_Bool                      unplug;               /*   164     1 */
	_Bool                      crash_occurred;       /*   165     1 */
	_Bool                      exit_request;         /*   166     1 */
	/* XXX 1 byte hole, try to pack */
	uint32_t                   interrupt_request;    /*   168     4 */
	int                        singlestep_enabled;   /*   172     4 */
	int64_t                    icount_budget;        /*   176     8 */
	int64_t                    icount_extra;         /*   184     8 */
	/* --- cacheline 3 boundary (192 bytes) --- */
	sigjmp_buf                 jmp_env;              /*   192   200 */
	/* --- cacheline 6 boundary (384 bytes) was 8 bytes ago --- */
	QemuMutex                  work_mutex;           /*   392    40 */
	struct qemu_work_item *    queued_work_first;    /*   432     8 */
	struct qemu_work_item *    queued_work_last;     /*   440     8 */
	/* --- cacheline 7 boundary (448 bytes) --- */
	CPUAddressSpace *          cpu_ases;             /*   448     8 */
	int                        num_ases;             /*   456     4 */
	/* XXX 4 bytes hole, try to pack */
	AddressSpace *             as;                   /*   464     8 */
	MemoryRegion *             memory;               /*   472     8 */
	CPUARMState *                     env_ptr;              /*   480     8 */
	struct TranslationBlock *  tb_jmp_cache[4096];   /*   488 32768 */
	/* --- cacheline 519 boundary (33216 bytes) was 40 bytes ago --- */
	struct GDBRegisterState *  gdb_regs;             /* 33256     8 */
	int                        gdb_num_regs;         /* 33264     4 */
	int                        gdb_num_g_regs;       /* 33268     4 */
	struct {
		struct CPUState *  tqe_next;             /* 33272     8 */
		/* --- cacheline 520 boundary (33280 bytes) --- */
		struct CPUState * * tqe_prev;            /* 33280     8 */
	} node;                                          /* 33272    16 */
	struct breakpoints_head    breakpoints;          /* 33288    16 */
	struct watchpoints_head    watchpoints;          /* 33304    16 */
	CPUWatchpoint *            watchpoint_hit;       /* 33320     8 */
	_Bool                      watchpoints_disabled; /* 33328     1 */
	/* XXX 7 bytes hole, try to pack */
	void *                     opaque;               /* 33336     8 */
	/* --- cacheline 521 boundary (33344 bytes) --- */
	uintptr_t                  mem_io_pc;            /* 33344     8 */
	vaddr                      mem_io_vaddr;         /* 33352     8 */
	int                        kvm_fd;               /* 33360     4 */
	_Bool                      kvm_vcpu_dirty;       /* 33364     1 */
	/* XXX 3 bytes hole, try to pack */
	struct KVMState *          kvm_state;            /* 33368     8 */
	struct kvm_run *           kvm_run;              /* 33376     8 */
	long unsigned int *        trace_dstate;         /* 33384     8 */
	int                        cpu_index;            /* 33392     4 */
	uint32_t                   halted;               /* 33396     4 */
		uint32_t           u32;                  /* 33400     4 */
	uint32_t                   can_do_io;            /* 33404     4 */
	/* --- cacheline 522 boundary (33408 bytes) --- */
	int32_t                    exception_index;      /* 33408     4 */
	/* XXX 4 bytes hole, try to pack */
	uint64_t                   rr_guest_instr_count; /* 33416     8 */
	vaddr                      panda_guest_pc;       /* 33424     8 */
	uint8_t                    reverse_flags;        /* 33432     1 */
	/* XXX 7 bytes hole, try to pack */
	uint64_t                   last_gdb_instr;       /* 33440     8 */
	uint64_t                   last_bp_hit_instr;    /* 33448     8 */
	uint64_t                   temp_rr_bp_instr;     /* 33456     8 */
	_Bool                      throttle_thread_scheduled; /* 33464     1 */
	/* XXX 3 bytes hole, try to pack */
	uint32_t                   tcg_exit_req;         /* 33468     4 */
	/* --- cacheline 523 boundary (33472 bytes) --- */
	_Bool                      hax_vcpu_dirty;       /* 33472     1 */
	/* XXX 7 bytes hole, try to pack */
	struct hax_vcpu_state *    hax_vcpu;             /* 33480     8 */
	uint16_t                   pending_tlb_flush;    /* 33488     2 */
	/* size: 33496, cachelines: 524, members: 63 */
	/* sum members: 33444, holes: 10, sum holes: 46 */
	/* padding: 6 */
	/* last cacheline: 24 bytes */
};
//Autogenerated PPP header from /home/luke/workspace/panda/panda/plugins/syscalls2/generated/syscalls_ext_typedefs_arm.h
typedef void (*on_ARM_breakpoint_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_ARM_breakpoint_enter(on_ARM_breakpoint_enter_t);
bool ppp_remove_cb_on_ARM_breakpoint_enter(on_ARM_breakpoint_enter_t);
typedef void (*on_ARM_breakpoint_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_ARM_breakpoint_return(on_ARM_breakpoint_return_t);
bool ppp_remove_cb_on_ARM_breakpoint_return(on_ARM_breakpoint_return_t);
typedef void (*on_ARM_cacheflush_enter_t)(CPUState* cpu, target_ulong pc, uint32_t start, uint32_t end, uint32_t flags);
void ppp_add_cb_on_ARM_cacheflush_enter(on_ARM_cacheflush_enter_t);
bool ppp_remove_cb_on_ARM_cacheflush_enter(on_ARM_cacheflush_enter_t);
typedef void (*on_ARM_cacheflush_return_t)(CPUState* cpu, target_ulong pc, uint32_t start, uint32_t end, uint32_t flags);
void ppp_add_cb_on_ARM_cacheflush_return(on_ARM_cacheflush_return_t);
bool ppp_remove_cb_on_ARM_cacheflush_return(on_ARM_cacheflush_return_t);
typedef void (*on_ARM_set_tls_enter_t)(CPUState* cpu, target_ulong pc, uint32_t arg);
void ppp_add_cb_on_ARM_set_tls_enter(on_ARM_set_tls_enter_t);
bool ppp_remove_cb_on_ARM_set_tls_enter(on_ARM_set_tls_enter_t);
typedef void (*on_ARM_set_tls_return_t)(CPUState* cpu, target_ulong pc, uint32_t arg);
void ppp_add_cb_on_ARM_set_tls_return(on_ARM_set_tls_return_t);
bool ppp_remove_cb_on_ARM_set_tls_return(on_ARM_set_tls_return_t);
typedef void (*on_ARM_user26_mode_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_ARM_user26_mode_enter(on_ARM_user26_mode_enter_t);
bool ppp_remove_cb_on_ARM_user26_mode_enter(on_ARM_user26_mode_enter_t);
typedef void (*on_ARM_user26_mode_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_ARM_user26_mode_return(on_ARM_user26_mode_return_t);
bool ppp_remove_cb_on_ARM_user26_mode_return(on_ARM_user26_mode_return_t);
typedef void (*on_ARM_usr32_mode_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_ARM_usr32_mode_enter(on_ARM_usr32_mode_enter_t);
bool ppp_remove_cb_on_ARM_usr32_mode_enter(on_ARM_usr32_mode_enter_t);
typedef void (*on_ARM_usr32_mode_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_ARM_usr32_mode_return(on_ARM_usr32_mode_return_t);
bool ppp_remove_cb_on_ARM_usr32_mode_return(on_ARM_usr32_mode_return_t);
typedef void (*on_do_mmap2_enter_t)(CPUState* cpu, target_ulong pc, uint32_t addr, uint32_t len, uint32_t prot, uint32_t flags, uint32_t fd, uint32_t pgoff);
void ppp_add_cb_on_do_mmap2_enter(on_do_mmap2_enter_t);
bool ppp_remove_cb_on_do_mmap2_enter(on_do_mmap2_enter_t);
typedef void (*on_do_mmap2_return_t)(CPUState* cpu, target_ulong pc, uint32_t addr, uint32_t len, uint32_t prot, uint32_t flags, uint32_t fd, uint32_t pgoff);
void ppp_add_cb_on_do_mmap2_return(on_do_mmap2_return_t);
bool ppp_remove_cb_on_do_mmap2_return(on_do_mmap2_return_t);
typedef void (*on_sys_accept_enter_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, uint32_t arg2);
void ppp_add_cb_on_sys_accept_enter(on_sys_accept_enter_t);
bool ppp_remove_cb_on_sys_accept_enter(on_sys_accept_enter_t);
typedef void (*on_sys_accept_return_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, uint32_t arg2);
void ppp_add_cb_on_sys_accept_return(on_sys_accept_return_t);
bool ppp_remove_cb_on_sys_accept_return(on_sys_accept_return_t);
typedef void (*on_sys_accept4_enter_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, uint32_t arg2, int32_t arg3);
void ppp_add_cb_on_sys_accept4_enter(on_sys_accept4_enter_t);
bool ppp_remove_cb_on_sys_accept4_enter(on_sys_accept4_enter_t);
typedef void (*on_sys_accept4_return_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, uint32_t arg2, int32_t arg3);
void ppp_add_cb_on_sys_accept4_return(on_sys_accept4_return_t);
bool ppp_remove_cb_on_sys_accept4_return(on_sys_accept4_return_t);
typedef void (*on_sys_access_enter_t)(CPUState* cpu, target_ulong pc, uint32_t filename, int32_t mode);
void ppp_add_cb_on_sys_access_enter(on_sys_access_enter_t);
bool ppp_remove_cb_on_sys_access_enter(on_sys_access_enter_t);
typedef void (*on_sys_access_return_t)(CPUState* cpu, target_ulong pc, uint32_t filename, int32_t mode);
void ppp_add_cb_on_sys_access_return(on_sys_access_return_t);
bool ppp_remove_cb_on_sys_access_return(on_sys_access_return_t);
typedef void (*on_sys_acct_enter_t)(CPUState* cpu, target_ulong pc, uint32_t name);
void ppp_add_cb_on_sys_acct_enter(on_sys_acct_enter_t);
bool ppp_remove_cb_on_sys_acct_enter(on_sys_acct_enter_t);
typedef void (*on_sys_acct_return_t)(CPUState* cpu, target_ulong pc, uint32_t name);
void ppp_add_cb_on_sys_acct_return(on_sys_acct_return_t);
bool ppp_remove_cb_on_sys_acct_return(on_sys_acct_return_t);
typedef void (*on_sys_add_key_enter_t)(CPUState* cpu, target_ulong pc, uint32_t _type, uint32_t _description, uint32_t _payload, uint32_t plen, uint32_t destringid);
void ppp_add_cb_on_sys_add_key_enter(on_sys_add_key_enter_t);
bool ppp_remove_cb_on_sys_add_key_enter(on_sys_add_key_enter_t);
typedef void (*on_sys_add_key_return_t)(CPUState* cpu, target_ulong pc, uint32_t _type, uint32_t _description, uint32_t _payload, uint32_t plen, uint32_t destringid);
void ppp_add_cb_on_sys_add_key_return(on_sys_add_key_return_t);
bool ppp_remove_cb_on_sys_add_key_return(on_sys_add_key_return_t);
typedef void (*on_sys_adjtimex_enter_t)(CPUState* cpu, target_ulong pc, uint32_t txc_p);
void ppp_add_cb_on_sys_adjtimex_enter(on_sys_adjtimex_enter_t);
bool ppp_remove_cb_on_sys_adjtimex_enter(on_sys_adjtimex_enter_t);
typedef void (*on_sys_adjtimex_return_t)(CPUState* cpu, target_ulong pc, uint32_t txc_p);
void ppp_add_cb_on_sys_adjtimex_return(on_sys_adjtimex_return_t);
bool ppp_remove_cb_on_sys_adjtimex_return(on_sys_adjtimex_return_t);
typedef void (*on_sys_alarm_enter_t)(CPUState* cpu, target_ulong pc, uint32_t seconds);
void ppp_add_cb_on_sys_alarm_enter(on_sys_alarm_enter_t);
bool ppp_remove_cb_on_sys_alarm_enter(on_sys_alarm_enter_t);
typedef void (*on_sys_alarm_return_t)(CPUState* cpu, target_ulong pc, uint32_t seconds);
void ppp_add_cb_on_sys_alarm_return(on_sys_alarm_return_t);
bool ppp_remove_cb_on_sys_alarm_return(on_sys_alarm_return_t);
typedef void (*on_sys_arm_fadvise64_64_enter_t)(CPUState* cpu, target_ulong pc, int32_t fd, int32_t advice, uint64_t offset, uint64_t len);
void ppp_add_cb_on_sys_arm_fadvise64_64_enter(on_sys_arm_fadvise64_64_enter_t);
bool ppp_remove_cb_on_sys_arm_fadvise64_64_enter(on_sys_arm_fadvise64_64_enter_t);
typedef void (*on_sys_arm_fadvise64_64_return_t)(CPUState* cpu, target_ulong pc, int32_t fd, int32_t advice, uint64_t offset, uint64_t len);
void ppp_add_cb_on_sys_arm_fadvise64_64_return(on_sys_arm_fadvise64_64_return_t);
bool ppp_remove_cb_on_sys_arm_fadvise64_64_return(on_sys_arm_fadvise64_64_return_t);
typedef void (*on_sys_bdflush_enter_t)(CPUState* cpu, target_ulong pc, int32_t func, int32_t _data);
void ppp_add_cb_on_sys_bdflush_enter(on_sys_bdflush_enter_t);
bool ppp_remove_cb_on_sys_bdflush_enter(on_sys_bdflush_enter_t);
typedef void (*on_sys_bdflush_return_t)(CPUState* cpu, target_ulong pc, int32_t func, int32_t _data);
void ppp_add_cb_on_sys_bdflush_return(on_sys_bdflush_return_t);
bool ppp_remove_cb_on_sys_bdflush_return(on_sys_bdflush_return_t);
typedef void (*on_sys_bind_enter_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, int32_t arg2);
void ppp_add_cb_on_sys_bind_enter(on_sys_bind_enter_t);
bool ppp_remove_cb_on_sys_bind_enter(on_sys_bind_enter_t);
typedef void (*on_sys_bind_return_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, int32_t arg2);
void ppp_add_cb_on_sys_bind_return(on_sys_bind_return_t);
bool ppp_remove_cb_on_sys_bind_return(on_sys_bind_return_t);
typedef void (*on_sys_bpf_enter_t)(CPUState* cpu, target_ulong pc, int32_t cmd, uint32_t attr, uint32_t size);
void ppp_add_cb_on_sys_bpf_enter(on_sys_bpf_enter_t);
bool ppp_remove_cb_on_sys_bpf_enter(on_sys_bpf_enter_t);
typedef void (*on_sys_bpf_return_t)(CPUState* cpu, target_ulong pc, int32_t cmd, uint32_t attr, uint32_t size);
void ppp_add_cb_on_sys_bpf_return(on_sys_bpf_return_t);
bool ppp_remove_cb_on_sys_bpf_return(on_sys_bpf_return_t);
typedef void (*on_sys_brk_enter_t)(CPUState* cpu, target_ulong pc, uint32_t brk);
void ppp_add_cb_on_sys_brk_enter(on_sys_brk_enter_t);
bool ppp_remove_cb_on_sys_brk_enter(on_sys_brk_enter_t);
typedef void (*on_sys_brk_return_t)(CPUState* cpu, target_ulong pc, uint32_t brk);
void ppp_add_cb_on_sys_brk_return(on_sys_brk_return_t);
bool ppp_remove_cb_on_sys_brk_return(on_sys_brk_return_t);
typedef void (*on_sys_capget_enter_t)(CPUState* cpu, target_ulong pc, uint32_t header, uint32_t dataptr);
void ppp_add_cb_on_sys_capget_enter(on_sys_capget_enter_t);
bool ppp_remove_cb_on_sys_capget_enter(on_sys_capget_enter_t);
typedef void (*on_sys_capget_return_t)(CPUState* cpu, target_ulong pc, uint32_t header, uint32_t dataptr);
void ppp_add_cb_on_sys_capget_return(on_sys_capget_return_t);
bool ppp_remove_cb_on_sys_capget_return(on_sys_capget_return_t);
typedef void (*on_sys_capset_enter_t)(CPUState* cpu, target_ulong pc, uint32_t header, uint32_t _data);
void ppp_add_cb_on_sys_capset_enter(on_sys_capset_enter_t);
bool ppp_remove_cb_on_sys_capset_enter(on_sys_capset_enter_t);
typedef void (*on_sys_capset_return_t)(CPUState* cpu, target_ulong pc, uint32_t header, uint32_t _data);
void ppp_add_cb_on_sys_capset_return(on_sys_capset_return_t);
bool ppp_remove_cb_on_sys_capset_return(on_sys_capset_return_t);
typedef void (*on_sys_chdir_enter_t)(CPUState* cpu, target_ulong pc, uint32_t filename);
void ppp_add_cb_on_sys_chdir_enter(on_sys_chdir_enter_t);
bool ppp_remove_cb_on_sys_chdir_enter(on_sys_chdir_enter_t);
typedef void (*on_sys_chdir_return_t)(CPUState* cpu, target_ulong pc, uint32_t filename);
void ppp_add_cb_on_sys_chdir_return(on_sys_chdir_return_t);
bool ppp_remove_cb_on_sys_chdir_return(on_sys_chdir_return_t);
typedef void (*on_sys_chmod_enter_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t mode);
void ppp_add_cb_on_sys_chmod_enter(on_sys_chmod_enter_t);
bool ppp_remove_cb_on_sys_chmod_enter(on_sys_chmod_enter_t);
typedef void (*on_sys_chmod_return_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t mode);
void ppp_add_cb_on_sys_chmod_return(on_sys_chmod_return_t);
bool ppp_remove_cb_on_sys_chmod_return(on_sys_chmod_return_t);
typedef void (*on_sys_chown_enter_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t user, uint32_t group);
void ppp_add_cb_on_sys_chown_enter(on_sys_chown_enter_t);
bool ppp_remove_cb_on_sys_chown_enter(on_sys_chown_enter_t);
typedef void (*on_sys_chown_return_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t user, uint32_t group);
void ppp_add_cb_on_sys_chown_return(on_sys_chown_return_t);
bool ppp_remove_cb_on_sys_chown_return(on_sys_chown_return_t);
typedef void (*on_sys_chown16_enter_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t user, uint32_t group);
void ppp_add_cb_on_sys_chown16_enter(on_sys_chown16_enter_t);
bool ppp_remove_cb_on_sys_chown16_enter(on_sys_chown16_enter_t);
typedef void (*on_sys_chown16_return_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t user, uint32_t group);
void ppp_add_cb_on_sys_chown16_return(on_sys_chown16_return_t);
bool ppp_remove_cb_on_sys_chown16_return(on_sys_chown16_return_t);
typedef void (*on_sys_chroot_enter_t)(CPUState* cpu, target_ulong pc, uint32_t filename);
void ppp_add_cb_on_sys_chroot_enter(on_sys_chroot_enter_t);
bool ppp_remove_cb_on_sys_chroot_enter(on_sys_chroot_enter_t);
typedef void (*on_sys_chroot_return_t)(CPUState* cpu, target_ulong pc, uint32_t filename);
void ppp_add_cb_on_sys_chroot_return(on_sys_chroot_return_t);
bool ppp_remove_cb_on_sys_chroot_return(on_sys_chroot_return_t);
typedef void (*on_sys_clock_adjtime_enter_t)(CPUState* cpu, target_ulong pc, uint32_t which_clock, uint32_t tx);
void ppp_add_cb_on_sys_clock_adjtime_enter(on_sys_clock_adjtime_enter_t);
bool ppp_remove_cb_on_sys_clock_adjtime_enter(on_sys_clock_adjtime_enter_t);
typedef void (*on_sys_clock_adjtime_return_t)(CPUState* cpu, target_ulong pc, uint32_t which_clock, uint32_t tx);
void ppp_add_cb_on_sys_clock_adjtime_return(on_sys_clock_adjtime_return_t);
bool ppp_remove_cb_on_sys_clock_adjtime_return(on_sys_clock_adjtime_return_t);
typedef void (*on_sys_clock_getres_enter_t)(CPUState* cpu, target_ulong pc, uint32_t which_clock, uint32_t tp);
void ppp_add_cb_on_sys_clock_getres_enter(on_sys_clock_getres_enter_t);
bool ppp_remove_cb_on_sys_clock_getres_enter(on_sys_clock_getres_enter_t);
typedef void (*on_sys_clock_getres_return_t)(CPUState* cpu, target_ulong pc, uint32_t which_clock, uint32_t tp);
void ppp_add_cb_on_sys_clock_getres_return(on_sys_clock_getres_return_t);
bool ppp_remove_cb_on_sys_clock_getres_return(on_sys_clock_getres_return_t);
typedef void (*on_sys_clock_gettime_enter_t)(CPUState* cpu, target_ulong pc, uint32_t which_clock, uint32_t tp);
void ppp_add_cb_on_sys_clock_gettime_enter(on_sys_clock_gettime_enter_t);
bool ppp_remove_cb_on_sys_clock_gettime_enter(on_sys_clock_gettime_enter_t);
typedef void (*on_sys_clock_gettime_return_t)(CPUState* cpu, target_ulong pc, uint32_t which_clock, uint32_t tp);
void ppp_add_cb_on_sys_clock_gettime_return(on_sys_clock_gettime_return_t);
bool ppp_remove_cb_on_sys_clock_gettime_return(on_sys_clock_gettime_return_t);
typedef void (*on_sys_clock_nanosleep_enter_t)(CPUState* cpu, target_ulong pc, uint32_t which_clock, int32_t flags, uint32_t rqtp, uint32_t rmtp);
void ppp_add_cb_on_sys_clock_nanosleep_enter(on_sys_clock_nanosleep_enter_t);
bool ppp_remove_cb_on_sys_clock_nanosleep_enter(on_sys_clock_nanosleep_enter_t);
typedef void (*on_sys_clock_nanosleep_return_t)(CPUState* cpu, target_ulong pc, uint32_t which_clock, int32_t flags, uint32_t rqtp, uint32_t rmtp);
void ppp_add_cb_on_sys_clock_nanosleep_return(on_sys_clock_nanosleep_return_t);
bool ppp_remove_cb_on_sys_clock_nanosleep_return(on_sys_clock_nanosleep_return_t);
typedef void (*on_sys_clock_settime_enter_t)(CPUState* cpu, target_ulong pc, uint32_t which_clock, uint32_t tp);
void ppp_add_cb_on_sys_clock_settime_enter(on_sys_clock_settime_enter_t);
bool ppp_remove_cb_on_sys_clock_settime_enter(on_sys_clock_settime_enter_t);
typedef void (*on_sys_clock_settime_return_t)(CPUState* cpu, target_ulong pc, uint32_t which_clock, uint32_t tp);
void ppp_add_cb_on_sys_clock_settime_return(on_sys_clock_settime_return_t);
bool ppp_remove_cb_on_sys_clock_settime_return(on_sys_clock_settime_return_t);
typedef void (*on_sys_clone_enter_t)(CPUState* cpu, target_ulong pc, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4);
void ppp_add_cb_on_sys_clone_enter(on_sys_clone_enter_t);
bool ppp_remove_cb_on_sys_clone_enter(on_sys_clone_enter_t);
typedef void (*on_sys_clone_return_t)(CPUState* cpu, target_ulong pc, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4);
void ppp_add_cb_on_sys_clone_return(on_sys_clone_return_t);
bool ppp_remove_cb_on_sys_clone_return(on_sys_clone_return_t);
typedef void (*on_sys_close_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd);
void ppp_add_cb_on_sys_close_enter(on_sys_close_enter_t);
bool ppp_remove_cb_on_sys_close_enter(on_sys_close_enter_t);
typedef void (*on_sys_close_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd);
void ppp_add_cb_on_sys_close_return(on_sys_close_return_t);
bool ppp_remove_cb_on_sys_close_return(on_sys_close_return_t);
typedef void (*on_sys_connect_enter_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, int32_t arg2);
void ppp_add_cb_on_sys_connect_enter(on_sys_connect_enter_t);
bool ppp_remove_cb_on_sys_connect_enter(on_sys_connect_enter_t);
typedef void (*on_sys_connect_return_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, int32_t arg2);
void ppp_add_cb_on_sys_connect_return(on_sys_connect_return_t);
bool ppp_remove_cb_on_sys_connect_return(on_sys_connect_return_t);
typedef void (*on_sys_creat_enter_t)(CPUState* cpu, target_ulong pc, uint32_t pathname, uint32_t mode);
void ppp_add_cb_on_sys_creat_enter(on_sys_creat_enter_t);
bool ppp_remove_cb_on_sys_creat_enter(on_sys_creat_enter_t);
typedef void (*on_sys_creat_return_t)(CPUState* cpu, target_ulong pc, uint32_t pathname, uint32_t mode);
void ppp_add_cb_on_sys_creat_return(on_sys_creat_return_t);
bool ppp_remove_cb_on_sys_creat_return(on_sys_creat_return_t);
typedef void (*on_sys_delete_module_enter_t)(CPUState* cpu, target_ulong pc, uint32_t name_user, uint32_t flags);
void ppp_add_cb_on_sys_delete_module_enter(on_sys_delete_module_enter_t);
bool ppp_remove_cb_on_sys_delete_module_enter(on_sys_delete_module_enter_t);
typedef void (*on_sys_delete_module_return_t)(CPUState* cpu, target_ulong pc, uint32_t name_user, uint32_t flags);
void ppp_add_cb_on_sys_delete_module_return(on_sys_delete_module_return_t);
bool ppp_remove_cb_on_sys_delete_module_return(on_sys_delete_module_return_t);
typedef void (*on_sys_dup_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fildes);
void ppp_add_cb_on_sys_dup_enter(on_sys_dup_enter_t);
bool ppp_remove_cb_on_sys_dup_enter(on_sys_dup_enter_t);
typedef void (*on_sys_dup_return_t)(CPUState* cpu, target_ulong pc, uint32_t fildes);
void ppp_add_cb_on_sys_dup_return(on_sys_dup_return_t);
bool ppp_remove_cb_on_sys_dup_return(on_sys_dup_return_t);
typedef void (*on_sys_dup2_enter_t)(CPUState* cpu, target_ulong pc, uint32_t oldfd, uint32_t newfd);
void ppp_add_cb_on_sys_dup2_enter(on_sys_dup2_enter_t);
bool ppp_remove_cb_on_sys_dup2_enter(on_sys_dup2_enter_t);
typedef void (*on_sys_dup2_return_t)(CPUState* cpu, target_ulong pc, uint32_t oldfd, uint32_t newfd);
void ppp_add_cb_on_sys_dup2_return(on_sys_dup2_return_t);
bool ppp_remove_cb_on_sys_dup2_return(on_sys_dup2_return_t);
typedef void (*on_sys_dup3_enter_t)(CPUState* cpu, target_ulong pc, uint32_t oldfd, uint32_t newfd, int32_t flags);
void ppp_add_cb_on_sys_dup3_enter(on_sys_dup3_enter_t);
bool ppp_remove_cb_on_sys_dup3_enter(on_sys_dup3_enter_t);
typedef void (*on_sys_dup3_return_t)(CPUState* cpu, target_ulong pc, uint32_t oldfd, uint32_t newfd, int32_t flags);
void ppp_add_cb_on_sys_dup3_return(on_sys_dup3_return_t);
bool ppp_remove_cb_on_sys_dup3_return(on_sys_dup3_return_t);
typedef void (*on_sys_epoll_create_enter_t)(CPUState* cpu, target_ulong pc, int32_t size);
void ppp_add_cb_on_sys_epoll_create_enter(on_sys_epoll_create_enter_t);
bool ppp_remove_cb_on_sys_epoll_create_enter(on_sys_epoll_create_enter_t);
typedef void (*on_sys_epoll_create_return_t)(CPUState* cpu, target_ulong pc, int32_t size);
void ppp_add_cb_on_sys_epoll_create_return(on_sys_epoll_create_return_t);
bool ppp_remove_cb_on_sys_epoll_create_return(on_sys_epoll_create_return_t);
typedef void (*on_sys_epoll_create1_enter_t)(CPUState* cpu, target_ulong pc, int32_t flags);
void ppp_add_cb_on_sys_epoll_create1_enter(on_sys_epoll_create1_enter_t);
bool ppp_remove_cb_on_sys_epoll_create1_enter(on_sys_epoll_create1_enter_t);
typedef void (*on_sys_epoll_create1_return_t)(CPUState* cpu, target_ulong pc, int32_t flags);
void ppp_add_cb_on_sys_epoll_create1_return(on_sys_epoll_create1_return_t);
bool ppp_remove_cb_on_sys_epoll_create1_return(on_sys_epoll_create1_return_t);
typedef void (*on_sys_epoll_ctl_enter_t)(CPUState* cpu, target_ulong pc, int32_t epfd, int32_t op, int32_t fd, uint32_t event);
void ppp_add_cb_on_sys_epoll_ctl_enter(on_sys_epoll_ctl_enter_t);
bool ppp_remove_cb_on_sys_epoll_ctl_enter(on_sys_epoll_ctl_enter_t);
typedef void (*on_sys_epoll_ctl_return_t)(CPUState* cpu, target_ulong pc, int32_t epfd, int32_t op, int32_t fd, uint32_t event);
void ppp_add_cb_on_sys_epoll_ctl_return(on_sys_epoll_ctl_return_t);
bool ppp_remove_cb_on_sys_epoll_ctl_return(on_sys_epoll_ctl_return_t);
typedef void (*on_sys_epoll_pwait_enter_t)(CPUState* cpu, target_ulong pc, int32_t epfd, uint32_t events, int32_t maxevents, int32_t timeout, uint32_t sigmask, uint32_t sigsetsize);
void ppp_add_cb_on_sys_epoll_pwait_enter(on_sys_epoll_pwait_enter_t);
bool ppp_remove_cb_on_sys_epoll_pwait_enter(on_sys_epoll_pwait_enter_t);
typedef void (*on_sys_epoll_pwait_return_t)(CPUState* cpu, target_ulong pc, int32_t epfd, uint32_t events, int32_t maxevents, int32_t timeout, uint32_t sigmask, uint32_t sigsetsize);
void ppp_add_cb_on_sys_epoll_pwait_return(on_sys_epoll_pwait_return_t);
bool ppp_remove_cb_on_sys_epoll_pwait_return(on_sys_epoll_pwait_return_t);
typedef void (*on_sys_epoll_wait_enter_t)(CPUState* cpu, target_ulong pc, int32_t epfd, uint32_t events, int32_t maxevents, int32_t timeout);
void ppp_add_cb_on_sys_epoll_wait_enter(on_sys_epoll_wait_enter_t);
bool ppp_remove_cb_on_sys_epoll_wait_enter(on_sys_epoll_wait_enter_t);
typedef void (*on_sys_epoll_wait_return_t)(CPUState* cpu, target_ulong pc, int32_t epfd, uint32_t events, int32_t maxevents, int32_t timeout);
void ppp_add_cb_on_sys_epoll_wait_return(on_sys_epoll_wait_return_t);
bool ppp_remove_cb_on_sys_epoll_wait_return(on_sys_epoll_wait_return_t);
typedef void (*on_sys_eventfd_enter_t)(CPUState* cpu, target_ulong pc, uint32_t count);
void ppp_add_cb_on_sys_eventfd_enter(on_sys_eventfd_enter_t);
bool ppp_remove_cb_on_sys_eventfd_enter(on_sys_eventfd_enter_t);
typedef void (*on_sys_eventfd_return_t)(CPUState* cpu, target_ulong pc, uint32_t count);
void ppp_add_cb_on_sys_eventfd_return(on_sys_eventfd_return_t);
bool ppp_remove_cb_on_sys_eventfd_return(on_sys_eventfd_return_t);
typedef void (*on_sys_eventfd2_enter_t)(CPUState* cpu, target_ulong pc, uint32_t count, int32_t flags);
void ppp_add_cb_on_sys_eventfd2_enter(on_sys_eventfd2_enter_t);
bool ppp_remove_cb_on_sys_eventfd2_enter(on_sys_eventfd2_enter_t);
typedef void (*on_sys_eventfd2_return_t)(CPUState* cpu, target_ulong pc, uint32_t count, int32_t flags);
void ppp_add_cb_on_sys_eventfd2_return(on_sys_eventfd2_return_t);
bool ppp_remove_cb_on_sys_eventfd2_return(on_sys_eventfd2_return_t);
typedef void (*on_sys_execve_enter_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t argv, uint32_t envp);
void ppp_add_cb_on_sys_execve_enter(on_sys_execve_enter_t);
bool ppp_remove_cb_on_sys_execve_enter(on_sys_execve_enter_t);
typedef void (*on_sys_execve_return_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t argv, uint32_t envp);
void ppp_add_cb_on_sys_execve_return(on_sys_execve_return_t);
bool ppp_remove_cb_on_sys_execve_return(on_sys_execve_return_t);
typedef void (*on_sys_execveat_enter_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t filename, uint32_t argv, uint32_t envp, int32_t flags);
void ppp_add_cb_on_sys_execveat_enter(on_sys_execveat_enter_t);
bool ppp_remove_cb_on_sys_execveat_enter(on_sys_execveat_enter_t);
typedef void (*on_sys_execveat_return_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t filename, uint32_t argv, uint32_t envp, int32_t flags);
void ppp_add_cb_on_sys_execveat_return(on_sys_execveat_return_t);
bool ppp_remove_cb_on_sys_execveat_return(on_sys_execveat_return_t);
typedef void (*on_sys_exit_enter_t)(CPUState* cpu, target_ulong pc, int32_t error_code);
void ppp_add_cb_on_sys_exit_enter(on_sys_exit_enter_t);
bool ppp_remove_cb_on_sys_exit_enter(on_sys_exit_enter_t);
typedef void (*on_sys_exit_return_t)(CPUState* cpu, target_ulong pc, int32_t error_code);
void ppp_add_cb_on_sys_exit_return(on_sys_exit_return_t);
bool ppp_remove_cb_on_sys_exit_return(on_sys_exit_return_t);
typedef void (*on_sys_exit_group_enter_t)(CPUState* cpu, target_ulong pc, int32_t error_code);
void ppp_add_cb_on_sys_exit_group_enter(on_sys_exit_group_enter_t);
bool ppp_remove_cb_on_sys_exit_group_enter(on_sys_exit_group_enter_t);
typedef void (*on_sys_exit_group_return_t)(CPUState* cpu, target_ulong pc, int32_t error_code);
void ppp_add_cb_on_sys_exit_group_return(on_sys_exit_group_return_t);
bool ppp_remove_cb_on_sys_exit_group_return(on_sys_exit_group_return_t);
typedef void (*on_sys_faccessat_enter_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t filename, int32_t mode);
void ppp_add_cb_on_sys_faccessat_enter(on_sys_faccessat_enter_t);
bool ppp_remove_cb_on_sys_faccessat_enter(on_sys_faccessat_enter_t);
typedef void (*on_sys_faccessat_return_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t filename, int32_t mode);
void ppp_add_cb_on_sys_faccessat_return(on_sys_faccessat_return_t);
bool ppp_remove_cb_on_sys_faccessat_return(on_sys_faccessat_return_t);
typedef void (*on_sys_fallocate_enter_t)(CPUState* cpu, target_ulong pc, int32_t fd, int32_t mode, uint64_t offset, uint64_t len);
void ppp_add_cb_on_sys_fallocate_enter(on_sys_fallocate_enter_t);
bool ppp_remove_cb_on_sys_fallocate_enter(on_sys_fallocate_enter_t);
typedef void (*on_sys_fallocate_return_t)(CPUState* cpu, target_ulong pc, int32_t fd, int32_t mode, uint64_t offset, uint64_t len);
void ppp_add_cb_on_sys_fallocate_return(on_sys_fallocate_return_t);
bool ppp_remove_cb_on_sys_fallocate_return(on_sys_fallocate_return_t);
typedef void (*on_sys_fanotify_init_enter_t)(CPUState* cpu, target_ulong pc, uint32_t flags, uint32_t event_f_flags);
void ppp_add_cb_on_sys_fanotify_init_enter(on_sys_fanotify_init_enter_t);
bool ppp_remove_cb_on_sys_fanotify_init_enter(on_sys_fanotify_init_enter_t);
typedef void (*on_sys_fanotify_init_return_t)(CPUState* cpu, target_ulong pc, uint32_t flags, uint32_t event_f_flags);
void ppp_add_cb_on_sys_fanotify_init_return(on_sys_fanotify_init_return_t);
bool ppp_remove_cb_on_sys_fanotify_init_return(on_sys_fanotify_init_return_t);
typedef void (*on_sys_fanotify_mark_enter_t)(CPUState* cpu, target_ulong pc, int32_t fanotify_fd, uint32_t flags, uint64_t mask, int32_t fd, uint32_t pathname);
void ppp_add_cb_on_sys_fanotify_mark_enter(on_sys_fanotify_mark_enter_t);
bool ppp_remove_cb_on_sys_fanotify_mark_enter(on_sys_fanotify_mark_enter_t);
typedef void (*on_sys_fanotify_mark_return_t)(CPUState* cpu, target_ulong pc, int32_t fanotify_fd, uint32_t flags, uint64_t mask, int32_t fd, uint32_t pathname);
void ppp_add_cb_on_sys_fanotify_mark_return(on_sys_fanotify_mark_return_t);
bool ppp_remove_cb_on_sys_fanotify_mark_return(on_sys_fanotify_mark_return_t);
typedef void (*on_sys_fchdir_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd);
void ppp_add_cb_on_sys_fchdir_enter(on_sys_fchdir_enter_t);
bool ppp_remove_cb_on_sys_fchdir_enter(on_sys_fchdir_enter_t);
typedef void (*on_sys_fchdir_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd);
void ppp_add_cb_on_sys_fchdir_return(on_sys_fchdir_return_t);
bool ppp_remove_cb_on_sys_fchdir_return(on_sys_fchdir_return_t);
typedef void (*on_sys_fchmod_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t mode);
void ppp_add_cb_on_sys_fchmod_enter(on_sys_fchmod_enter_t);
bool ppp_remove_cb_on_sys_fchmod_enter(on_sys_fchmod_enter_t);
typedef void (*on_sys_fchmod_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t mode);
void ppp_add_cb_on_sys_fchmod_return(on_sys_fchmod_return_t);
bool ppp_remove_cb_on_sys_fchmod_return(on_sys_fchmod_return_t);
typedef void (*on_sys_fchmodat_enter_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t filename, uint32_t mode);
void ppp_add_cb_on_sys_fchmodat_enter(on_sys_fchmodat_enter_t);
bool ppp_remove_cb_on_sys_fchmodat_enter(on_sys_fchmodat_enter_t);
typedef void (*on_sys_fchmodat_return_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t filename, uint32_t mode);
void ppp_add_cb_on_sys_fchmodat_return(on_sys_fchmodat_return_t);
bool ppp_remove_cb_on_sys_fchmodat_return(on_sys_fchmodat_return_t);
typedef void (*on_sys_fchown_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t user, uint32_t group);
void ppp_add_cb_on_sys_fchown_enter(on_sys_fchown_enter_t);
bool ppp_remove_cb_on_sys_fchown_enter(on_sys_fchown_enter_t);
typedef void (*on_sys_fchown_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t user, uint32_t group);
void ppp_add_cb_on_sys_fchown_return(on_sys_fchown_return_t);
bool ppp_remove_cb_on_sys_fchown_return(on_sys_fchown_return_t);
typedef void (*on_sys_fchown16_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t user, uint32_t group);
void ppp_add_cb_on_sys_fchown16_enter(on_sys_fchown16_enter_t);
bool ppp_remove_cb_on_sys_fchown16_enter(on_sys_fchown16_enter_t);
typedef void (*on_sys_fchown16_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t user, uint32_t group);
void ppp_add_cb_on_sys_fchown16_return(on_sys_fchown16_return_t);
bool ppp_remove_cb_on_sys_fchown16_return(on_sys_fchown16_return_t);
typedef void (*on_sys_fchownat_enter_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t filename, uint32_t user, uint32_t group, int32_t flag);
void ppp_add_cb_on_sys_fchownat_enter(on_sys_fchownat_enter_t);
bool ppp_remove_cb_on_sys_fchownat_enter(on_sys_fchownat_enter_t);
typedef void (*on_sys_fchownat_return_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t filename, uint32_t user, uint32_t group, int32_t flag);
void ppp_add_cb_on_sys_fchownat_return(on_sys_fchownat_return_t);
bool ppp_remove_cb_on_sys_fchownat_return(on_sys_fchownat_return_t);
typedef void (*on_sys_fcntl_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t cmd, uint32_t arg);
void ppp_add_cb_on_sys_fcntl_enter(on_sys_fcntl_enter_t);
bool ppp_remove_cb_on_sys_fcntl_enter(on_sys_fcntl_enter_t);
typedef void (*on_sys_fcntl_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t cmd, uint32_t arg);
void ppp_add_cb_on_sys_fcntl_return(on_sys_fcntl_return_t);
bool ppp_remove_cb_on_sys_fcntl_return(on_sys_fcntl_return_t);
typedef void (*on_sys_fcntl64_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t cmd, uint32_t arg);
void ppp_add_cb_on_sys_fcntl64_enter(on_sys_fcntl64_enter_t);
bool ppp_remove_cb_on_sys_fcntl64_enter(on_sys_fcntl64_enter_t);
typedef void (*on_sys_fcntl64_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t cmd, uint32_t arg);
void ppp_add_cb_on_sys_fcntl64_return(on_sys_fcntl64_return_t);
bool ppp_remove_cb_on_sys_fcntl64_return(on_sys_fcntl64_return_t);
typedef void (*on_sys_fdatasync_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd);
void ppp_add_cb_on_sys_fdatasync_enter(on_sys_fdatasync_enter_t);
bool ppp_remove_cb_on_sys_fdatasync_enter(on_sys_fdatasync_enter_t);
typedef void (*on_sys_fdatasync_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd);
void ppp_add_cb_on_sys_fdatasync_return(on_sys_fdatasync_return_t);
bool ppp_remove_cb_on_sys_fdatasync_return(on_sys_fdatasync_return_t);
typedef void (*on_sys_fgetxattr_enter_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint32_t name, uint32_t value, uint32_t size);
void ppp_add_cb_on_sys_fgetxattr_enter(on_sys_fgetxattr_enter_t);
bool ppp_remove_cb_on_sys_fgetxattr_enter(on_sys_fgetxattr_enter_t);
typedef void (*on_sys_fgetxattr_return_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint32_t name, uint32_t value, uint32_t size);
void ppp_add_cb_on_sys_fgetxattr_return(on_sys_fgetxattr_return_t);
bool ppp_remove_cb_on_sys_fgetxattr_return(on_sys_fgetxattr_return_t);
typedef void (*on_sys_finit_module_enter_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint32_t uargs, int32_t flags);
void ppp_add_cb_on_sys_finit_module_enter(on_sys_finit_module_enter_t);
bool ppp_remove_cb_on_sys_finit_module_enter(on_sys_finit_module_enter_t);
typedef void (*on_sys_finit_module_return_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint32_t uargs, int32_t flags);
void ppp_add_cb_on_sys_finit_module_return(on_sys_finit_module_return_t);
bool ppp_remove_cb_on_sys_finit_module_return(on_sys_finit_module_return_t);
typedef void (*on_sys_flistxattr_enter_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint32_t list, uint32_t size);
void ppp_add_cb_on_sys_flistxattr_enter(on_sys_flistxattr_enter_t);
bool ppp_remove_cb_on_sys_flistxattr_enter(on_sys_flistxattr_enter_t);
typedef void (*on_sys_flistxattr_return_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint32_t list, uint32_t size);
void ppp_add_cb_on_sys_flistxattr_return(on_sys_flistxattr_return_t);
bool ppp_remove_cb_on_sys_flistxattr_return(on_sys_flistxattr_return_t);
typedef void (*on_sys_flock_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t cmd);
void ppp_add_cb_on_sys_flock_enter(on_sys_flock_enter_t);
bool ppp_remove_cb_on_sys_flock_enter(on_sys_flock_enter_t);
typedef void (*on_sys_flock_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t cmd);
void ppp_add_cb_on_sys_flock_return(on_sys_flock_return_t);
bool ppp_remove_cb_on_sys_flock_return(on_sys_flock_return_t);
typedef void (*on_sys_fork_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_fork_enter(on_sys_fork_enter_t);
bool ppp_remove_cb_on_sys_fork_enter(on_sys_fork_enter_t);
typedef void (*on_sys_fork_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_fork_return(on_sys_fork_return_t);
bool ppp_remove_cb_on_sys_fork_return(on_sys_fork_return_t);
typedef void (*on_sys_fremovexattr_enter_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint32_t name);
void ppp_add_cb_on_sys_fremovexattr_enter(on_sys_fremovexattr_enter_t);
bool ppp_remove_cb_on_sys_fremovexattr_enter(on_sys_fremovexattr_enter_t);
typedef void (*on_sys_fremovexattr_return_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint32_t name);
void ppp_add_cb_on_sys_fremovexattr_return(on_sys_fremovexattr_return_t);
bool ppp_remove_cb_on_sys_fremovexattr_return(on_sys_fremovexattr_return_t);
typedef void (*on_sys_fsetxattr_enter_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint32_t name, uint32_t value, uint32_t size, int32_t flags);
void ppp_add_cb_on_sys_fsetxattr_enter(on_sys_fsetxattr_enter_t);
bool ppp_remove_cb_on_sys_fsetxattr_enter(on_sys_fsetxattr_enter_t);
typedef void (*on_sys_fsetxattr_return_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint32_t name, uint32_t value, uint32_t size, int32_t flags);
void ppp_add_cb_on_sys_fsetxattr_return(on_sys_fsetxattr_return_t);
bool ppp_remove_cb_on_sys_fsetxattr_return(on_sys_fsetxattr_return_t);
typedef void (*on_sys_fstat64_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t statbuf);
void ppp_add_cb_on_sys_fstat64_enter(on_sys_fstat64_enter_t);
bool ppp_remove_cb_on_sys_fstat64_enter(on_sys_fstat64_enter_t);
typedef void (*on_sys_fstat64_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t statbuf);
void ppp_add_cb_on_sys_fstat64_return(on_sys_fstat64_return_t);
bool ppp_remove_cb_on_sys_fstat64_return(on_sys_fstat64_return_t);
typedef void (*on_sys_fstatat64_enter_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t filename, uint32_t statbuf, int32_t flag);
void ppp_add_cb_on_sys_fstatat64_enter(on_sys_fstatat64_enter_t);
bool ppp_remove_cb_on_sys_fstatat64_enter(on_sys_fstatat64_enter_t);
typedef void (*on_sys_fstatat64_return_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t filename, uint32_t statbuf, int32_t flag);
void ppp_add_cb_on_sys_fstatat64_return(on_sys_fstatat64_return_t);
bool ppp_remove_cb_on_sys_fstatat64_return(on_sys_fstatat64_return_t);
typedef void (*on_sys_fstatfs_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t buf);
void ppp_add_cb_on_sys_fstatfs_enter(on_sys_fstatfs_enter_t);
bool ppp_remove_cb_on_sys_fstatfs_enter(on_sys_fstatfs_enter_t);
typedef void (*on_sys_fstatfs_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t buf);
void ppp_add_cb_on_sys_fstatfs_return(on_sys_fstatfs_return_t);
bool ppp_remove_cb_on_sys_fstatfs_return(on_sys_fstatfs_return_t);
typedef void (*on_sys_fstatfs64_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t sz, uint32_t buf);
void ppp_add_cb_on_sys_fstatfs64_enter(on_sys_fstatfs64_enter_t);
bool ppp_remove_cb_on_sys_fstatfs64_enter(on_sys_fstatfs64_enter_t);
typedef void (*on_sys_fstatfs64_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t sz, uint32_t buf);
void ppp_add_cb_on_sys_fstatfs64_return(on_sys_fstatfs64_return_t);
bool ppp_remove_cb_on_sys_fstatfs64_return(on_sys_fstatfs64_return_t);
typedef void (*on_sys_fsync_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd);
void ppp_add_cb_on_sys_fsync_enter(on_sys_fsync_enter_t);
bool ppp_remove_cb_on_sys_fsync_enter(on_sys_fsync_enter_t);
typedef void (*on_sys_fsync_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd);
void ppp_add_cb_on_sys_fsync_return(on_sys_fsync_return_t);
bool ppp_remove_cb_on_sys_fsync_return(on_sys_fsync_return_t);
typedef void (*on_sys_ftruncate_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t length);
void ppp_add_cb_on_sys_ftruncate_enter(on_sys_ftruncate_enter_t);
bool ppp_remove_cb_on_sys_ftruncate_enter(on_sys_ftruncate_enter_t);
typedef void (*on_sys_ftruncate_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t length);
void ppp_add_cb_on_sys_ftruncate_return(on_sys_ftruncate_return_t);
bool ppp_remove_cb_on_sys_ftruncate_return(on_sys_ftruncate_return_t);
typedef void (*on_sys_ftruncate64_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint64_t length);
void ppp_add_cb_on_sys_ftruncate64_enter(on_sys_ftruncate64_enter_t);
bool ppp_remove_cb_on_sys_ftruncate64_enter(on_sys_ftruncate64_enter_t);
typedef void (*on_sys_ftruncate64_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint64_t length);
void ppp_add_cb_on_sys_ftruncate64_return(on_sys_ftruncate64_return_t);
bool ppp_remove_cb_on_sys_ftruncate64_return(on_sys_ftruncate64_return_t);
typedef void (*on_sys_futex_enter_t)(CPUState* cpu, target_ulong pc, uint32_t uaddr, int32_t op, uint32_t val, uint32_t utime, uint32_t uaddr2, uint32_t val3);
void ppp_add_cb_on_sys_futex_enter(on_sys_futex_enter_t);
bool ppp_remove_cb_on_sys_futex_enter(on_sys_futex_enter_t);
typedef void (*on_sys_futex_return_t)(CPUState* cpu, target_ulong pc, uint32_t uaddr, int32_t op, uint32_t val, uint32_t utime, uint32_t uaddr2, uint32_t val3);
void ppp_add_cb_on_sys_futex_return(on_sys_futex_return_t);
bool ppp_remove_cb_on_sys_futex_return(on_sys_futex_return_t);
typedef void (*on_sys_futimesat_enter_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t filename, uint32_t utimes);
void ppp_add_cb_on_sys_futimesat_enter(on_sys_futimesat_enter_t);
bool ppp_remove_cb_on_sys_futimesat_enter(on_sys_futimesat_enter_t);
typedef void (*on_sys_futimesat_return_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t filename, uint32_t utimes);
void ppp_add_cb_on_sys_futimesat_return(on_sys_futimesat_return_t);
bool ppp_remove_cb_on_sys_futimesat_return(on_sys_futimesat_return_t);
typedef void (*on_sys_get_mempolicy_enter_t)(CPUState* cpu, target_ulong pc, uint32_t policy, uint32_t nmask, uint32_t maxnode, uint32_t addr, uint32_t flags);
void ppp_add_cb_on_sys_get_mempolicy_enter(on_sys_get_mempolicy_enter_t);
bool ppp_remove_cb_on_sys_get_mempolicy_enter(on_sys_get_mempolicy_enter_t);
typedef void (*on_sys_get_mempolicy_return_t)(CPUState* cpu, target_ulong pc, uint32_t policy, uint32_t nmask, uint32_t maxnode, uint32_t addr, uint32_t flags);
void ppp_add_cb_on_sys_get_mempolicy_return(on_sys_get_mempolicy_return_t);
bool ppp_remove_cb_on_sys_get_mempolicy_return(on_sys_get_mempolicy_return_t);
typedef void (*on_sys_get_robust_list_enter_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t head_ptr, uint32_t len_ptr);
void ppp_add_cb_on_sys_get_robust_list_enter(on_sys_get_robust_list_enter_t);
bool ppp_remove_cb_on_sys_get_robust_list_enter(on_sys_get_robust_list_enter_t);
typedef void (*on_sys_get_robust_list_return_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t head_ptr, uint32_t len_ptr);
void ppp_add_cb_on_sys_get_robust_list_return(on_sys_get_robust_list_return_t);
bool ppp_remove_cb_on_sys_get_robust_list_return(on_sys_get_robust_list_return_t);
typedef void (*on_sys_getcpu_enter_t)(CPUState* cpu, target_ulong pc, uint32_t _cpu, uint32_t node, uint32_t cache);
void ppp_add_cb_on_sys_getcpu_enter(on_sys_getcpu_enter_t);
bool ppp_remove_cb_on_sys_getcpu_enter(on_sys_getcpu_enter_t);
typedef void (*on_sys_getcpu_return_t)(CPUState* cpu, target_ulong pc, uint32_t _cpu, uint32_t node, uint32_t cache);
void ppp_add_cb_on_sys_getcpu_return(on_sys_getcpu_return_t);
bool ppp_remove_cb_on_sys_getcpu_return(on_sys_getcpu_return_t);
typedef void (*on_sys_getcwd_enter_t)(CPUState* cpu, target_ulong pc, uint32_t buf, uint32_t size);
void ppp_add_cb_on_sys_getcwd_enter(on_sys_getcwd_enter_t);
bool ppp_remove_cb_on_sys_getcwd_enter(on_sys_getcwd_enter_t);
typedef void (*on_sys_getcwd_return_t)(CPUState* cpu, target_ulong pc, uint32_t buf, uint32_t size);
void ppp_add_cb_on_sys_getcwd_return(on_sys_getcwd_return_t);
bool ppp_remove_cb_on_sys_getcwd_return(on_sys_getcwd_return_t);
typedef void (*on_sys_getdents_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t dirent, uint32_t count);
void ppp_add_cb_on_sys_getdents_enter(on_sys_getdents_enter_t);
bool ppp_remove_cb_on_sys_getdents_enter(on_sys_getdents_enter_t);
typedef void (*on_sys_getdents_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t dirent, uint32_t count);
void ppp_add_cb_on_sys_getdents_return(on_sys_getdents_return_t);
bool ppp_remove_cb_on_sys_getdents_return(on_sys_getdents_return_t);
typedef void (*on_sys_getdents64_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t dirent, uint32_t count);
void ppp_add_cb_on_sys_getdents64_enter(on_sys_getdents64_enter_t);
bool ppp_remove_cb_on_sys_getdents64_enter(on_sys_getdents64_enter_t);
typedef void (*on_sys_getdents64_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t dirent, uint32_t count);
void ppp_add_cb_on_sys_getdents64_return(on_sys_getdents64_return_t);
bool ppp_remove_cb_on_sys_getdents64_return(on_sys_getdents64_return_t);
typedef void (*on_sys_getegid_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_getegid_enter(on_sys_getegid_enter_t);
bool ppp_remove_cb_on_sys_getegid_enter(on_sys_getegid_enter_t);
typedef void (*on_sys_getegid_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_getegid_return(on_sys_getegid_return_t);
bool ppp_remove_cb_on_sys_getegid_return(on_sys_getegid_return_t);
typedef void (*on_sys_getegid16_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_getegid16_enter(on_sys_getegid16_enter_t);
bool ppp_remove_cb_on_sys_getegid16_enter(on_sys_getegid16_enter_t);
typedef void (*on_sys_getegid16_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_getegid16_return(on_sys_getegid16_return_t);
bool ppp_remove_cb_on_sys_getegid16_return(on_sys_getegid16_return_t);
typedef void (*on_sys_geteuid_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_geteuid_enter(on_sys_geteuid_enter_t);
bool ppp_remove_cb_on_sys_geteuid_enter(on_sys_geteuid_enter_t);
typedef void (*on_sys_geteuid_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_geteuid_return(on_sys_geteuid_return_t);
bool ppp_remove_cb_on_sys_geteuid_return(on_sys_geteuid_return_t);
typedef void (*on_sys_geteuid16_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_geteuid16_enter(on_sys_geteuid16_enter_t);
bool ppp_remove_cb_on_sys_geteuid16_enter(on_sys_geteuid16_enter_t);
typedef void (*on_sys_geteuid16_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_geteuid16_return(on_sys_geteuid16_return_t);
bool ppp_remove_cb_on_sys_geteuid16_return(on_sys_geteuid16_return_t);
typedef void (*on_sys_getgid_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_getgid_enter(on_sys_getgid_enter_t);
bool ppp_remove_cb_on_sys_getgid_enter(on_sys_getgid_enter_t);
typedef void (*on_sys_getgid_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_getgid_return(on_sys_getgid_return_t);
bool ppp_remove_cb_on_sys_getgid_return(on_sys_getgid_return_t);
typedef void (*on_sys_getgid16_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_getgid16_enter(on_sys_getgid16_enter_t);
bool ppp_remove_cb_on_sys_getgid16_enter(on_sys_getgid16_enter_t);
typedef void (*on_sys_getgid16_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_getgid16_return(on_sys_getgid16_return_t);
bool ppp_remove_cb_on_sys_getgid16_return(on_sys_getgid16_return_t);
typedef void (*on_sys_getgroups_enter_t)(CPUState* cpu, target_ulong pc, int32_t gidsetsize, uint32_t grouplist);
void ppp_add_cb_on_sys_getgroups_enter(on_sys_getgroups_enter_t);
bool ppp_remove_cb_on_sys_getgroups_enter(on_sys_getgroups_enter_t);
typedef void (*on_sys_getgroups_return_t)(CPUState* cpu, target_ulong pc, int32_t gidsetsize, uint32_t grouplist);
void ppp_add_cb_on_sys_getgroups_return(on_sys_getgroups_return_t);
bool ppp_remove_cb_on_sys_getgroups_return(on_sys_getgroups_return_t);
typedef void (*on_sys_getgroups16_enter_t)(CPUState* cpu, target_ulong pc, int32_t gidsetsize, uint32_t grouplist);
void ppp_add_cb_on_sys_getgroups16_enter(on_sys_getgroups16_enter_t);
bool ppp_remove_cb_on_sys_getgroups16_enter(on_sys_getgroups16_enter_t);
typedef void (*on_sys_getgroups16_return_t)(CPUState* cpu, target_ulong pc, int32_t gidsetsize, uint32_t grouplist);
void ppp_add_cb_on_sys_getgroups16_return(on_sys_getgroups16_return_t);
bool ppp_remove_cb_on_sys_getgroups16_return(on_sys_getgroups16_return_t);
typedef void (*on_sys_getitimer_enter_t)(CPUState* cpu, target_ulong pc, int32_t which, uint32_t value);
void ppp_add_cb_on_sys_getitimer_enter(on_sys_getitimer_enter_t);
bool ppp_remove_cb_on_sys_getitimer_enter(on_sys_getitimer_enter_t);
typedef void (*on_sys_getitimer_return_t)(CPUState* cpu, target_ulong pc, int32_t which, uint32_t value);
void ppp_add_cb_on_sys_getitimer_return(on_sys_getitimer_return_t);
bool ppp_remove_cb_on_sys_getitimer_return(on_sys_getitimer_return_t);
typedef void (*on_sys_getpeername_enter_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, uint32_t arg2);
void ppp_add_cb_on_sys_getpeername_enter(on_sys_getpeername_enter_t);
bool ppp_remove_cb_on_sys_getpeername_enter(on_sys_getpeername_enter_t);
typedef void (*on_sys_getpeername_return_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, uint32_t arg2);
void ppp_add_cb_on_sys_getpeername_return(on_sys_getpeername_return_t);
bool ppp_remove_cb_on_sys_getpeername_return(on_sys_getpeername_return_t);
typedef void (*on_sys_getpgid_enter_t)(CPUState* cpu, target_ulong pc, int32_t pid);
void ppp_add_cb_on_sys_getpgid_enter(on_sys_getpgid_enter_t);
bool ppp_remove_cb_on_sys_getpgid_enter(on_sys_getpgid_enter_t);
typedef void (*on_sys_getpgid_return_t)(CPUState* cpu, target_ulong pc, int32_t pid);
void ppp_add_cb_on_sys_getpgid_return(on_sys_getpgid_return_t);
bool ppp_remove_cb_on_sys_getpgid_return(on_sys_getpgid_return_t);
typedef void (*on_sys_getpgrp_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_getpgrp_enter(on_sys_getpgrp_enter_t);
bool ppp_remove_cb_on_sys_getpgrp_enter(on_sys_getpgrp_enter_t);
typedef void (*on_sys_getpgrp_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_getpgrp_return(on_sys_getpgrp_return_t);
bool ppp_remove_cb_on_sys_getpgrp_return(on_sys_getpgrp_return_t);
typedef void (*on_sys_getpid_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_getpid_enter(on_sys_getpid_enter_t);
bool ppp_remove_cb_on_sys_getpid_enter(on_sys_getpid_enter_t);
typedef void (*on_sys_getpid_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_getpid_return(on_sys_getpid_return_t);
bool ppp_remove_cb_on_sys_getpid_return(on_sys_getpid_return_t);
typedef void (*on_sys_getppid_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_getppid_enter(on_sys_getppid_enter_t);
bool ppp_remove_cb_on_sys_getppid_enter(on_sys_getppid_enter_t);
typedef void (*on_sys_getppid_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_getppid_return(on_sys_getppid_return_t);
bool ppp_remove_cb_on_sys_getppid_return(on_sys_getppid_return_t);
typedef void (*on_sys_getpriority_enter_t)(CPUState* cpu, target_ulong pc, int32_t which, int32_t who);
void ppp_add_cb_on_sys_getpriority_enter(on_sys_getpriority_enter_t);
bool ppp_remove_cb_on_sys_getpriority_enter(on_sys_getpriority_enter_t);
typedef void (*on_sys_getpriority_return_t)(CPUState* cpu, target_ulong pc, int32_t which, int32_t who);
void ppp_add_cb_on_sys_getpriority_return(on_sys_getpriority_return_t);
bool ppp_remove_cb_on_sys_getpriority_return(on_sys_getpriority_return_t);
typedef void (*on_sys_getrandom_enter_t)(CPUState* cpu, target_ulong pc, uint32_t buf, uint32_t count, uint32_t flags);
void ppp_add_cb_on_sys_getrandom_enter(on_sys_getrandom_enter_t);
bool ppp_remove_cb_on_sys_getrandom_enter(on_sys_getrandom_enter_t);
typedef void (*on_sys_getrandom_return_t)(CPUState* cpu, target_ulong pc, uint32_t buf, uint32_t count, uint32_t flags);
void ppp_add_cb_on_sys_getrandom_return(on_sys_getrandom_return_t);
bool ppp_remove_cb_on_sys_getrandom_return(on_sys_getrandom_return_t);
typedef void (*on_sys_getresgid_enter_t)(CPUState* cpu, target_ulong pc, uint32_t rgid, uint32_t egid, uint32_t sgid);
void ppp_add_cb_on_sys_getresgid_enter(on_sys_getresgid_enter_t);
bool ppp_remove_cb_on_sys_getresgid_enter(on_sys_getresgid_enter_t);
typedef void (*on_sys_getresgid_return_t)(CPUState* cpu, target_ulong pc, uint32_t rgid, uint32_t egid, uint32_t sgid);
void ppp_add_cb_on_sys_getresgid_return(on_sys_getresgid_return_t);
bool ppp_remove_cb_on_sys_getresgid_return(on_sys_getresgid_return_t);
typedef void (*on_sys_getresgid16_enter_t)(CPUState* cpu, target_ulong pc, uint32_t rgid, uint32_t egid, uint32_t sgid);
void ppp_add_cb_on_sys_getresgid16_enter(on_sys_getresgid16_enter_t);
bool ppp_remove_cb_on_sys_getresgid16_enter(on_sys_getresgid16_enter_t);
typedef void (*on_sys_getresgid16_return_t)(CPUState* cpu, target_ulong pc, uint32_t rgid, uint32_t egid, uint32_t sgid);
void ppp_add_cb_on_sys_getresgid16_return(on_sys_getresgid16_return_t);
bool ppp_remove_cb_on_sys_getresgid16_return(on_sys_getresgid16_return_t);
typedef void (*on_sys_getresuid_enter_t)(CPUState* cpu, target_ulong pc, uint32_t ruid, uint32_t euid, uint32_t suid);
void ppp_add_cb_on_sys_getresuid_enter(on_sys_getresuid_enter_t);
bool ppp_remove_cb_on_sys_getresuid_enter(on_sys_getresuid_enter_t);
typedef void (*on_sys_getresuid_return_t)(CPUState* cpu, target_ulong pc, uint32_t ruid, uint32_t euid, uint32_t suid);
void ppp_add_cb_on_sys_getresuid_return(on_sys_getresuid_return_t);
bool ppp_remove_cb_on_sys_getresuid_return(on_sys_getresuid_return_t);
typedef void (*on_sys_getresuid16_enter_t)(CPUState* cpu, target_ulong pc, uint32_t ruid, uint32_t euid, uint32_t suid);
void ppp_add_cb_on_sys_getresuid16_enter(on_sys_getresuid16_enter_t);
bool ppp_remove_cb_on_sys_getresuid16_enter(on_sys_getresuid16_enter_t);
typedef void (*on_sys_getresuid16_return_t)(CPUState* cpu, target_ulong pc, uint32_t ruid, uint32_t euid, uint32_t suid);
void ppp_add_cb_on_sys_getresuid16_return(on_sys_getresuid16_return_t);
bool ppp_remove_cb_on_sys_getresuid16_return(on_sys_getresuid16_return_t);
typedef void (*on_sys_getrlimit_enter_t)(CPUState* cpu, target_ulong pc, uint32_t resource, uint32_t rlim);
void ppp_add_cb_on_sys_getrlimit_enter(on_sys_getrlimit_enter_t);
bool ppp_remove_cb_on_sys_getrlimit_enter(on_sys_getrlimit_enter_t);
typedef void (*on_sys_getrlimit_return_t)(CPUState* cpu, target_ulong pc, uint32_t resource, uint32_t rlim);
void ppp_add_cb_on_sys_getrlimit_return(on_sys_getrlimit_return_t);
bool ppp_remove_cb_on_sys_getrlimit_return(on_sys_getrlimit_return_t);
typedef void (*on_sys_getrusage_enter_t)(CPUState* cpu, target_ulong pc, int32_t who, uint32_t ru);
void ppp_add_cb_on_sys_getrusage_enter(on_sys_getrusage_enter_t);
bool ppp_remove_cb_on_sys_getrusage_enter(on_sys_getrusage_enter_t);
typedef void (*on_sys_getrusage_return_t)(CPUState* cpu, target_ulong pc, int32_t who, uint32_t ru);
void ppp_add_cb_on_sys_getrusage_return(on_sys_getrusage_return_t);
bool ppp_remove_cb_on_sys_getrusage_return(on_sys_getrusage_return_t);
typedef void (*on_sys_getsid_enter_t)(CPUState* cpu, target_ulong pc, int32_t pid);
void ppp_add_cb_on_sys_getsid_enter(on_sys_getsid_enter_t);
bool ppp_remove_cb_on_sys_getsid_enter(on_sys_getsid_enter_t);
typedef void (*on_sys_getsid_return_t)(CPUState* cpu, target_ulong pc, int32_t pid);
void ppp_add_cb_on_sys_getsid_return(on_sys_getsid_return_t);
bool ppp_remove_cb_on_sys_getsid_return(on_sys_getsid_return_t);
typedef void (*on_sys_getsockname_enter_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, uint32_t arg2);
void ppp_add_cb_on_sys_getsockname_enter(on_sys_getsockname_enter_t);
bool ppp_remove_cb_on_sys_getsockname_enter(on_sys_getsockname_enter_t);
typedef void (*on_sys_getsockname_return_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, uint32_t arg2);
void ppp_add_cb_on_sys_getsockname_return(on_sys_getsockname_return_t);
bool ppp_remove_cb_on_sys_getsockname_return(on_sys_getsockname_return_t);
typedef void (*on_sys_getsockopt_enter_t)(CPUState* cpu, target_ulong pc, int32_t fd, int32_t level, int32_t optname, uint32_t optval, uint32_t optlen);
void ppp_add_cb_on_sys_getsockopt_enter(on_sys_getsockopt_enter_t);
bool ppp_remove_cb_on_sys_getsockopt_enter(on_sys_getsockopt_enter_t);
typedef void (*on_sys_getsockopt_return_t)(CPUState* cpu, target_ulong pc, int32_t fd, int32_t level, int32_t optname, uint32_t optval, uint32_t optlen);
void ppp_add_cb_on_sys_getsockopt_return(on_sys_getsockopt_return_t);
bool ppp_remove_cb_on_sys_getsockopt_return(on_sys_getsockopt_return_t);
typedef void (*on_sys_gettid_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_gettid_enter(on_sys_gettid_enter_t);
bool ppp_remove_cb_on_sys_gettid_enter(on_sys_gettid_enter_t);
typedef void (*on_sys_gettid_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_gettid_return(on_sys_gettid_return_t);
bool ppp_remove_cb_on_sys_gettid_return(on_sys_gettid_return_t);
typedef void (*on_sys_gettimeofday_enter_t)(CPUState* cpu, target_ulong pc, uint32_t tv, uint32_t tz);
void ppp_add_cb_on_sys_gettimeofday_enter(on_sys_gettimeofday_enter_t);
bool ppp_remove_cb_on_sys_gettimeofday_enter(on_sys_gettimeofday_enter_t);
typedef void (*on_sys_gettimeofday_return_t)(CPUState* cpu, target_ulong pc, uint32_t tv, uint32_t tz);
void ppp_add_cb_on_sys_gettimeofday_return(on_sys_gettimeofday_return_t);
bool ppp_remove_cb_on_sys_gettimeofday_return(on_sys_gettimeofday_return_t);
typedef void (*on_sys_getuid_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_getuid_enter(on_sys_getuid_enter_t);
bool ppp_remove_cb_on_sys_getuid_enter(on_sys_getuid_enter_t);
typedef void (*on_sys_getuid_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_getuid_return(on_sys_getuid_return_t);
bool ppp_remove_cb_on_sys_getuid_return(on_sys_getuid_return_t);
typedef void (*on_sys_getuid16_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_getuid16_enter(on_sys_getuid16_enter_t);
bool ppp_remove_cb_on_sys_getuid16_enter(on_sys_getuid16_enter_t);
typedef void (*on_sys_getuid16_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_getuid16_return(on_sys_getuid16_return_t);
bool ppp_remove_cb_on_sys_getuid16_return(on_sys_getuid16_return_t);
typedef void (*on_sys_getxattr_enter_t)(CPUState* cpu, target_ulong pc, uint32_t path, uint32_t name, uint32_t value, uint32_t size);
void ppp_add_cb_on_sys_getxattr_enter(on_sys_getxattr_enter_t);
bool ppp_remove_cb_on_sys_getxattr_enter(on_sys_getxattr_enter_t);
typedef void (*on_sys_getxattr_return_t)(CPUState* cpu, target_ulong pc, uint32_t path, uint32_t name, uint32_t value, uint32_t size);
void ppp_add_cb_on_sys_getxattr_return(on_sys_getxattr_return_t);
bool ppp_remove_cb_on_sys_getxattr_return(on_sys_getxattr_return_t);
typedef void (*on_sys_init_module_enter_t)(CPUState* cpu, target_ulong pc, uint32_t umod, uint32_t len, uint32_t uargs);
void ppp_add_cb_on_sys_init_module_enter(on_sys_init_module_enter_t);
bool ppp_remove_cb_on_sys_init_module_enter(on_sys_init_module_enter_t);
typedef void (*on_sys_init_module_return_t)(CPUState* cpu, target_ulong pc, uint32_t umod, uint32_t len, uint32_t uargs);
void ppp_add_cb_on_sys_init_module_return(on_sys_init_module_return_t);
bool ppp_remove_cb_on_sys_init_module_return(on_sys_init_module_return_t);
typedef void (*on_sys_inotify_add_watch_enter_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint32_t path, uint32_t mask);
void ppp_add_cb_on_sys_inotify_add_watch_enter(on_sys_inotify_add_watch_enter_t);
bool ppp_remove_cb_on_sys_inotify_add_watch_enter(on_sys_inotify_add_watch_enter_t);
typedef void (*on_sys_inotify_add_watch_return_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint32_t path, uint32_t mask);
void ppp_add_cb_on_sys_inotify_add_watch_return(on_sys_inotify_add_watch_return_t);
bool ppp_remove_cb_on_sys_inotify_add_watch_return(on_sys_inotify_add_watch_return_t);
typedef void (*on_sys_inotify_init_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_inotify_init_enter(on_sys_inotify_init_enter_t);
bool ppp_remove_cb_on_sys_inotify_init_enter(on_sys_inotify_init_enter_t);
typedef void (*on_sys_inotify_init_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_inotify_init_return(on_sys_inotify_init_return_t);
bool ppp_remove_cb_on_sys_inotify_init_return(on_sys_inotify_init_return_t);
typedef void (*on_sys_inotify_init1_enter_t)(CPUState* cpu, target_ulong pc, int32_t flags);
void ppp_add_cb_on_sys_inotify_init1_enter(on_sys_inotify_init1_enter_t);
bool ppp_remove_cb_on_sys_inotify_init1_enter(on_sys_inotify_init1_enter_t);
typedef void (*on_sys_inotify_init1_return_t)(CPUState* cpu, target_ulong pc, int32_t flags);
void ppp_add_cb_on_sys_inotify_init1_return(on_sys_inotify_init1_return_t);
bool ppp_remove_cb_on_sys_inotify_init1_return(on_sys_inotify_init1_return_t);
typedef void (*on_sys_inotify_rm_watch_enter_t)(CPUState* cpu, target_ulong pc, int32_t fd, int32_t wd);
void ppp_add_cb_on_sys_inotify_rm_watch_enter(on_sys_inotify_rm_watch_enter_t);
bool ppp_remove_cb_on_sys_inotify_rm_watch_enter(on_sys_inotify_rm_watch_enter_t);
typedef void (*on_sys_inotify_rm_watch_return_t)(CPUState* cpu, target_ulong pc, int32_t fd, int32_t wd);
void ppp_add_cb_on_sys_inotify_rm_watch_return(on_sys_inotify_rm_watch_return_t);
bool ppp_remove_cb_on_sys_inotify_rm_watch_return(on_sys_inotify_rm_watch_return_t);
typedef void (*on_sys_io_cancel_enter_t)(CPUState* cpu, target_ulong pc, uint32_t ctx_id, uint32_t iocb, uint32_t result);
void ppp_add_cb_on_sys_io_cancel_enter(on_sys_io_cancel_enter_t);
bool ppp_remove_cb_on_sys_io_cancel_enter(on_sys_io_cancel_enter_t);
typedef void (*on_sys_io_cancel_return_t)(CPUState* cpu, target_ulong pc, uint32_t ctx_id, uint32_t iocb, uint32_t result);
void ppp_add_cb_on_sys_io_cancel_return(on_sys_io_cancel_return_t);
bool ppp_remove_cb_on_sys_io_cancel_return(on_sys_io_cancel_return_t);
typedef void (*on_sys_io_destroy_enter_t)(CPUState* cpu, target_ulong pc, uint32_t ctx);
void ppp_add_cb_on_sys_io_destroy_enter(on_sys_io_destroy_enter_t);
bool ppp_remove_cb_on_sys_io_destroy_enter(on_sys_io_destroy_enter_t);
typedef void (*on_sys_io_destroy_return_t)(CPUState* cpu, target_ulong pc, uint32_t ctx);
void ppp_add_cb_on_sys_io_destroy_return(on_sys_io_destroy_return_t);
bool ppp_remove_cb_on_sys_io_destroy_return(on_sys_io_destroy_return_t);
typedef void (*on_sys_io_getevents_enter_t)(CPUState* cpu, target_ulong pc, uint32_t ctx_id, int32_t min_nr, int32_t nr, uint32_t events, uint32_t timeout);
void ppp_add_cb_on_sys_io_getevents_enter(on_sys_io_getevents_enter_t);
bool ppp_remove_cb_on_sys_io_getevents_enter(on_sys_io_getevents_enter_t);
typedef void (*on_sys_io_getevents_return_t)(CPUState* cpu, target_ulong pc, uint32_t ctx_id, int32_t min_nr, int32_t nr, uint32_t events, uint32_t timeout);
void ppp_add_cb_on_sys_io_getevents_return(on_sys_io_getevents_return_t);
bool ppp_remove_cb_on_sys_io_getevents_return(on_sys_io_getevents_return_t);
typedef void (*on_sys_io_setup_enter_t)(CPUState* cpu, target_ulong pc, uint32_t nr_reqs, uint32_t ctx);
void ppp_add_cb_on_sys_io_setup_enter(on_sys_io_setup_enter_t);
bool ppp_remove_cb_on_sys_io_setup_enter(on_sys_io_setup_enter_t);
typedef void (*on_sys_io_setup_return_t)(CPUState* cpu, target_ulong pc, uint32_t nr_reqs, uint32_t ctx);
void ppp_add_cb_on_sys_io_setup_return(on_sys_io_setup_return_t);
bool ppp_remove_cb_on_sys_io_setup_return(on_sys_io_setup_return_t);
typedef void (*on_sys_io_submit_enter_t)(CPUState* cpu, target_ulong pc, uint32_t arg0, int32_t arg1, uint32_t arg2);
void ppp_add_cb_on_sys_io_submit_enter(on_sys_io_submit_enter_t);
bool ppp_remove_cb_on_sys_io_submit_enter(on_sys_io_submit_enter_t);
typedef void (*on_sys_io_submit_return_t)(CPUState* cpu, target_ulong pc, uint32_t arg0, int32_t arg1, uint32_t arg2);
void ppp_add_cb_on_sys_io_submit_return(on_sys_io_submit_return_t);
bool ppp_remove_cb_on_sys_io_submit_return(on_sys_io_submit_return_t);
typedef void (*on_sys_ioctl_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t cmd, uint32_t arg);
void ppp_add_cb_on_sys_ioctl_enter(on_sys_ioctl_enter_t);
bool ppp_remove_cb_on_sys_ioctl_enter(on_sys_ioctl_enter_t);
typedef void (*on_sys_ioctl_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t cmd, uint32_t arg);
void ppp_add_cb_on_sys_ioctl_return(on_sys_ioctl_return_t);
bool ppp_remove_cb_on_sys_ioctl_return(on_sys_ioctl_return_t);
typedef void (*on_sys_ioprio_get_enter_t)(CPUState* cpu, target_ulong pc, int32_t which, int32_t who);
void ppp_add_cb_on_sys_ioprio_get_enter(on_sys_ioprio_get_enter_t);
bool ppp_remove_cb_on_sys_ioprio_get_enter(on_sys_ioprio_get_enter_t);
typedef void (*on_sys_ioprio_get_return_t)(CPUState* cpu, target_ulong pc, int32_t which, int32_t who);
void ppp_add_cb_on_sys_ioprio_get_return(on_sys_ioprio_get_return_t);
bool ppp_remove_cb_on_sys_ioprio_get_return(on_sys_ioprio_get_return_t);
typedef void (*on_sys_ioprio_set_enter_t)(CPUState* cpu, target_ulong pc, int32_t which, int32_t who, int32_t ioprio);
void ppp_add_cb_on_sys_ioprio_set_enter(on_sys_ioprio_set_enter_t);
bool ppp_remove_cb_on_sys_ioprio_set_enter(on_sys_ioprio_set_enter_t);
typedef void (*on_sys_ioprio_set_return_t)(CPUState* cpu, target_ulong pc, int32_t which, int32_t who, int32_t ioprio);
void ppp_add_cb_on_sys_ioprio_set_return(on_sys_ioprio_set_return_t);
bool ppp_remove_cb_on_sys_ioprio_set_return(on_sys_ioprio_set_return_t);
typedef void (*on_sys_ipc_enter_t)(CPUState* cpu, target_ulong pc, uint32_t call, int32_t first, uint32_t second, uint32_t third, uint32_t ptr, int32_t fifth);
void ppp_add_cb_on_sys_ipc_enter(on_sys_ipc_enter_t);
bool ppp_remove_cb_on_sys_ipc_enter(on_sys_ipc_enter_t);
typedef void (*on_sys_ipc_return_t)(CPUState* cpu, target_ulong pc, uint32_t call, int32_t first, uint32_t second, uint32_t third, uint32_t ptr, int32_t fifth);
void ppp_add_cb_on_sys_ipc_return(on_sys_ipc_return_t);
bool ppp_remove_cb_on_sys_ipc_return(on_sys_ipc_return_t);
typedef void (*on_sys_kcmp_enter_t)(CPUState* cpu, target_ulong pc, int32_t pid1, int32_t pid2, int32_t type, uint32_t idx1, uint32_t idx2);
void ppp_add_cb_on_sys_kcmp_enter(on_sys_kcmp_enter_t);
bool ppp_remove_cb_on_sys_kcmp_enter(on_sys_kcmp_enter_t);
typedef void (*on_sys_kcmp_return_t)(CPUState* cpu, target_ulong pc, int32_t pid1, int32_t pid2, int32_t type, uint32_t idx1, uint32_t idx2);
void ppp_add_cb_on_sys_kcmp_return(on_sys_kcmp_return_t);
bool ppp_remove_cb_on_sys_kcmp_return(on_sys_kcmp_return_t);
typedef void (*on_sys_kexec_load_enter_t)(CPUState* cpu, target_ulong pc, uint32_t entry, uint32_t nr_segments, uint32_t segments, uint32_t flags);
void ppp_add_cb_on_sys_kexec_load_enter(on_sys_kexec_load_enter_t);
bool ppp_remove_cb_on_sys_kexec_load_enter(on_sys_kexec_load_enter_t);
typedef void (*on_sys_kexec_load_return_t)(CPUState* cpu, target_ulong pc, uint32_t entry, uint32_t nr_segments, uint32_t segments, uint32_t flags);
void ppp_add_cb_on_sys_kexec_load_return(on_sys_kexec_load_return_t);
bool ppp_remove_cb_on_sys_kexec_load_return(on_sys_kexec_load_return_t);
typedef void (*on_sys_keyctl_enter_t)(CPUState* cpu, target_ulong pc, int32_t cmd, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5);
void ppp_add_cb_on_sys_keyctl_enter(on_sys_keyctl_enter_t);
bool ppp_remove_cb_on_sys_keyctl_enter(on_sys_keyctl_enter_t);
typedef void (*on_sys_keyctl_return_t)(CPUState* cpu, target_ulong pc, int32_t cmd, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5);
void ppp_add_cb_on_sys_keyctl_return(on_sys_keyctl_return_t);
bool ppp_remove_cb_on_sys_keyctl_return(on_sys_keyctl_return_t);
typedef void (*on_sys_kill_enter_t)(CPUState* cpu, target_ulong pc, int32_t pid, int32_t sig);
void ppp_add_cb_on_sys_kill_enter(on_sys_kill_enter_t);
bool ppp_remove_cb_on_sys_kill_enter(on_sys_kill_enter_t);
typedef void (*on_sys_kill_return_t)(CPUState* cpu, target_ulong pc, int32_t pid, int32_t sig);
void ppp_add_cb_on_sys_kill_return(on_sys_kill_return_t);
bool ppp_remove_cb_on_sys_kill_return(on_sys_kill_return_t);
typedef void (*on_sys_lchown_enter_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t user, uint32_t group);
void ppp_add_cb_on_sys_lchown_enter(on_sys_lchown_enter_t);
bool ppp_remove_cb_on_sys_lchown_enter(on_sys_lchown_enter_t);
typedef void (*on_sys_lchown_return_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t user, uint32_t group);
void ppp_add_cb_on_sys_lchown_return(on_sys_lchown_return_t);
bool ppp_remove_cb_on_sys_lchown_return(on_sys_lchown_return_t);
typedef void (*on_sys_lchown16_enter_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t user, uint32_t group);
void ppp_add_cb_on_sys_lchown16_enter(on_sys_lchown16_enter_t);
bool ppp_remove_cb_on_sys_lchown16_enter(on_sys_lchown16_enter_t);
typedef void (*on_sys_lchown16_return_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t user, uint32_t group);
void ppp_add_cb_on_sys_lchown16_return(on_sys_lchown16_return_t);
bool ppp_remove_cb_on_sys_lchown16_return(on_sys_lchown16_return_t);
typedef void (*on_sys_lgetxattr_enter_t)(CPUState* cpu, target_ulong pc, uint32_t path, uint32_t name, uint32_t value, uint32_t size);
void ppp_add_cb_on_sys_lgetxattr_enter(on_sys_lgetxattr_enter_t);
bool ppp_remove_cb_on_sys_lgetxattr_enter(on_sys_lgetxattr_enter_t);
typedef void (*on_sys_lgetxattr_return_t)(CPUState* cpu, target_ulong pc, uint32_t path, uint32_t name, uint32_t value, uint32_t size);
void ppp_add_cb_on_sys_lgetxattr_return(on_sys_lgetxattr_return_t);
bool ppp_remove_cb_on_sys_lgetxattr_return(on_sys_lgetxattr_return_t);
typedef void (*on_sys_link_enter_t)(CPUState* cpu, target_ulong pc, uint32_t oldname, uint32_t newname);
void ppp_add_cb_on_sys_link_enter(on_sys_link_enter_t);
bool ppp_remove_cb_on_sys_link_enter(on_sys_link_enter_t);
typedef void (*on_sys_link_return_t)(CPUState* cpu, target_ulong pc, uint32_t oldname, uint32_t newname);
void ppp_add_cb_on_sys_link_return(on_sys_link_return_t);
bool ppp_remove_cb_on_sys_link_return(on_sys_link_return_t);
typedef void (*on_sys_linkat_enter_t)(CPUState* cpu, target_ulong pc, int32_t olddfd, uint32_t oldname, int32_t newdfd, uint32_t newname, int32_t flags);
void ppp_add_cb_on_sys_linkat_enter(on_sys_linkat_enter_t);
bool ppp_remove_cb_on_sys_linkat_enter(on_sys_linkat_enter_t);
typedef void (*on_sys_linkat_return_t)(CPUState* cpu, target_ulong pc, int32_t olddfd, uint32_t oldname, int32_t newdfd, uint32_t newname, int32_t flags);
void ppp_add_cb_on_sys_linkat_return(on_sys_linkat_return_t);
bool ppp_remove_cb_on_sys_linkat_return(on_sys_linkat_return_t);
typedef void (*on_sys_listen_enter_t)(CPUState* cpu, target_ulong pc, int32_t arg0, int32_t arg1);
void ppp_add_cb_on_sys_listen_enter(on_sys_listen_enter_t);
bool ppp_remove_cb_on_sys_listen_enter(on_sys_listen_enter_t);
typedef void (*on_sys_listen_return_t)(CPUState* cpu, target_ulong pc, int32_t arg0, int32_t arg1);
void ppp_add_cb_on_sys_listen_return(on_sys_listen_return_t);
bool ppp_remove_cb_on_sys_listen_return(on_sys_listen_return_t);
typedef void (*on_sys_listxattr_enter_t)(CPUState* cpu, target_ulong pc, uint32_t path, uint32_t list, uint32_t size);
void ppp_add_cb_on_sys_listxattr_enter(on_sys_listxattr_enter_t);
bool ppp_remove_cb_on_sys_listxattr_enter(on_sys_listxattr_enter_t);
typedef void (*on_sys_listxattr_return_t)(CPUState* cpu, target_ulong pc, uint32_t path, uint32_t list, uint32_t size);
void ppp_add_cb_on_sys_listxattr_return(on_sys_listxattr_return_t);
bool ppp_remove_cb_on_sys_listxattr_return(on_sys_listxattr_return_t);
typedef void (*on_sys_llistxattr_enter_t)(CPUState* cpu, target_ulong pc, uint32_t path, uint32_t list, uint32_t size);
void ppp_add_cb_on_sys_llistxattr_enter(on_sys_llistxattr_enter_t);
bool ppp_remove_cb_on_sys_llistxattr_enter(on_sys_llistxattr_enter_t);
typedef void (*on_sys_llistxattr_return_t)(CPUState* cpu, target_ulong pc, uint32_t path, uint32_t list, uint32_t size);
void ppp_add_cb_on_sys_llistxattr_return(on_sys_llistxattr_return_t);
bool ppp_remove_cb_on_sys_llistxattr_return(on_sys_llistxattr_return_t);
typedef void (*on_sys_llseek_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t offset_high, uint32_t offset_low, uint32_t result, uint32_t whence);
void ppp_add_cb_on_sys_llseek_enter(on_sys_llseek_enter_t);
bool ppp_remove_cb_on_sys_llseek_enter(on_sys_llseek_enter_t);
typedef void (*on_sys_llseek_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t offset_high, uint32_t offset_low, uint32_t result, uint32_t whence);
void ppp_add_cb_on_sys_llseek_return(on_sys_llseek_return_t);
bool ppp_remove_cb_on_sys_llseek_return(on_sys_llseek_return_t);
typedef void (*on_sys_lookup_dcookie_enter_t)(CPUState* cpu, target_ulong pc, uint64_t cookie64, uint32_t buf, uint32_t len);
void ppp_add_cb_on_sys_lookup_dcookie_enter(on_sys_lookup_dcookie_enter_t);
bool ppp_remove_cb_on_sys_lookup_dcookie_enter(on_sys_lookup_dcookie_enter_t);
typedef void (*on_sys_lookup_dcookie_return_t)(CPUState* cpu, target_ulong pc, uint64_t cookie64, uint32_t buf, uint32_t len);
void ppp_add_cb_on_sys_lookup_dcookie_return(on_sys_lookup_dcookie_return_t);
bool ppp_remove_cb_on_sys_lookup_dcookie_return(on_sys_lookup_dcookie_return_t);
typedef void (*on_sys_lremovexattr_enter_t)(CPUState* cpu, target_ulong pc, uint32_t path, uint32_t name);
void ppp_add_cb_on_sys_lremovexattr_enter(on_sys_lremovexattr_enter_t);
bool ppp_remove_cb_on_sys_lremovexattr_enter(on_sys_lremovexattr_enter_t);
typedef void (*on_sys_lremovexattr_return_t)(CPUState* cpu, target_ulong pc, uint32_t path, uint32_t name);
void ppp_add_cb_on_sys_lremovexattr_return(on_sys_lremovexattr_return_t);
bool ppp_remove_cb_on_sys_lremovexattr_return(on_sys_lremovexattr_return_t);
typedef void (*on_sys_lseek_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t offset, uint32_t whence);
void ppp_add_cb_on_sys_lseek_enter(on_sys_lseek_enter_t);
bool ppp_remove_cb_on_sys_lseek_enter(on_sys_lseek_enter_t);
typedef void (*on_sys_lseek_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t offset, uint32_t whence);
void ppp_add_cb_on_sys_lseek_return(on_sys_lseek_return_t);
bool ppp_remove_cb_on_sys_lseek_return(on_sys_lseek_return_t);
typedef void (*on_sys_lsetxattr_enter_t)(CPUState* cpu, target_ulong pc, uint32_t path, uint32_t name, uint32_t value, uint32_t size, int32_t flags);
void ppp_add_cb_on_sys_lsetxattr_enter(on_sys_lsetxattr_enter_t);
bool ppp_remove_cb_on_sys_lsetxattr_enter(on_sys_lsetxattr_enter_t);
typedef void (*on_sys_lsetxattr_return_t)(CPUState* cpu, target_ulong pc, uint32_t path, uint32_t name, uint32_t value, uint32_t size, int32_t flags);
void ppp_add_cb_on_sys_lsetxattr_return(on_sys_lsetxattr_return_t);
bool ppp_remove_cb_on_sys_lsetxattr_return(on_sys_lsetxattr_return_t);
typedef void (*on_sys_lstat64_enter_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t statbuf);
void ppp_add_cb_on_sys_lstat64_enter(on_sys_lstat64_enter_t);
bool ppp_remove_cb_on_sys_lstat64_enter(on_sys_lstat64_enter_t);
typedef void (*on_sys_lstat64_return_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t statbuf);
void ppp_add_cb_on_sys_lstat64_return(on_sys_lstat64_return_t);
bool ppp_remove_cb_on_sys_lstat64_return(on_sys_lstat64_return_t);
typedef void (*on_sys_madvise_enter_t)(CPUState* cpu, target_ulong pc, uint32_t start, uint32_t len, int32_t behavior);
void ppp_add_cb_on_sys_madvise_enter(on_sys_madvise_enter_t);
bool ppp_remove_cb_on_sys_madvise_enter(on_sys_madvise_enter_t);
typedef void (*on_sys_madvise_return_t)(CPUState* cpu, target_ulong pc, uint32_t start, uint32_t len, int32_t behavior);
void ppp_add_cb_on_sys_madvise_return(on_sys_madvise_return_t);
bool ppp_remove_cb_on_sys_madvise_return(on_sys_madvise_return_t);
typedef void (*on_sys_mbind_enter_t)(CPUState* cpu, target_ulong pc, uint32_t start, uint32_t len, uint32_t mode, uint32_t nmask, uint32_t maxnode, uint32_t flags);
void ppp_add_cb_on_sys_mbind_enter(on_sys_mbind_enter_t);
bool ppp_remove_cb_on_sys_mbind_enter(on_sys_mbind_enter_t);
typedef void (*on_sys_mbind_return_t)(CPUState* cpu, target_ulong pc, uint32_t start, uint32_t len, uint32_t mode, uint32_t nmask, uint32_t maxnode, uint32_t flags);
void ppp_add_cb_on_sys_mbind_return(on_sys_mbind_return_t);
bool ppp_remove_cb_on_sys_mbind_return(on_sys_mbind_return_t);
typedef void (*on_sys_membarrier_enter_t)(CPUState* cpu, target_ulong pc, int32_t cmd, int32_t flags);
void ppp_add_cb_on_sys_membarrier_enter(on_sys_membarrier_enter_t);
bool ppp_remove_cb_on_sys_membarrier_enter(on_sys_membarrier_enter_t);
typedef void (*on_sys_membarrier_return_t)(CPUState* cpu, target_ulong pc, int32_t cmd, int32_t flags);
void ppp_add_cb_on_sys_membarrier_return(on_sys_membarrier_return_t);
bool ppp_remove_cb_on_sys_membarrier_return(on_sys_membarrier_return_t);
typedef void (*on_sys_memfd_create_enter_t)(CPUState* cpu, target_ulong pc, uint32_t uname_ptr, uint32_t flags);
void ppp_add_cb_on_sys_memfd_create_enter(on_sys_memfd_create_enter_t);
bool ppp_remove_cb_on_sys_memfd_create_enter(on_sys_memfd_create_enter_t);
typedef void (*on_sys_memfd_create_return_t)(CPUState* cpu, target_ulong pc, uint32_t uname_ptr, uint32_t flags);
void ppp_add_cb_on_sys_memfd_create_return(on_sys_memfd_create_return_t);
bool ppp_remove_cb_on_sys_memfd_create_return(on_sys_memfd_create_return_t);
typedef void (*on_sys_mincore_enter_t)(CPUState* cpu, target_ulong pc, uint32_t start, uint32_t len, uint32_t vec);
void ppp_add_cb_on_sys_mincore_enter(on_sys_mincore_enter_t);
bool ppp_remove_cb_on_sys_mincore_enter(on_sys_mincore_enter_t);
typedef void (*on_sys_mincore_return_t)(CPUState* cpu, target_ulong pc, uint32_t start, uint32_t len, uint32_t vec);
void ppp_add_cb_on_sys_mincore_return(on_sys_mincore_return_t);
bool ppp_remove_cb_on_sys_mincore_return(on_sys_mincore_return_t);
typedef void (*on_sys_mkdir_enter_t)(CPUState* cpu, target_ulong pc, uint32_t pathname, uint32_t mode);
void ppp_add_cb_on_sys_mkdir_enter(on_sys_mkdir_enter_t);
bool ppp_remove_cb_on_sys_mkdir_enter(on_sys_mkdir_enter_t);
typedef void (*on_sys_mkdir_return_t)(CPUState* cpu, target_ulong pc, uint32_t pathname, uint32_t mode);
void ppp_add_cb_on_sys_mkdir_return(on_sys_mkdir_return_t);
bool ppp_remove_cb_on_sys_mkdir_return(on_sys_mkdir_return_t);
typedef void (*on_sys_mkdirat_enter_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t pathname, uint32_t mode);
void ppp_add_cb_on_sys_mkdirat_enter(on_sys_mkdirat_enter_t);
bool ppp_remove_cb_on_sys_mkdirat_enter(on_sys_mkdirat_enter_t);
typedef void (*on_sys_mkdirat_return_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t pathname, uint32_t mode);
void ppp_add_cb_on_sys_mkdirat_return(on_sys_mkdirat_return_t);
bool ppp_remove_cb_on_sys_mkdirat_return(on_sys_mkdirat_return_t);
typedef void (*on_sys_mknod_enter_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t mode, uint32_t dev);
void ppp_add_cb_on_sys_mknod_enter(on_sys_mknod_enter_t);
bool ppp_remove_cb_on_sys_mknod_enter(on_sys_mknod_enter_t);
typedef void (*on_sys_mknod_return_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t mode, uint32_t dev);
void ppp_add_cb_on_sys_mknod_return(on_sys_mknod_return_t);
bool ppp_remove_cb_on_sys_mknod_return(on_sys_mknod_return_t);
typedef void (*on_sys_mknodat_enter_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t filename, uint32_t mode, uint32_t dev);
void ppp_add_cb_on_sys_mknodat_enter(on_sys_mknodat_enter_t);
bool ppp_remove_cb_on_sys_mknodat_enter(on_sys_mknodat_enter_t);
typedef void (*on_sys_mknodat_return_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t filename, uint32_t mode, uint32_t dev);
void ppp_add_cb_on_sys_mknodat_return(on_sys_mknodat_return_t);
bool ppp_remove_cb_on_sys_mknodat_return(on_sys_mknodat_return_t);
typedef void (*on_sys_mlock_enter_t)(CPUState* cpu, target_ulong pc, uint32_t start, uint32_t len);
void ppp_add_cb_on_sys_mlock_enter(on_sys_mlock_enter_t);
bool ppp_remove_cb_on_sys_mlock_enter(on_sys_mlock_enter_t);
typedef void (*on_sys_mlock_return_t)(CPUState* cpu, target_ulong pc, uint32_t start, uint32_t len);
void ppp_add_cb_on_sys_mlock_return(on_sys_mlock_return_t);
bool ppp_remove_cb_on_sys_mlock_return(on_sys_mlock_return_t);
typedef void (*on_sys_mlock2_enter_t)(CPUState* cpu, target_ulong pc, uint32_t start, uint32_t len, int32_t flags);
void ppp_add_cb_on_sys_mlock2_enter(on_sys_mlock2_enter_t);
bool ppp_remove_cb_on_sys_mlock2_enter(on_sys_mlock2_enter_t);
typedef void (*on_sys_mlock2_return_t)(CPUState* cpu, target_ulong pc, uint32_t start, uint32_t len, int32_t flags);
void ppp_add_cb_on_sys_mlock2_return(on_sys_mlock2_return_t);
bool ppp_remove_cb_on_sys_mlock2_return(on_sys_mlock2_return_t);
typedef void (*on_sys_mlockall_enter_t)(CPUState* cpu, target_ulong pc, int32_t flags);
void ppp_add_cb_on_sys_mlockall_enter(on_sys_mlockall_enter_t);
bool ppp_remove_cb_on_sys_mlockall_enter(on_sys_mlockall_enter_t);
typedef void (*on_sys_mlockall_return_t)(CPUState* cpu, target_ulong pc, int32_t flags);
void ppp_add_cb_on_sys_mlockall_return(on_sys_mlockall_return_t);
bool ppp_remove_cb_on_sys_mlockall_return(on_sys_mlockall_return_t);
typedef void (*on_sys_mount_enter_t)(CPUState* cpu, target_ulong pc, uint32_t dev_name, uint32_t dir_name, uint32_t type, uint32_t flags, uint32_t _data);
void ppp_add_cb_on_sys_mount_enter(on_sys_mount_enter_t);
bool ppp_remove_cb_on_sys_mount_enter(on_sys_mount_enter_t);
typedef void (*on_sys_mount_return_t)(CPUState* cpu, target_ulong pc, uint32_t dev_name, uint32_t dir_name, uint32_t type, uint32_t flags, uint32_t _data);
void ppp_add_cb_on_sys_mount_return(on_sys_mount_return_t);
bool ppp_remove_cb_on_sys_mount_return(on_sys_mount_return_t);
typedef void (*on_sys_move_pages_enter_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t nr_pages, uint32_t pages, uint32_t nodes, uint32_t status, int32_t flags);
void ppp_add_cb_on_sys_move_pages_enter(on_sys_move_pages_enter_t);
bool ppp_remove_cb_on_sys_move_pages_enter(on_sys_move_pages_enter_t);
typedef void (*on_sys_move_pages_return_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t nr_pages, uint32_t pages, uint32_t nodes, uint32_t status, int32_t flags);
void ppp_add_cb_on_sys_move_pages_return(on_sys_move_pages_return_t);
bool ppp_remove_cb_on_sys_move_pages_return(on_sys_move_pages_return_t);
typedef void (*on_sys_mprotect_enter_t)(CPUState* cpu, target_ulong pc, uint32_t start, uint32_t len, uint32_t prot);
void ppp_add_cb_on_sys_mprotect_enter(on_sys_mprotect_enter_t);
bool ppp_remove_cb_on_sys_mprotect_enter(on_sys_mprotect_enter_t);
typedef void (*on_sys_mprotect_return_t)(CPUState* cpu, target_ulong pc, uint32_t start, uint32_t len, uint32_t prot);
void ppp_add_cb_on_sys_mprotect_return(on_sys_mprotect_return_t);
bool ppp_remove_cb_on_sys_mprotect_return(on_sys_mprotect_return_t);
typedef void (*on_sys_mq_getsetattr_enter_t)(CPUState* cpu, target_ulong pc, uint32_t mqdes, uint32_t mqstat, uint32_t omqstat);
void ppp_add_cb_on_sys_mq_getsetattr_enter(on_sys_mq_getsetattr_enter_t);
bool ppp_remove_cb_on_sys_mq_getsetattr_enter(on_sys_mq_getsetattr_enter_t);
typedef void (*on_sys_mq_getsetattr_return_t)(CPUState* cpu, target_ulong pc, uint32_t mqdes, uint32_t mqstat, uint32_t omqstat);
void ppp_add_cb_on_sys_mq_getsetattr_return(on_sys_mq_getsetattr_return_t);
bool ppp_remove_cb_on_sys_mq_getsetattr_return(on_sys_mq_getsetattr_return_t);
typedef void (*on_sys_mq_notify_enter_t)(CPUState* cpu, target_ulong pc, uint32_t mqdes, uint32_t notification);
void ppp_add_cb_on_sys_mq_notify_enter(on_sys_mq_notify_enter_t);
bool ppp_remove_cb_on_sys_mq_notify_enter(on_sys_mq_notify_enter_t);
typedef void (*on_sys_mq_notify_return_t)(CPUState* cpu, target_ulong pc, uint32_t mqdes, uint32_t notification);
void ppp_add_cb_on_sys_mq_notify_return(on_sys_mq_notify_return_t);
bool ppp_remove_cb_on_sys_mq_notify_return(on_sys_mq_notify_return_t);
typedef void (*on_sys_mq_open_enter_t)(CPUState* cpu, target_ulong pc, uint32_t name, int32_t oflag, uint32_t mode, uint32_t attr);
void ppp_add_cb_on_sys_mq_open_enter(on_sys_mq_open_enter_t);
bool ppp_remove_cb_on_sys_mq_open_enter(on_sys_mq_open_enter_t);
typedef void (*on_sys_mq_open_return_t)(CPUState* cpu, target_ulong pc, uint32_t name, int32_t oflag, uint32_t mode, uint32_t attr);
void ppp_add_cb_on_sys_mq_open_return(on_sys_mq_open_return_t);
bool ppp_remove_cb_on_sys_mq_open_return(on_sys_mq_open_return_t);
typedef void (*on_sys_mq_timedreceive_enter_t)(CPUState* cpu, target_ulong pc, uint32_t mqdes, uint32_t msg_ptr, uint32_t msg_len, uint32_t msg_prio, uint32_t abs_timeout);
void ppp_add_cb_on_sys_mq_timedreceive_enter(on_sys_mq_timedreceive_enter_t);
bool ppp_remove_cb_on_sys_mq_timedreceive_enter(on_sys_mq_timedreceive_enter_t);
typedef void (*on_sys_mq_timedreceive_return_t)(CPUState* cpu, target_ulong pc, uint32_t mqdes, uint32_t msg_ptr, uint32_t msg_len, uint32_t msg_prio, uint32_t abs_timeout);
void ppp_add_cb_on_sys_mq_timedreceive_return(on_sys_mq_timedreceive_return_t);
bool ppp_remove_cb_on_sys_mq_timedreceive_return(on_sys_mq_timedreceive_return_t);
typedef void (*on_sys_mq_timedsend_enter_t)(CPUState* cpu, target_ulong pc, uint32_t mqdes, uint32_t msg_ptr, uint32_t msg_len, uint32_t msg_prio, uint32_t abs_timeout);
void ppp_add_cb_on_sys_mq_timedsend_enter(on_sys_mq_timedsend_enter_t);
bool ppp_remove_cb_on_sys_mq_timedsend_enter(on_sys_mq_timedsend_enter_t);
typedef void (*on_sys_mq_timedsend_return_t)(CPUState* cpu, target_ulong pc, uint32_t mqdes, uint32_t msg_ptr, uint32_t msg_len, uint32_t msg_prio, uint32_t abs_timeout);
void ppp_add_cb_on_sys_mq_timedsend_return(on_sys_mq_timedsend_return_t);
bool ppp_remove_cb_on_sys_mq_timedsend_return(on_sys_mq_timedsend_return_t);
typedef void (*on_sys_mq_unlink_enter_t)(CPUState* cpu, target_ulong pc, uint32_t name);
void ppp_add_cb_on_sys_mq_unlink_enter(on_sys_mq_unlink_enter_t);
bool ppp_remove_cb_on_sys_mq_unlink_enter(on_sys_mq_unlink_enter_t);
typedef void (*on_sys_mq_unlink_return_t)(CPUState* cpu, target_ulong pc, uint32_t name);
void ppp_add_cb_on_sys_mq_unlink_return(on_sys_mq_unlink_return_t);
bool ppp_remove_cb_on_sys_mq_unlink_return(on_sys_mq_unlink_return_t);
typedef void (*on_sys_mremap_enter_t)(CPUState* cpu, target_ulong pc, uint32_t addr, uint32_t old_len, uint32_t new_len, uint32_t flags, uint32_t new_addr);
void ppp_add_cb_on_sys_mremap_enter(on_sys_mremap_enter_t);
bool ppp_remove_cb_on_sys_mremap_enter(on_sys_mremap_enter_t);
typedef void (*on_sys_mremap_return_t)(CPUState* cpu, target_ulong pc, uint32_t addr, uint32_t old_len, uint32_t new_len, uint32_t flags, uint32_t new_addr);
void ppp_add_cb_on_sys_mremap_return(on_sys_mremap_return_t);
bool ppp_remove_cb_on_sys_mremap_return(on_sys_mremap_return_t);
typedef void (*on_sys_msgctl_enter_t)(CPUState* cpu, target_ulong pc, int32_t msqid, int32_t cmd, uint32_t buf);
void ppp_add_cb_on_sys_msgctl_enter(on_sys_msgctl_enter_t);
bool ppp_remove_cb_on_sys_msgctl_enter(on_sys_msgctl_enter_t);
typedef void (*on_sys_msgctl_return_t)(CPUState* cpu, target_ulong pc, int32_t msqid, int32_t cmd, uint32_t buf);
void ppp_add_cb_on_sys_msgctl_return(on_sys_msgctl_return_t);
bool ppp_remove_cb_on_sys_msgctl_return(on_sys_msgctl_return_t);
typedef void (*on_sys_msgget_enter_t)(CPUState* cpu, target_ulong pc, uint32_t key, int32_t msgflg);
void ppp_add_cb_on_sys_msgget_enter(on_sys_msgget_enter_t);
bool ppp_remove_cb_on_sys_msgget_enter(on_sys_msgget_enter_t);
typedef void (*on_sys_msgget_return_t)(CPUState* cpu, target_ulong pc, uint32_t key, int32_t msgflg);
void ppp_add_cb_on_sys_msgget_return(on_sys_msgget_return_t);
bool ppp_remove_cb_on_sys_msgget_return(on_sys_msgget_return_t);
typedef void (*on_sys_msgrcv_enter_t)(CPUState* cpu, target_ulong pc, int32_t msqid, uint32_t msgp, uint32_t msgsz, int32_t msgtyp, int32_t msgflg);
void ppp_add_cb_on_sys_msgrcv_enter(on_sys_msgrcv_enter_t);
bool ppp_remove_cb_on_sys_msgrcv_enter(on_sys_msgrcv_enter_t);
typedef void (*on_sys_msgrcv_return_t)(CPUState* cpu, target_ulong pc, int32_t msqid, uint32_t msgp, uint32_t msgsz, int32_t msgtyp, int32_t msgflg);
void ppp_add_cb_on_sys_msgrcv_return(on_sys_msgrcv_return_t);
bool ppp_remove_cb_on_sys_msgrcv_return(on_sys_msgrcv_return_t);
typedef void (*on_sys_msgsnd_enter_t)(CPUState* cpu, target_ulong pc, int32_t msqid, uint32_t msgp, uint32_t msgsz, int32_t msgflg);
void ppp_add_cb_on_sys_msgsnd_enter(on_sys_msgsnd_enter_t);
bool ppp_remove_cb_on_sys_msgsnd_enter(on_sys_msgsnd_enter_t);
typedef void (*on_sys_msgsnd_return_t)(CPUState* cpu, target_ulong pc, int32_t msqid, uint32_t msgp, uint32_t msgsz, int32_t msgflg);
void ppp_add_cb_on_sys_msgsnd_return(on_sys_msgsnd_return_t);
bool ppp_remove_cb_on_sys_msgsnd_return(on_sys_msgsnd_return_t);
typedef void (*on_sys_msync_enter_t)(CPUState* cpu, target_ulong pc, uint32_t start, uint32_t len, int32_t flags);
void ppp_add_cb_on_sys_msync_enter(on_sys_msync_enter_t);
bool ppp_remove_cb_on_sys_msync_enter(on_sys_msync_enter_t);
typedef void (*on_sys_msync_return_t)(CPUState* cpu, target_ulong pc, uint32_t start, uint32_t len, int32_t flags);
void ppp_add_cb_on_sys_msync_return(on_sys_msync_return_t);
bool ppp_remove_cb_on_sys_msync_return(on_sys_msync_return_t);
typedef void (*on_sys_munlock_enter_t)(CPUState* cpu, target_ulong pc, uint32_t start, uint32_t len);
void ppp_add_cb_on_sys_munlock_enter(on_sys_munlock_enter_t);
bool ppp_remove_cb_on_sys_munlock_enter(on_sys_munlock_enter_t);
typedef void (*on_sys_munlock_return_t)(CPUState* cpu, target_ulong pc, uint32_t start, uint32_t len);
void ppp_add_cb_on_sys_munlock_return(on_sys_munlock_return_t);
bool ppp_remove_cb_on_sys_munlock_return(on_sys_munlock_return_t);
typedef void (*on_sys_munlockall_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_munlockall_enter(on_sys_munlockall_enter_t);
bool ppp_remove_cb_on_sys_munlockall_enter(on_sys_munlockall_enter_t);
typedef void (*on_sys_munlockall_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_munlockall_return(on_sys_munlockall_return_t);
bool ppp_remove_cb_on_sys_munlockall_return(on_sys_munlockall_return_t);
typedef void (*on_sys_munmap_enter_t)(CPUState* cpu, target_ulong pc, uint32_t addr, uint32_t len);
void ppp_add_cb_on_sys_munmap_enter(on_sys_munmap_enter_t);
bool ppp_remove_cb_on_sys_munmap_enter(on_sys_munmap_enter_t);
typedef void (*on_sys_munmap_return_t)(CPUState* cpu, target_ulong pc, uint32_t addr, uint32_t len);
void ppp_add_cb_on_sys_munmap_return(on_sys_munmap_return_t);
bool ppp_remove_cb_on_sys_munmap_return(on_sys_munmap_return_t);
typedef void (*on_sys_name_to_handle_at_enter_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t name, uint32_t handle, uint32_t mnt_id, int32_t flag);
void ppp_add_cb_on_sys_name_to_handle_at_enter(on_sys_name_to_handle_at_enter_t);
bool ppp_remove_cb_on_sys_name_to_handle_at_enter(on_sys_name_to_handle_at_enter_t);
typedef void (*on_sys_name_to_handle_at_return_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t name, uint32_t handle, uint32_t mnt_id, int32_t flag);
void ppp_add_cb_on_sys_name_to_handle_at_return(on_sys_name_to_handle_at_return_t);
bool ppp_remove_cb_on_sys_name_to_handle_at_return(on_sys_name_to_handle_at_return_t);
typedef void (*on_sys_nanosleep_enter_t)(CPUState* cpu, target_ulong pc, uint32_t rqtp, uint32_t rmtp);
void ppp_add_cb_on_sys_nanosleep_enter(on_sys_nanosleep_enter_t);
bool ppp_remove_cb_on_sys_nanosleep_enter(on_sys_nanosleep_enter_t);
typedef void (*on_sys_nanosleep_return_t)(CPUState* cpu, target_ulong pc, uint32_t rqtp, uint32_t rmtp);
void ppp_add_cb_on_sys_nanosleep_return(on_sys_nanosleep_return_t);
bool ppp_remove_cb_on_sys_nanosleep_return(on_sys_nanosleep_return_t);
typedef void (*on_sys_newfstat_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t statbuf);
void ppp_add_cb_on_sys_newfstat_enter(on_sys_newfstat_enter_t);
bool ppp_remove_cb_on_sys_newfstat_enter(on_sys_newfstat_enter_t);
typedef void (*on_sys_newfstat_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t statbuf);
void ppp_add_cb_on_sys_newfstat_return(on_sys_newfstat_return_t);
bool ppp_remove_cb_on_sys_newfstat_return(on_sys_newfstat_return_t);
typedef void (*on_sys_newlstat_enter_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t statbuf);
void ppp_add_cb_on_sys_newlstat_enter(on_sys_newlstat_enter_t);
bool ppp_remove_cb_on_sys_newlstat_enter(on_sys_newlstat_enter_t);
typedef void (*on_sys_newlstat_return_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t statbuf);
void ppp_add_cb_on_sys_newlstat_return(on_sys_newlstat_return_t);
bool ppp_remove_cb_on_sys_newlstat_return(on_sys_newlstat_return_t);
typedef void (*on_sys_newstat_enter_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t statbuf);
void ppp_add_cb_on_sys_newstat_enter(on_sys_newstat_enter_t);
bool ppp_remove_cb_on_sys_newstat_enter(on_sys_newstat_enter_t);
typedef void (*on_sys_newstat_return_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t statbuf);
void ppp_add_cb_on_sys_newstat_return(on_sys_newstat_return_t);
bool ppp_remove_cb_on_sys_newstat_return(on_sys_newstat_return_t);
typedef void (*on_sys_newuname_enter_t)(CPUState* cpu, target_ulong pc, uint32_t name);
void ppp_add_cb_on_sys_newuname_enter(on_sys_newuname_enter_t);
bool ppp_remove_cb_on_sys_newuname_enter(on_sys_newuname_enter_t);
typedef void (*on_sys_newuname_return_t)(CPUState* cpu, target_ulong pc, uint32_t name);
void ppp_add_cb_on_sys_newuname_return(on_sys_newuname_return_t);
bool ppp_remove_cb_on_sys_newuname_return(on_sys_newuname_return_t);
typedef void (*on_sys_nice_enter_t)(CPUState* cpu, target_ulong pc, int32_t increment);
void ppp_add_cb_on_sys_nice_enter(on_sys_nice_enter_t);
bool ppp_remove_cb_on_sys_nice_enter(on_sys_nice_enter_t);
typedef void (*on_sys_nice_return_t)(CPUState* cpu, target_ulong pc, int32_t increment);
void ppp_add_cb_on_sys_nice_return(on_sys_nice_return_t);
bool ppp_remove_cb_on_sys_nice_return(on_sys_nice_return_t);
typedef void (*on_sys_open_enter_t)(CPUState* cpu, target_ulong pc, uint32_t filename, int32_t flags, uint32_t mode);
void ppp_add_cb_on_sys_open_enter(on_sys_open_enter_t);
bool ppp_remove_cb_on_sys_open_enter(on_sys_open_enter_t);
typedef void (*on_sys_open_return_t)(CPUState* cpu, target_ulong pc, uint32_t filename, int32_t flags, uint32_t mode);
void ppp_add_cb_on_sys_open_return(on_sys_open_return_t);
bool ppp_remove_cb_on_sys_open_return(on_sys_open_return_t);
typedef void (*on_sys_open_by_handle_at_enter_t)(CPUState* cpu, target_ulong pc, int32_t mountdirfd, uint32_t handle, int32_t flags);
void ppp_add_cb_on_sys_open_by_handle_at_enter(on_sys_open_by_handle_at_enter_t);
bool ppp_remove_cb_on_sys_open_by_handle_at_enter(on_sys_open_by_handle_at_enter_t);
typedef void (*on_sys_open_by_handle_at_return_t)(CPUState* cpu, target_ulong pc, int32_t mountdirfd, uint32_t handle, int32_t flags);
void ppp_add_cb_on_sys_open_by_handle_at_return(on_sys_open_by_handle_at_return_t);
bool ppp_remove_cb_on_sys_open_by_handle_at_return(on_sys_open_by_handle_at_return_t);
typedef void (*on_sys_openat_enter_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t filename, int32_t flags, uint32_t mode);
void ppp_add_cb_on_sys_openat_enter(on_sys_openat_enter_t);
bool ppp_remove_cb_on_sys_openat_enter(on_sys_openat_enter_t);
typedef void (*on_sys_openat_return_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t filename, int32_t flags, uint32_t mode);
void ppp_add_cb_on_sys_openat_return(on_sys_openat_return_t);
bool ppp_remove_cb_on_sys_openat_return(on_sys_openat_return_t);
typedef void (*on_sys_pause_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_pause_enter(on_sys_pause_enter_t);
bool ppp_remove_cb_on_sys_pause_enter(on_sys_pause_enter_t);
typedef void (*on_sys_pause_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_pause_return(on_sys_pause_return_t);
bool ppp_remove_cb_on_sys_pause_return(on_sys_pause_return_t);
typedef void (*on_sys_pciconfig_iobase_enter_t)(CPUState* cpu, target_ulong pc, int32_t which, uint32_t bus, uint32_t devfn);
void ppp_add_cb_on_sys_pciconfig_iobase_enter(on_sys_pciconfig_iobase_enter_t);
bool ppp_remove_cb_on_sys_pciconfig_iobase_enter(on_sys_pciconfig_iobase_enter_t);
typedef void (*on_sys_pciconfig_iobase_return_t)(CPUState* cpu, target_ulong pc, int32_t which, uint32_t bus, uint32_t devfn);
void ppp_add_cb_on_sys_pciconfig_iobase_return(on_sys_pciconfig_iobase_return_t);
bool ppp_remove_cb_on_sys_pciconfig_iobase_return(on_sys_pciconfig_iobase_return_t);
typedef void (*on_sys_pciconfig_read_enter_t)(CPUState* cpu, target_ulong pc, uint32_t bus, uint32_t dfn, uint32_t off, uint32_t len, uint32_t buf);
void ppp_add_cb_on_sys_pciconfig_read_enter(on_sys_pciconfig_read_enter_t);
bool ppp_remove_cb_on_sys_pciconfig_read_enter(on_sys_pciconfig_read_enter_t);
typedef void (*on_sys_pciconfig_read_return_t)(CPUState* cpu, target_ulong pc, uint32_t bus, uint32_t dfn, uint32_t off, uint32_t len, uint32_t buf);
void ppp_add_cb_on_sys_pciconfig_read_return(on_sys_pciconfig_read_return_t);
bool ppp_remove_cb_on_sys_pciconfig_read_return(on_sys_pciconfig_read_return_t);
typedef void (*on_sys_pciconfig_write_enter_t)(CPUState* cpu, target_ulong pc, uint32_t bus, uint32_t dfn, uint32_t off, uint32_t len, uint32_t buf);
void ppp_add_cb_on_sys_pciconfig_write_enter(on_sys_pciconfig_write_enter_t);
bool ppp_remove_cb_on_sys_pciconfig_write_enter(on_sys_pciconfig_write_enter_t);
typedef void (*on_sys_pciconfig_write_return_t)(CPUState* cpu, target_ulong pc, uint32_t bus, uint32_t dfn, uint32_t off, uint32_t len, uint32_t buf);
void ppp_add_cb_on_sys_pciconfig_write_return(on_sys_pciconfig_write_return_t);
bool ppp_remove_cb_on_sys_pciconfig_write_return(on_sys_pciconfig_write_return_t);
typedef void (*on_sys_perf_event_open_enter_t)(CPUState* cpu, target_ulong pc, uint32_t attr_uptr, int32_t pid, int32_t _cpu, int32_t group_fd, uint32_t flags);
void ppp_add_cb_on_sys_perf_event_open_enter(on_sys_perf_event_open_enter_t);
bool ppp_remove_cb_on_sys_perf_event_open_enter(on_sys_perf_event_open_enter_t);
typedef void (*on_sys_perf_event_open_return_t)(CPUState* cpu, target_ulong pc, uint32_t attr_uptr, int32_t pid, int32_t _cpu, int32_t group_fd, uint32_t flags);
void ppp_add_cb_on_sys_perf_event_open_return(on_sys_perf_event_open_return_t);
bool ppp_remove_cb_on_sys_perf_event_open_return(on_sys_perf_event_open_return_t);
typedef void (*on_sys_personality_enter_t)(CPUState* cpu, target_ulong pc, uint32_t personality);
void ppp_add_cb_on_sys_personality_enter(on_sys_personality_enter_t);
bool ppp_remove_cb_on_sys_personality_enter(on_sys_personality_enter_t);
typedef void (*on_sys_personality_return_t)(CPUState* cpu, target_ulong pc, uint32_t personality);
void ppp_add_cb_on_sys_personality_return(on_sys_personality_return_t);
bool ppp_remove_cb_on_sys_personality_return(on_sys_personality_return_t);
typedef void (*on_sys_pipe_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fildes);
void ppp_add_cb_on_sys_pipe_enter(on_sys_pipe_enter_t);
bool ppp_remove_cb_on_sys_pipe_enter(on_sys_pipe_enter_t);
typedef void (*on_sys_pipe_return_t)(CPUState* cpu, target_ulong pc, uint32_t fildes);
void ppp_add_cb_on_sys_pipe_return(on_sys_pipe_return_t);
bool ppp_remove_cb_on_sys_pipe_return(on_sys_pipe_return_t);
typedef void (*on_sys_pipe2_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fildes, int32_t flags);
void ppp_add_cb_on_sys_pipe2_enter(on_sys_pipe2_enter_t);
bool ppp_remove_cb_on_sys_pipe2_enter(on_sys_pipe2_enter_t);
typedef void (*on_sys_pipe2_return_t)(CPUState* cpu, target_ulong pc, uint32_t fildes, int32_t flags);
void ppp_add_cb_on_sys_pipe2_return(on_sys_pipe2_return_t);
bool ppp_remove_cb_on_sys_pipe2_return(on_sys_pipe2_return_t);
typedef void (*on_sys_pivot_root_enter_t)(CPUState* cpu, target_ulong pc, uint32_t new_root, uint32_t put_old);
void ppp_add_cb_on_sys_pivot_root_enter(on_sys_pivot_root_enter_t);
bool ppp_remove_cb_on_sys_pivot_root_enter(on_sys_pivot_root_enter_t);
typedef void (*on_sys_pivot_root_return_t)(CPUState* cpu, target_ulong pc, uint32_t new_root, uint32_t put_old);
void ppp_add_cb_on_sys_pivot_root_return(on_sys_pivot_root_return_t);
bool ppp_remove_cb_on_sys_pivot_root_return(on_sys_pivot_root_return_t);
typedef void (*on_sys_poll_enter_t)(CPUState* cpu, target_ulong pc, uint32_t ufds, uint32_t nfds, int32_t timeout);
void ppp_add_cb_on_sys_poll_enter(on_sys_poll_enter_t);
bool ppp_remove_cb_on_sys_poll_enter(on_sys_poll_enter_t);
typedef void (*on_sys_poll_return_t)(CPUState* cpu, target_ulong pc, uint32_t ufds, uint32_t nfds, int32_t timeout);
void ppp_add_cb_on_sys_poll_return(on_sys_poll_return_t);
bool ppp_remove_cb_on_sys_poll_return(on_sys_poll_return_t);
typedef void (*on_sys_ppoll_enter_t)(CPUState* cpu, target_ulong pc, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4);
void ppp_add_cb_on_sys_ppoll_enter(on_sys_ppoll_enter_t);
bool ppp_remove_cb_on_sys_ppoll_enter(on_sys_ppoll_enter_t);
typedef void (*on_sys_ppoll_return_t)(CPUState* cpu, target_ulong pc, uint32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4);
void ppp_add_cb_on_sys_ppoll_return(on_sys_ppoll_return_t);
bool ppp_remove_cb_on_sys_ppoll_return(on_sys_ppoll_return_t);
typedef void (*on_sys_prctl_enter_t)(CPUState* cpu, target_ulong pc, int32_t option, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5);
void ppp_add_cb_on_sys_prctl_enter(on_sys_prctl_enter_t);
bool ppp_remove_cb_on_sys_prctl_enter(on_sys_prctl_enter_t);
typedef void (*on_sys_prctl_return_t)(CPUState* cpu, target_ulong pc, int32_t option, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5);
void ppp_add_cb_on_sys_prctl_return(on_sys_prctl_return_t);
bool ppp_remove_cb_on_sys_prctl_return(on_sys_prctl_return_t);
typedef void (*on_sys_pread64_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t buf, uint32_t count, uint64_t pos);
void ppp_add_cb_on_sys_pread64_enter(on_sys_pread64_enter_t);
bool ppp_remove_cb_on_sys_pread64_enter(on_sys_pread64_enter_t);
typedef void (*on_sys_pread64_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t buf, uint32_t count, uint64_t pos);
void ppp_add_cb_on_sys_pread64_return(on_sys_pread64_return_t);
bool ppp_remove_cb_on_sys_pread64_return(on_sys_pread64_return_t);
typedef void (*on_sys_preadv_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t vec, uint32_t vlen, uint32_t pos_l, uint32_t pos_h);
void ppp_add_cb_on_sys_preadv_enter(on_sys_preadv_enter_t);
bool ppp_remove_cb_on_sys_preadv_enter(on_sys_preadv_enter_t);
typedef void (*on_sys_preadv_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t vec, uint32_t vlen, uint32_t pos_l, uint32_t pos_h);
void ppp_add_cb_on_sys_preadv_return(on_sys_preadv_return_t);
bool ppp_remove_cb_on_sys_preadv_return(on_sys_preadv_return_t);
typedef void (*on_sys_prlimit64_enter_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t resource, uint32_t new_rlim, uint32_t old_rlim);
void ppp_add_cb_on_sys_prlimit64_enter(on_sys_prlimit64_enter_t);
bool ppp_remove_cb_on_sys_prlimit64_enter(on_sys_prlimit64_enter_t);
typedef void (*on_sys_prlimit64_return_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t resource, uint32_t new_rlim, uint32_t old_rlim);
void ppp_add_cb_on_sys_prlimit64_return(on_sys_prlimit64_return_t);
bool ppp_remove_cb_on_sys_prlimit64_return(on_sys_prlimit64_return_t);
typedef void (*on_sys_process_vm_readv_enter_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t lvec, uint32_t liovcnt, uint32_t rvec, uint32_t riovcnt, uint32_t flags);
void ppp_add_cb_on_sys_process_vm_readv_enter(on_sys_process_vm_readv_enter_t);
bool ppp_remove_cb_on_sys_process_vm_readv_enter(on_sys_process_vm_readv_enter_t);
typedef void (*on_sys_process_vm_readv_return_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t lvec, uint32_t liovcnt, uint32_t rvec, uint32_t riovcnt, uint32_t flags);
void ppp_add_cb_on_sys_process_vm_readv_return(on_sys_process_vm_readv_return_t);
bool ppp_remove_cb_on_sys_process_vm_readv_return(on_sys_process_vm_readv_return_t);
typedef void (*on_sys_process_vm_writev_enter_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t lvec, uint32_t liovcnt, uint32_t rvec, uint32_t riovcnt, uint32_t flags);
void ppp_add_cb_on_sys_process_vm_writev_enter(on_sys_process_vm_writev_enter_t);
bool ppp_remove_cb_on_sys_process_vm_writev_enter(on_sys_process_vm_writev_enter_t);
typedef void (*on_sys_process_vm_writev_return_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t lvec, uint32_t liovcnt, uint32_t rvec, uint32_t riovcnt, uint32_t flags);
void ppp_add_cb_on_sys_process_vm_writev_return(on_sys_process_vm_writev_return_t);
bool ppp_remove_cb_on_sys_process_vm_writev_return(on_sys_process_vm_writev_return_t);
typedef void (*on_sys_pselect6_enter_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5);
void ppp_add_cb_on_sys_pselect6_enter(on_sys_pselect6_enter_t);
bool ppp_remove_cb_on_sys_pselect6_enter(on_sys_pselect6_enter_t);
typedef void (*on_sys_pselect6_return_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5);
void ppp_add_cb_on_sys_pselect6_return(on_sys_pselect6_return_t);
bool ppp_remove_cb_on_sys_pselect6_return(on_sys_pselect6_return_t);
typedef void (*on_sys_ptrace_enter_t)(CPUState* cpu, target_ulong pc, int32_t request, int32_t pid, uint32_t addr, uint32_t _data);
void ppp_add_cb_on_sys_ptrace_enter(on_sys_ptrace_enter_t);
bool ppp_remove_cb_on_sys_ptrace_enter(on_sys_ptrace_enter_t);
typedef void (*on_sys_ptrace_return_t)(CPUState* cpu, target_ulong pc, int32_t request, int32_t pid, uint32_t addr, uint32_t _data);
void ppp_add_cb_on_sys_ptrace_return(on_sys_ptrace_return_t);
bool ppp_remove_cb_on_sys_ptrace_return(on_sys_ptrace_return_t);
typedef void (*on_sys_pwrite64_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t buf, uint32_t count, uint64_t pos);
void ppp_add_cb_on_sys_pwrite64_enter(on_sys_pwrite64_enter_t);
bool ppp_remove_cb_on_sys_pwrite64_enter(on_sys_pwrite64_enter_t);
typedef void (*on_sys_pwrite64_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t buf, uint32_t count, uint64_t pos);
void ppp_add_cb_on_sys_pwrite64_return(on_sys_pwrite64_return_t);
bool ppp_remove_cb_on_sys_pwrite64_return(on_sys_pwrite64_return_t);
typedef void (*on_sys_pwritev_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t vec, uint32_t vlen, uint32_t pos_l, uint32_t pos_h);
void ppp_add_cb_on_sys_pwritev_enter(on_sys_pwritev_enter_t);
bool ppp_remove_cb_on_sys_pwritev_enter(on_sys_pwritev_enter_t);
typedef void (*on_sys_pwritev_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t vec, uint32_t vlen, uint32_t pos_l, uint32_t pos_h);
void ppp_add_cb_on_sys_pwritev_return(on_sys_pwritev_return_t);
bool ppp_remove_cb_on_sys_pwritev_return(on_sys_pwritev_return_t);
typedef void (*on_sys_quotactl_enter_t)(CPUState* cpu, target_ulong pc, uint32_t cmd, uint32_t special, uint32_t id, uint32_t addr);
void ppp_add_cb_on_sys_quotactl_enter(on_sys_quotactl_enter_t);
bool ppp_remove_cb_on_sys_quotactl_enter(on_sys_quotactl_enter_t);
typedef void (*on_sys_quotactl_return_t)(CPUState* cpu, target_ulong pc, uint32_t cmd, uint32_t special, uint32_t id, uint32_t addr);
void ppp_add_cb_on_sys_quotactl_return(on_sys_quotactl_return_t);
bool ppp_remove_cb_on_sys_quotactl_return(on_sys_quotactl_return_t);
typedef void (*on_sys_read_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t buf, uint32_t count);
void ppp_add_cb_on_sys_read_enter(on_sys_read_enter_t);
bool ppp_remove_cb_on_sys_read_enter(on_sys_read_enter_t);
typedef void (*on_sys_read_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t buf, uint32_t count);
void ppp_add_cb_on_sys_read_return(on_sys_read_return_t);
bool ppp_remove_cb_on_sys_read_return(on_sys_read_return_t);
typedef void (*on_sys_readahead_enter_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint64_t offset, uint32_t count);
void ppp_add_cb_on_sys_readahead_enter(on_sys_readahead_enter_t);
bool ppp_remove_cb_on_sys_readahead_enter(on_sys_readahead_enter_t);
typedef void (*on_sys_readahead_return_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint64_t offset, uint32_t count);
void ppp_add_cb_on_sys_readahead_return(on_sys_readahead_return_t);
bool ppp_remove_cb_on_sys_readahead_return(on_sys_readahead_return_t);
typedef void (*on_sys_readlink_enter_t)(CPUState* cpu, target_ulong pc, uint32_t path, uint32_t buf, int32_t bufsiz);
void ppp_add_cb_on_sys_readlink_enter(on_sys_readlink_enter_t);
bool ppp_remove_cb_on_sys_readlink_enter(on_sys_readlink_enter_t);
typedef void (*on_sys_readlink_return_t)(CPUState* cpu, target_ulong pc, uint32_t path, uint32_t buf, int32_t bufsiz);
void ppp_add_cb_on_sys_readlink_return(on_sys_readlink_return_t);
bool ppp_remove_cb_on_sys_readlink_return(on_sys_readlink_return_t);
typedef void (*on_sys_readlinkat_enter_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t path, uint32_t buf, int32_t bufsiz);
void ppp_add_cb_on_sys_readlinkat_enter(on_sys_readlinkat_enter_t);
bool ppp_remove_cb_on_sys_readlinkat_enter(on_sys_readlinkat_enter_t);
typedef void (*on_sys_readlinkat_return_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t path, uint32_t buf, int32_t bufsiz);
void ppp_add_cb_on_sys_readlinkat_return(on_sys_readlinkat_return_t);
bool ppp_remove_cb_on_sys_readlinkat_return(on_sys_readlinkat_return_t);
typedef void (*on_sys_readv_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t vec, uint32_t vlen);
void ppp_add_cb_on_sys_readv_enter(on_sys_readv_enter_t);
bool ppp_remove_cb_on_sys_readv_enter(on_sys_readv_enter_t);
typedef void (*on_sys_readv_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t vec, uint32_t vlen);
void ppp_add_cb_on_sys_readv_return(on_sys_readv_return_t);
bool ppp_remove_cb_on_sys_readv_return(on_sys_readv_return_t);
typedef void (*on_sys_reboot_enter_t)(CPUState* cpu, target_ulong pc, int32_t magic1, int32_t magic2, uint32_t cmd, uint32_t arg);
void ppp_add_cb_on_sys_reboot_enter(on_sys_reboot_enter_t);
bool ppp_remove_cb_on_sys_reboot_enter(on_sys_reboot_enter_t);
typedef void (*on_sys_reboot_return_t)(CPUState* cpu, target_ulong pc, int32_t magic1, int32_t magic2, uint32_t cmd, uint32_t arg);
void ppp_add_cb_on_sys_reboot_return(on_sys_reboot_return_t);
bool ppp_remove_cb_on_sys_reboot_return(on_sys_reboot_return_t);
typedef void (*on_sys_recv_enter_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);
void ppp_add_cb_on_sys_recv_enter(on_sys_recv_enter_t);
bool ppp_remove_cb_on_sys_recv_enter(on_sys_recv_enter_t);
typedef void (*on_sys_recv_return_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);
void ppp_add_cb_on_sys_recv_return(on_sys_recv_return_t);
bool ppp_remove_cb_on_sys_recv_return(on_sys_recv_return_t);
typedef void (*on_sys_recvfrom_enter_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5);
void ppp_add_cb_on_sys_recvfrom_enter(on_sys_recvfrom_enter_t);
bool ppp_remove_cb_on_sys_recvfrom_enter(on_sys_recvfrom_enter_t);
typedef void (*on_sys_recvfrom_return_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, uint32_t arg5);
void ppp_add_cb_on_sys_recvfrom_return(on_sys_recvfrom_return_t);
bool ppp_remove_cb_on_sys_recvfrom_return(on_sys_recvfrom_return_t);
typedef void (*on_sys_recvmmsg_enter_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint32_t msg, uint32_t vlen, uint32_t flags, uint32_t timeout);
void ppp_add_cb_on_sys_recvmmsg_enter(on_sys_recvmmsg_enter_t);
bool ppp_remove_cb_on_sys_recvmmsg_enter(on_sys_recvmmsg_enter_t);
typedef void (*on_sys_recvmmsg_return_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint32_t msg, uint32_t vlen, uint32_t flags, uint32_t timeout);
void ppp_add_cb_on_sys_recvmmsg_return(on_sys_recvmmsg_return_t);
bool ppp_remove_cb_on_sys_recvmmsg_return(on_sys_recvmmsg_return_t);
typedef void (*on_sys_recvmsg_enter_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint32_t msg, uint32_t flags);
void ppp_add_cb_on_sys_recvmsg_enter(on_sys_recvmsg_enter_t);
bool ppp_remove_cb_on_sys_recvmsg_enter(on_sys_recvmsg_enter_t);
typedef void (*on_sys_recvmsg_return_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint32_t msg, uint32_t flags);
void ppp_add_cb_on_sys_recvmsg_return(on_sys_recvmsg_return_t);
bool ppp_remove_cb_on_sys_recvmsg_return(on_sys_recvmsg_return_t);
typedef void (*on_sys_remap_file_pages_enter_t)(CPUState* cpu, target_ulong pc, uint32_t start, uint32_t size, uint32_t prot, uint32_t pgoff, uint32_t flags);
void ppp_add_cb_on_sys_remap_file_pages_enter(on_sys_remap_file_pages_enter_t);
bool ppp_remove_cb_on_sys_remap_file_pages_enter(on_sys_remap_file_pages_enter_t);
typedef void (*on_sys_remap_file_pages_return_t)(CPUState* cpu, target_ulong pc, uint32_t start, uint32_t size, uint32_t prot, uint32_t pgoff, uint32_t flags);
void ppp_add_cb_on_sys_remap_file_pages_return(on_sys_remap_file_pages_return_t);
bool ppp_remove_cb_on_sys_remap_file_pages_return(on_sys_remap_file_pages_return_t);
typedef void (*on_sys_removexattr_enter_t)(CPUState* cpu, target_ulong pc, uint32_t path, uint32_t name);
void ppp_add_cb_on_sys_removexattr_enter(on_sys_removexattr_enter_t);
bool ppp_remove_cb_on_sys_removexattr_enter(on_sys_removexattr_enter_t);
typedef void (*on_sys_removexattr_return_t)(CPUState* cpu, target_ulong pc, uint32_t path, uint32_t name);
void ppp_add_cb_on_sys_removexattr_return(on_sys_removexattr_return_t);
bool ppp_remove_cb_on_sys_removexattr_return(on_sys_removexattr_return_t);
typedef void (*on_sys_rename_enter_t)(CPUState* cpu, target_ulong pc, uint32_t oldname, uint32_t newname);
void ppp_add_cb_on_sys_rename_enter(on_sys_rename_enter_t);
bool ppp_remove_cb_on_sys_rename_enter(on_sys_rename_enter_t);
typedef void (*on_sys_rename_return_t)(CPUState* cpu, target_ulong pc, uint32_t oldname, uint32_t newname);
void ppp_add_cb_on_sys_rename_return(on_sys_rename_return_t);
bool ppp_remove_cb_on_sys_rename_return(on_sys_rename_return_t);
typedef void (*on_sys_renameat_enter_t)(CPUState* cpu, target_ulong pc, int32_t olddfd, uint32_t oldname, int32_t newdfd, uint32_t newname);
void ppp_add_cb_on_sys_renameat_enter(on_sys_renameat_enter_t);
bool ppp_remove_cb_on_sys_renameat_enter(on_sys_renameat_enter_t);
typedef void (*on_sys_renameat_return_t)(CPUState* cpu, target_ulong pc, int32_t olddfd, uint32_t oldname, int32_t newdfd, uint32_t newname);
void ppp_add_cb_on_sys_renameat_return(on_sys_renameat_return_t);
bool ppp_remove_cb_on_sys_renameat_return(on_sys_renameat_return_t);
typedef void (*on_sys_renameat2_enter_t)(CPUState* cpu, target_ulong pc, int32_t olddfd, uint32_t oldname, int32_t newdfd, uint32_t newname, uint32_t flags);
void ppp_add_cb_on_sys_renameat2_enter(on_sys_renameat2_enter_t);
bool ppp_remove_cb_on_sys_renameat2_enter(on_sys_renameat2_enter_t);
typedef void (*on_sys_renameat2_return_t)(CPUState* cpu, target_ulong pc, int32_t olddfd, uint32_t oldname, int32_t newdfd, uint32_t newname, uint32_t flags);
void ppp_add_cb_on_sys_renameat2_return(on_sys_renameat2_return_t);
bool ppp_remove_cb_on_sys_renameat2_return(on_sys_renameat2_return_t);
typedef void (*on_sys_request_key_enter_t)(CPUState* cpu, target_ulong pc, uint32_t _type, uint32_t _description, uint32_t _callout_info, uint32_t destringid);
void ppp_add_cb_on_sys_request_key_enter(on_sys_request_key_enter_t);
bool ppp_remove_cb_on_sys_request_key_enter(on_sys_request_key_enter_t);
typedef void (*on_sys_request_key_return_t)(CPUState* cpu, target_ulong pc, uint32_t _type, uint32_t _description, uint32_t _callout_info, uint32_t destringid);
void ppp_add_cb_on_sys_request_key_return(on_sys_request_key_return_t);
bool ppp_remove_cb_on_sys_request_key_return(on_sys_request_key_return_t);
typedef void (*on_sys_restart_syscall_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_restart_syscall_enter(on_sys_restart_syscall_enter_t);
bool ppp_remove_cb_on_sys_restart_syscall_enter(on_sys_restart_syscall_enter_t);
typedef void (*on_sys_restart_syscall_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_restart_syscall_return(on_sys_restart_syscall_return_t);
bool ppp_remove_cb_on_sys_restart_syscall_return(on_sys_restart_syscall_return_t);
typedef void (*on_sys_rmdir_enter_t)(CPUState* cpu, target_ulong pc, uint32_t pathname);
void ppp_add_cb_on_sys_rmdir_enter(on_sys_rmdir_enter_t);
bool ppp_remove_cb_on_sys_rmdir_enter(on_sys_rmdir_enter_t);
typedef void (*on_sys_rmdir_return_t)(CPUState* cpu, target_ulong pc, uint32_t pathname);
void ppp_add_cb_on_sys_rmdir_return(on_sys_rmdir_return_t);
bool ppp_remove_cb_on_sys_rmdir_return(on_sys_rmdir_return_t);
typedef void (*on_sys_rt_sigaction_enter_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);
void ppp_add_cb_on_sys_rt_sigaction_enter(on_sys_rt_sigaction_enter_t);
bool ppp_remove_cb_on_sys_rt_sigaction_enter(on_sys_rt_sigaction_enter_t);
typedef void (*on_sys_rt_sigaction_return_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);
void ppp_add_cb_on_sys_rt_sigaction_return(on_sys_rt_sigaction_return_t);
bool ppp_remove_cb_on_sys_rt_sigaction_return(on_sys_rt_sigaction_return_t);
typedef void (*on_sys_rt_sigpending_enter_t)(CPUState* cpu, target_ulong pc, uint32_t set, uint32_t sigsetsize);
void ppp_add_cb_on_sys_rt_sigpending_enter(on_sys_rt_sigpending_enter_t);
bool ppp_remove_cb_on_sys_rt_sigpending_enter(on_sys_rt_sigpending_enter_t);
typedef void (*on_sys_rt_sigpending_return_t)(CPUState* cpu, target_ulong pc, uint32_t set, uint32_t sigsetsize);
void ppp_add_cb_on_sys_rt_sigpending_return(on_sys_rt_sigpending_return_t);
bool ppp_remove_cb_on_sys_rt_sigpending_return(on_sys_rt_sigpending_return_t);
typedef void (*on_sys_rt_sigprocmask_enter_t)(CPUState* cpu, target_ulong pc, int32_t how, uint32_t set, uint32_t oset, uint32_t sigsetsize);
void ppp_add_cb_on_sys_rt_sigprocmask_enter(on_sys_rt_sigprocmask_enter_t);
bool ppp_remove_cb_on_sys_rt_sigprocmask_enter(on_sys_rt_sigprocmask_enter_t);
typedef void (*on_sys_rt_sigprocmask_return_t)(CPUState* cpu, target_ulong pc, int32_t how, uint32_t set, uint32_t oset, uint32_t sigsetsize);
void ppp_add_cb_on_sys_rt_sigprocmask_return(on_sys_rt_sigprocmask_return_t);
bool ppp_remove_cb_on_sys_rt_sigprocmask_return(on_sys_rt_sigprocmask_return_t);
typedef void (*on_sys_rt_sigqueueinfo_enter_t)(CPUState* cpu, target_ulong pc, int32_t pid, int32_t sig, uint32_t uinfo);
void ppp_add_cb_on_sys_rt_sigqueueinfo_enter(on_sys_rt_sigqueueinfo_enter_t);
bool ppp_remove_cb_on_sys_rt_sigqueueinfo_enter(on_sys_rt_sigqueueinfo_enter_t);
typedef void (*on_sys_rt_sigqueueinfo_return_t)(CPUState* cpu, target_ulong pc, int32_t pid, int32_t sig, uint32_t uinfo);
void ppp_add_cb_on_sys_rt_sigqueueinfo_return(on_sys_rt_sigqueueinfo_return_t);
bool ppp_remove_cb_on_sys_rt_sigqueueinfo_return(on_sys_rt_sigqueueinfo_return_t);
typedef void (*on_sys_rt_sigreturn_enter_t)(CPUState* cpu, target_ulong pc, uint32_t regs);
void ppp_add_cb_on_sys_rt_sigreturn_enter(on_sys_rt_sigreturn_enter_t);
bool ppp_remove_cb_on_sys_rt_sigreturn_enter(on_sys_rt_sigreturn_enter_t);
typedef void (*on_sys_rt_sigreturn_return_t)(CPUState* cpu, target_ulong pc, uint32_t regs);
void ppp_add_cb_on_sys_rt_sigreturn_return(on_sys_rt_sigreturn_return_t);
bool ppp_remove_cb_on_sys_rt_sigreturn_return(on_sys_rt_sigreturn_return_t);
typedef void (*on_sys_rt_sigsuspend_enter_t)(CPUState* cpu, target_ulong pc, uint32_t unewset, uint32_t sigsetsize);
void ppp_add_cb_on_sys_rt_sigsuspend_enter(on_sys_rt_sigsuspend_enter_t);
bool ppp_remove_cb_on_sys_rt_sigsuspend_enter(on_sys_rt_sigsuspend_enter_t);
typedef void (*on_sys_rt_sigsuspend_return_t)(CPUState* cpu, target_ulong pc, uint32_t unewset, uint32_t sigsetsize);
void ppp_add_cb_on_sys_rt_sigsuspend_return(on_sys_rt_sigsuspend_return_t);
bool ppp_remove_cb_on_sys_rt_sigsuspend_return(on_sys_rt_sigsuspend_return_t);
typedef void (*on_sys_rt_sigtimedwait_enter_t)(CPUState* cpu, target_ulong pc, uint32_t uthese, uint32_t uinfo, uint32_t uts, uint32_t sigsetsize);
void ppp_add_cb_on_sys_rt_sigtimedwait_enter(on_sys_rt_sigtimedwait_enter_t);
bool ppp_remove_cb_on_sys_rt_sigtimedwait_enter(on_sys_rt_sigtimedwait_enter_t);
typedef void (*on_sys_rt_sigtimedwait_return_t)(CPUState* cpu, target_ulong pc, uint32_t uthese, uint32_t uinfo, uint32_t uts, uint32_t sigsetsize);
void ppp_add_cb_on_sys_rt_sigtimedwait_return(on_sys_rt_sigtimedwait_return_t);
bool ppp_remove_cb_on_sys_rt_sigtimedwait_return(on_sys_rt_sigtimedwait_return_t);
typedef void (*on_sys_rt_tgsigqueueinfo_enter_t)(CPUState* cpu, target_ulong pc, int32_t tgid, int32_t pid, int32_t sig, uint32_t uinfo);
void ppp_add_cb_on_sys_rt_tgsigqueueinfo_enter(on_sys_rt_tgsigqueueinfo_enter_t);
bool ppp_remove_cb_on_sys_rt_tgsigqueueinfo_enter(on_sys_rt_tgsigqueueinfo_enter_t);
typedef void (*on_sys_rt_tgsigqueueinfo_return_t)(CPUState* cpu, target_ulong pc, int32_t tgid, int32_t pid, int32_t sig, uint32_t uinfo);
void ppp_add_cb_on_sys_rt_tgsigqueueinfo_return(on_sys_rt_tgsigqueueinfo_return_t);
bool ppp_remove_cb_on_sys_rt_tgsigqueueinfo_return(on_sys_rt_tgsigqueueinfo_return_t);
typedef void (*on_sys_sched_get_priority_max_enter_t)(CPUState* cpu, target_ulong pc, int32_t policy);
void ppp_add_cb_on_sys_sched_get_priority_max_enter(on_sys_sched_get_priority_max_enter_t);
bool ppp_remove_cb_on_sys_sched_get_priority_max_enter(on_sys_sched_get_priority_max_enter_t);
typedef void (*on_sys_sched_get_priority_max_return_t)(CPUState* cpu, target_ulong pc, int32_t policy);
void ppp_add_cb_on_sys_sched_get_priority_max_return(on_sys_sched_get_priority_max_return_t);
bool ppp_remove_cb_on_sys_sched_get_priority_max_return(on_sys_sched_get_priority_max_return_t);
typedef void (*on_sys_sched_get_priority_min_enter_t)(CPUState* cpu, target_ulong pc, int32_t policy);
void ppp_add_cb_on_sys_sched_get_priority_min_enter(on_sys_sched_get_priority_min_enter_t);
bool ppp_remove_cb_on_sys_sched_get_priority_min_enter(on_sys_sched_get_priority_min_enter_t);
typedef void (*on_sys_sched_get_priority_min_return_t)(CPUState* cpu, target_ulong pc, int32_t policy);
void ppp_add_cb_on_sys_sched_get_priority_min_return(on_sys_sched_get_priority_min_return_t);
bool ppp_remove_cb_on_sys_sched_get_priority_min_return(on_sys_sched_get_priority_min_return_t);
typedef void (*on_sys_sched_getaffinity_enter_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t len, uint32_t user_mask_ptr);
void ppp_add_cb_on_sys_sched_getaffinity_enter(on_sys_sched_getaffinity_enter_t);
bool ppp_remove_cb_on_sys_sched_getaffinity_enter(on_sys_sched_getaffinity_enter_t);
typedef void (*on_sys_sched_getaffinity_return_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t len, uint32_t user_mask_ptr);
void ppp_add_cb_on_sys_sched_getaffinity_return(on_sys_sched_getaffinity_return_t);
bool ppp_remove_cb_on_sys_sched_getaffinity_return(on_sys_sched_getaffinity_return_t);
typedef void (*on_sys_sched_getattr_enter_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t attr, uint32_t size, uint32_t flags);
void ppp_add_cb_on_sys_sched_getattr_enter(on_sys_sched_getattr_enter_t);
bool ppp_remove_cb_on_sys_sched_getattr_enter(on_sys_sched_getattr_enter_t);
typedef void (*on_sys_sched_getattr_return_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t attr, uint32_t size, uint32_t flags);
void ppp_add_cb_on_sys_sched_getattr_return(on_sys_sched_getattr_return_t);
bool ppp_remove_cb_on_sys_sched_getattr_return(on_sys_sched_getattr_return_t);
typedef void (*on_sys_sched_getparam_enter_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t param);
void ppp_add_cb_on_sys_sched_getparam_enter(on_sys_sched_getparam_enter_t);
bool ppp_remove_cb_on_sys_sched_getparam_enter(on_sys_sched_getparam_enter_t);
typedef void (*on_sys_sched_getparam_return_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t param);
void ppp_add_cb_on_sys_sched_getparam_return(on_sys_sched_getparam_return_t);
bool ppp_remove_cb_on_sys_sched_getparam_return(on_sys_sched_getparam_return_t);
typedef void (*on_sys_sched_getscheduler_enter_t)(CPUState* cpu, target_ulong pc, int32_t pid);
void ppp_add_cb_on_sys_sched_getscheduler_enter(on_sys_sched_getscheduler_enter_t);
bool ppp_remove_cb_on_sys_sched_getscheduler_enter(on_sys_sched_getscheduler_enter_t);
typedef void (*on_sys_sched_getscheduler_return_t)(CPUState* cpu, target_ulong pc, int32_t pid);
void ppp_add_cb_on_sys_sched_getscheduler_return(on_sys_sched_getscheduler_return_t);
bool ppp_remove_cb_on_sys_sched_getscheduler_return(on_sys_sched_getscheduler_return_t);
typedef void (*on_sys_sched_rr_get_interval_enter_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t interval);
void ppp_add_cb_on_sys_sched_rr_get_interval_enter(on_sys_sched_rr_get_interval_enter_t);
bool ppp_remove_cb_on_sys_sched_rr_get_interval_enter(on_sys_sched_rr_get_interval_enter_t);
typedef void (*on_sys_sched_rr_get_interval_return_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t interval);
void ppp_add_cb_on_sys_sched_rr_get_interval_return(on_sys_sched_rr_get_interval_return_t);
bool ppp_remove_cb_on_sys_sched_rr_get_interval_return(on_sys_sched_rr_get_interval_return_t);
typedef void (*on_sys_sched_setaffinity_enter_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t len, uint32_t user_mask_ptr);
void ppp_add_cb_on_sys_sched_setaffinity_enter(on_sys_sched_setaffinity_enter_t);
bool ppp_remove_cb_on_sys_sched_setaffinity_enter(on_sys_sched_setaffinity_enter_t);
typedef void (*on_sys_sched_setaffinity_return_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t len, uint32_t user_mask_ptr);
void ppp_add_cb_on_sys_sched_setaffinity_return(on_sys_sched_setaffinity_return_t);
bool ppp_remove_cb_on_sys_sched_setaffinity_return(on_sys_sched_setaffinity_return_t);
typedef void (*on_sys_sched_setattr_enter_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t attr, uint32_t flags);
void ppp_add_cb_on_sys_sched_setattr_enter(on_sys_sched_setattr_enter_t);
bool ppp_remove_cb_on_sys_sched_setattr_enter(on_sys_sched_setattr_enter_t);
typedef void (*on_sys_sched_setattr_return_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t attr, uint32_t flags);
void ppp_add_cb_on_sys_sched_setattr_return(on_sys_sched_setattr_return_t);
bool ppp_remove_cb_on_sys_sched_setattr_return(on_sys_sched_setattr_return_t);
typedef void (*on_sys_sched_setparam_enter_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t param);
void ppp_add_cb_on_sys_sched_setparam_enter(on_sys_sched_setparam_enter_t);
bool ppp_remove_cb_on_sys_sched_setparam_enter(on_sys_sched_setparam_enter_t);
typedef void (*on_sys_sched_setparam_return_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t param);
void ppp_add_cb_on_sys_sched_setparam_return(on_sys_sched_setparam_return_t);
bool ppp_remove_cb_on_sys_sched_setparam_return(on_sys_sched_setparam_return_t);
typedef void (*on_sys_sched_setscheduler_enter_t)(CPUState* cpu, target_ulong pc, int32_t pid, int32_t policy, uint32_t param);
void ppp_add_cb_on_sys_sched_setscheduler_enter(on_sys_sched_setscheduler_enter_t);
bool ppp_remove_cb_on_sys_sched_setscheduler_enter(on_sys_sched_setscheduler_enter_t);
typedef void (*on_sys_sched_setscheduler_return_t)(CPUState* cpu, target_ulong pc, int32_t pid, int32_t policy, uint32_t param);
void ppp_add_cb_on_sys_sched_setscheduler_return(on_sys_sched_setscheduler_return_t);
bool ppp_remove_cb_on_sys_sched_setscheduler_return(on_sys_sched_setscheduler_return_t);
typedef void (*on_sys_sched_yield_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_sched_yield_enter(on_sys_sched_yield_enter_t);
bool ppp_remove_cb_on_sys_sched_yield_enter(on_sys_sched_yield_enter_t);
typedef void (*on_sys_sched_yield_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_sched_yield_return(on_sys_sched_yield_return_t);
bool ppp_remove_cb_on_sys_sched_yield_return(on_sys_sched_yield_return_t);
typedef void (*on_sys_seccomp_enter_t)(CPUState* cpu, target_ulong pc, uint32_t op, uint32_t flags, uint32_t uargs);
void ppp_add_cb_on_sys_seccomp_enter(on_sys_seccomp_enter_t);
bool ppp_remove_cb_on_sys_seccomp_enter(on_sys_seccomp_enter_t);
typedef void (*on_sys_seccomp_return_t)(CPUState* cpu, target_ulong pc, uint32_t op, uint32_t flags, uint32_t uargs);
void ppp_add_cb_on_sys_seccomp_return(on_sys_seccomp_return_t);
bool ppp_remove_cb_on_sys_seccomp_return(on_sys_seccomp_return_t);
typedef void (*on_sys_select_enter_t)(CPUState* cpu, target_ulong pc, int32_t n, uint32_t inp, uint32_t outp, uint32_t exp, uint32_t tvp);
void ppp_add_cb_on_sys_select_enter(on_sys_select_enter_t);
bool ppp_remove_cb_on_sys_select_enter(on_sys_select_enter_t);
typedef void (*on_sys_select_return_t)(CPUState* cpu, target_ulong pc, int32_t n, uint32_t inp, uint32_t outp, uint32_t exp, uint32_t tvp);
void ppp_add_cb_on_sys_select_return(on_sys_select_return_t);
bool ppp_remove_cb_on_sys_select_return(on_sys_select_return_t);
typedef void (*on_sys_semctl_enter_t)(CPUState* cpu, target_ulong pc, int32_t semid, int32_t semnum, int32_t cmd, uint32_t arg);
void ppp_add_cb_on_sys_semctl_enter(on_sys_semctl_enter_t);
bool ppp_remove_cb_on_sys_semctl_enter(on_sys_semctl_enter_t);
typedef void (*on_sys_semctl_return_t)(CPUState* cpu, target_ulong pc, int32_t semid, int32_t semnum, int32_t cmd, uint32_t arg);
void ppp_add_cb_on_sys_semctl_return(on_sys_semctl_return_t);
bool ppp_remove_cb_on_sys_semctl_return(on_sys_semctl_return_t);
typedef void (*on_sys_semget_enter_t)(CPUState* cpu, target_ulong pc, uint32_t key, int32_t nsems, int32_t semflg);
void ppp_add_cb_on_sys_semget_enter(on_sys_semget_enter_t);
bool ppp_remove_cb_on_sys_semget_enter(on_sys_semget_enter_t);
typedef void (*on_sys_semget_return_t)(CPUState* cpu, target_ulong pc, uint32_t key, int32_t nsems, int32_t semflg);
void ppp_add_cb_on_sys_semget_return(on_sys_semget_return_t);
bool ppp_remove_cb_on_sys_semget_return(on_sys_semget_return_t);
typedef void (*on_sys_semop_enter_t)(CPUState* cpu, target_ulong pc, int32_t semid, uint32_t sops, uint32_t nsops);
void ppp_add_cb_on_sys_semop_enter(on_sys_semop_enter_t);
bool ppp_remove_cb_on_sys_semop_enter(on_sys_semop_enter_t);
typedef void (*on_sys_semop_return_t)(CPUState* cpu, target_ulong pc, int32_t semid, uint32_t sops, uint32_t nsops);
void ppp_add_cb_on_sys_semop_return(on_sys_semop_return_t);
bool ppp_remove_cb_on_sys_semop_return(on_sys_semop_return_t);
typedef void (*on_sys_semtimedop_enter_t)(CPUState* cpu, target_ulong pc, int32_t semid, uint32_t sops, uint32_t nsops, uint32_t timeout);
void ppp_add_cb_on_sys_semtimedop_enter(on_sys_semtimedop_enter_t);
bool ppp_remove_cb_on_sys_semtimedop_enter(on_sys_semtimedop_enter_t);
typedef void (*on_sys_semtimedop_return_t)(CPUState* cpu, target_ulong pc, int32_t semid, uint32_t sops, uint32_t nsops, uint32_t timeout);
void ppp_add_cb_on_sys_semtimedop_return(on_sys_semtimedop_return_t);
bool ppp_remove_cb_on_sys_semtimedop_return(on_sys_semtimedop_return_t);
typedef void (*on_sys_send_enter_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);
void ppp_add_cb_on_sys_send_enter(on_sys_send_enter_t);
bool ppp_remove_cb_on_sys_send_enter(on_sys_send_enter_t);
typedef void (*on_sys_send_return_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3);
void ppp_add_cb_on_sys_send_return(on_sys_send_return_t);
bool ppp_remove_cb_on_sys_send_return(on_sys_send_return_t);
typedef void (*on_sys_sendfile_enter_t)(CPUState* cpu, target_ulong pc, int32_t out_fd, int32_t in_fd, uint32_t offset, uint32_t count);
void ppp_add_cb_on_sys_sendfile_enter(on_sys_sendfile_enter_t);
bool ppp_remove_cb_on_sys_sendfile_enter(on_sys_sendfile_enter_t);
typedef void (*on_sys_sendfile_return_t)(CPUState* cpu, target_ulong pc, int32_t out_fd, int32_t in_fd, uint32_t offset, uint32_t count);
void ppp_add_cb_on_sys_sendfile_return(on_sys_sendfile_return_t);
bool ppp_remove_cb_on_sys_sendfile_return(on_sys_sendfile_return_t);
typedef void (*on_sys_sendfile64_enter_t)(CPUState* cpu, target_ulong pc, int32_t out_fd, int32_t in_fd, uint32_t offset, uint32_t count);
void ppp_add_cb_on_sys_sendfile64_enter(on_sys_sendfile64_enter_t);
bool ppp_remove_cb_on_sys_sendfile64_enter(on_sys_sendfile64_enter_t);
typedef void (*on_sys_sendfile64_return_t)(CPUState* cpu, target_ulong pc, int32_t out_fd, int32_t in_fd, uint32_t offset, uint32_t count);
void ppp_add_cb_on_sys_sendfile64_return(on_sys_sendfile64_return_t);
bool ppp_remove_cb_on_sys_sendfile64_return(on_sys_sendfile64_return_t);
typedef void (*on_sys_sendmmsg_enter_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint32_t msg, uint32_t vlen, uint32_t flags);
void ppp_add_cb_on_sys_sendmmsg_enter(on_sys_sendmmsg_enter_t);
bool ppp_remove_cb_on_sys_sendmmsg_enter(on_sys_sendmmsg_enter_t);
typedef void (*on_sys_sendmmsg_return_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint32_t msg, uint32_t vlen, uint32_t flags);
void ppp_add_cb_on_sys_sendmmsg_return(on_sys_sendmmsg_return_t);
bool ppp_remove_cb_on_sys_sendmmsg_return(on_sys_sendmmsg_return_t);
typedef void (*on_sys_sendmsg_enter_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint32_t msg, uint32_t flags);
void ppp_add_cb_on_sys_sendmsg_enter(on_sys_sendmsg_enter_t);
bool ppp_remove_cb_on_sys_sendmsg_enter(on_sys_sendmsg_enter_t);
typedef void (*on_sys_sendmsg_return_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint32_t msg, uint32_t flags);
void ppp_add_cb_on_sys_sendmsg_return(on_sys_sendmsg_return_t);
bool ppp_remove_cb_on_sys_sendmsg_return(on_sys_sendmsg_return_t);
typedef void (*on_sys_sendto_enter_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, int32_t arg5);
void ppp_add_cb_on_sys_sendto_enter(on_sys_sendto_enter_t);
bool ppp_remove_cb_on_sys_sendto_enter(on_sys_sendto_enter_t);
typedef void (*on_sys_sendto_return_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, int32_t arg5);
void ppp_add_cb_on_sys_sendto_return(on_sys_sendto_return_t);
bool ppp_remove_cb_on_sys_sendto_return(on_sys_sendto_return_t);
typedef void (*on_sys_set_mempolicy_enter_t)(CPUState* cpu, target_ulong pc, int32_t mode, uint32_t nmask, uint32_t maxnode);
void ppp_add_cb_on_sys_set_mempolicy_enter(on_sys_set_mempolicy_enter_t);
bool ppp_remove_cb_on_sys_set_mempolicy_enter(on_sys_set_mempolicy_enter_t);
typedef void (*on_sys_set_mempolicy_return_t)(CPUState* cpu, target_ulong pc, int32_t mode, uint32_t nmask, uint32_t maxnode);
void ppp_add_cb_on_sys_set_mempolicy_return(on_sys_set_mempolicy_return_t);
bool ppp_remove_cb_on_sys_set_mempolicy_return(on_sys_set_mempolicy_return_t);
typedef void (*on_sys_set_robust_list_enter_t)(CPUState* cpu, target_ulong pc, uint32_t head, uint32_t len);
void ppp_add_cb_on_sys_set_robust_list_enter(on_sys_set_robust_list_enter_t);
bool ppp_remove_cb_on_sys_set_robust_list_enter(on_sys_set_robust_list_enter_t);
typedef void (*on_sys_set_robust_list_return_t)(CPUState* cpu, target_ulong pc, uint32_t head, uint32_t len);
void ppp_add_cb_on_sys_set_robust_list_return(on_sys_set_robust_list_return_t);
bool ppp_remove_cb_on_sys_set_robust_list_return(on_sys_set_robust_list_return_t);
typedef void (*on_sys_set_tid_address_enter_t)(CPUState* cpu, target_ulong pc, uint32_t tidptr);
void ppp_add_cb_on_sys_set_tid_address_enter(on_sys_set_tid_address_enter_t);
bool ppp_remove_cb_on_sys_set_tid_address_enter(on_sys_set_tid_address_enter_t);
typedef void (*on_sys_set_tid_address_return_t)(CPUState* cpu, target_ulong pc, uint32_t tidptr);
void ppp_add_cb_on_sys_set_tid_address_return(on_sys_set_tid_address_return_t);
bool ppp_remove_cb_on_sys_set_tid_address_return(on_sys_set_tid_address_return_t);
typedef void (*on_sys_setdomainname_enter_t)(CPUState* cpu, target_ulong pc, uint32_t name, int32_t len);
void ppp_add_cb_on_sys_setdomainname_enter(on_sys_setdomainname_enter_t);
bool ppp_remove_cb_on_sys_setdomainname_enter(on_sys_setdomainname_enter_t);
typedef void (*on_sys_setdomainname_return_t)(CPUState* cpu, target_ulong pc, uint32_t name, int32_t len);
void ppp_add_cb_on_sys_setdomainname_return(on_sys_setdomainname_return_t);
bool ppp_remove_cb_on_sys_setdomainname_return(on_sys_setdomainname_return_t);
typedef void (*on_sys_setfsgid_enter_t)(CPUState* cpu, target_ulong pc, uint32_t gid);
void ppp_add_cb_on_sys_setfsgid_enter(on_sys_setfsgid_enter_t);
bool ppp_remove_cb_on_sys_setfsgid_enter(on_sys_setfsgid_enter_t);
typedef void (*on_sys_setfsgid_return_t)(CPUState* cpu, target_ulong pc, uint32_t gid);
void ppp_add_cb_on_sys_setfsgid_return(on_sys_setfsgid_return_t);
bool ppp_remove_cb_on_sys_setfsgid_return(on_sys_setfsgid_return_t);
typedef void (*on_sys_setfsgid16_enter_t)(CPUState* cpu, target_ulong pc, uint32_t gid);
void ppp_add_cb_on_sys_setfsgid16_enter(on_sys_setfsgid16_enter_t);
bool ppp_remove_cb_on_sys_setfsgid16_enter(on_sys_setfsgid16_enter_t);
typedef void (*on_sys_setfsgid16_return_t)(CPUState* cpu, target_ulong pc, uint32_t gid);
void ppp_add_cb_on_sys_setfsgid16_return(on_sys_setfsgid16_return_t);
bool ppp_remove_cb_on_sys_setfsgid16_return(on_sys_setfsgid16_return_t);
typedef void (*on_sys_setfsuid_enter_t)(CPUState* cpu, target_ulong pc, uint32_t uid);
void ppp_add_cb_on_sys_setfsuid_enter(on_sys_setfsuid_enter_t);
bool ppp_remove_cb_on_sys_setfsuid_enter(on_sys_setfsuid_enter_t);
typedef void (*on_sys_setfsuid_return_t)(CPUState* cpu, target_ulong pc, uint32_t uid);
void ppp_add_cb_on_sys_setfsuid_return(on_sys_setfsuid_return_t);
bool ppp_remove_cb_on_sys_setfsuid_return(on_sys_setfsuid_return_t);
typedef void (*on_sys_setfsuid16_enter_t)(CPUState* cpu, target_ulong pc, uint32_t uid);
void ppp_add_cb_on_sys_setfsuid16_enter(on_sys_setfsuid16_enter_t);
bool ppp_remove_cb_on_sys_setfsuid16_enter(on_sys_setfsuid16_enter_t);
typedef void (*on_sys_setfsuid16_return_t)(CPUState* cpu, target_ulong pc, uint32_t uid);
void ppp_add_cb_on_sys_setfsuid16_return(on_sys_setfsuid16_return_t);
bool ppp_remove_cb_on_sys_setfsuid16_return(on_sys_setfsuid16_return_t);
typedef void (*on_sys_setgid_enter_t)(CPUState* cpu, target_ulong pc, uint32_t gid);
void ppp_add_cb_on_sys_setgid_enter(on_sys_setgid_enter_t);
bool ppp_remove_cb_on_sys_setgid_enter(on_sys_setgid_enter_t);
typedef void (*on_sys_setgid_return_t)(CPUState* cpu, target_ulong pc, uint32_t gid);
void ppp_add_cb_on_sys_setgid_return(on_sys_setgid_return_t);
bool ppp_remove_cb_on_sys_setgid_return(on_sys_setgid_return_t);
typedef void (*on_sys_setgid16_enter_t)(CPUState* cpu, target_ulong pc, uint32_t gid);
void ppp_add_cb_on_sys_setgid16_enter(on_sys_setgid16_enter_t);
bool ppp_remove_cb_on_sys_setgid16_enter(on_sys_setgid16_enter_t);
typedef void (*on_sys_setgid16_return_t)(CPUState* cpu, target_ulong pc, uint32_t gid);
void ppp_add_cb_on_sys_setgid16_return(on_sys_setgid16_return_t);
bool ppp_remove_cb_on_sys_setgid16_return(on_sys_setgid16_return_t);
typedef void (*on_sys_setgroups_enter_t)(CPUState* cpu, target_ulong pc, int32_t gidsetsize, uint32_t grouplist);
void ppp_add_cb_on_sys_setgroups_enter(on_sys_setgroups_enter_t);
bool ppp_remove_cb_on_sys_setgroups_enter(on_sys_setgroups_enter_t);
typedef void (*on_sys_setgroups_return_t)(CPUState* cpu, target_ulong pc, int32_t gidsetsize, uint32_t grouplist);
void ppp_add_cb_on_sys_setgroups_return(on_sys_setgroups_return_t);
bool ppp_remove_cb_on_sys_setgroups_return(on_sys_setgroups_return_t);
typedef void (*on_sys_setgroups16_enter_t)(CPUState* cpu, target_ulong pc, int32_t gidsetsize, uint32_t grouplist);
void ppp_add_cb_on_sys_setgroups16_enter(on_sys_setgroups16_enter_t);
bool ppp_remove_cb_on_sys_setgroups16_enter(on_sys_setgroups16_enter_t);
typedef void (*on_sys_setgroups16_return_t)(CPUState* cpu, target_ulong pc, int32_t gidsetsize, uint32_t grouplist);
void ppp_add_cb_on_sys_setgroups16_return(on_sys_setgroups16_return_t);
bool ppp_remove_cb_on_sys_setgroups16_return(on_sys_setgroups16_return_t);
typedef void (*on_sys_sethostname_enter_t)(CPUState* cpu, target_ulong pc, uint32_t name, int32_t len);
void ppp_add_cb_on_sys_sethostname_enter(on_sys_sethostname_enter_t);
bool ppp_remove_cb_on_sys_sethostname_enter(on_sys_sethostname_enter_t);
typedef void (*on_sys_sethostname_return_t)(CPUState* cpu, target_ulong pc, uint32_t name, int32_t len);
void ppp_add_cb_on_sys_sethostname_return(on_sys_sethostname_return_t);
bool ppp_remove_cb_on_sys_sethostname_return(on_sys_sethostname_return_t);
typedef void (*on_sys_setitimer_enter_t)(CPUState* cpu, target_ulong pc, int32_t which, uint32_t value, uint32_t ovalue);
void ppp_add_cb_on_sys_setitimer_enter(on_sys_setitimer_enter_t);
bool ppp_remove_cb_on_sys_setitimer_enter(on_sys_setitimer_enter_t);
typedef void (*on_sys_setitimer_return_t)(CPUState* cpu, target_ulong pc, int32_t which, uint32_t value, uint32_t ovalue);
void ppp_add_cb_on_sys_setitimer_return(on_sys_setitimer_return_t);
bool ppp_remove_cb_on_sys_setitimer_return(on_sys_setitimer_return_t);
typedef void (*on_sys_setns_enter_t)(CPUState* cpu, target_ulong pc, int32_t fd, int32_t nstype);
void ppp_add_cb_on_sys_setns_enter(on_sys_setns_enter_t);
bool ppp_remove_cb_on_sys_setns_enter(on_sys_setns_enter_t);
typedef void (*on_sys_setns_return_t)(CPUState* cpu, target_ulong pc, int32_t fd, int32_t nstype);
void ppp_add_cb_on_sys_setns_return(on_sys_setns_return_t);
bool ppp_remove_cb_on_sys_setns_return(on_sys_setns_return_t);
typedef void (*on_sys_setpgid_enter_t)(CPUState* cpu, target_ulong pc, int32_t pid, int32_t pgid);
void ppp_add_cb_on_sys_setpgid_enter(on_sys_setpgid_enter_t);
bool ppp_remove_cb_on_sys_setpgid_enter(on_sys_setpgid_enter_t);
typedef void (*on_sys_setpgid_return_t)(CPUState* cpu, target_ulong pc, int32_t pid, int32_t pgid);
void ppp_add_cb_on_sys_setpgid_return(on_sys_setpgid_return_t);
bool ppp_remove_cb_on_sys_setpgid_return(on_sys_setpgid_return_t);
typedef void (*on_sys_setpriority_enter_t)(CPUState* cpu, target_ulong pc, int32_t which, int32_t who, int32_t niceval);
void ppp_add_cb_on_sys_setpriority_enter(on_sys_setpriority_enter_t);
bool ppp_remove_cb_on_sys_setpriority_enter(on_sys_setpriority_enter_t);
typedef void (*on_sys_setpriority_return_t)(CPUState* cpu, target_ulong pc, int32_t which, int32_t who, int32_t niceval);
void ppp_add_cb_on_sys_setpriority_return(on_sys_setpriority_return_t);
bool ppp_remove_cb_on_sys_setpriority_return(on_sys_setpriority_return_t);
typedef void (*on_sys_setregid_enter_t)(CPUState* cpu, target_ulong pc, uint32_t rgid, uint32_t egid);
void ppp_add_cb_on_sys_setregid_enter(on_sys_setregid_enter_t);
bool ppp_remove_cb_on_sys_setregid_enter(on_sys_setregid_enter_t);
typedef void (*on_sys_setregid_return_t)(CPUState* cpu, target_ulong pc, uint32_t rgid, uint32_t egid);
void ppp_add_cb_on_sys_setregid_return(on_sys_setregid_return_t);
bool ppp_remove_cb_on_sys_setregid_return(on_sys_setregid_return_t);
typedef void (*on_sys_setregid16_enter_t)(CPUState* cpu, target_ulong pc, uint32_t rgid, uint32_t egid);
void ppp_add_cb_on_sys_setregid16_enter(on_sys_setregid16_enter_t);
bool ppp_remove_cb_on_sys_setregid16_enter(on_sys_setregid16_enter_t);
typedef void (*on_sys_setregid16_return_t)(CPUState* cpu, target_ulong pc, uint32_t rgid, uint32_t egid);
void ppp_add_cb_on_sys_setregid16_return(on_sys_setregid16_return_t);
bool ppp_remove_cb_on_sys_setregid16_return(on_sys_setregid16_return_t);
typedef void (*on_sys_setresgid_enter_t)(CPUState* cpu, target_ulong pc, uint32_t rgid, uint32_t egid, uint32_t sgid);
void ppp_add_cb_on_sys_setresgid_enter(on_sys_setresgid_enter_t);
bool ppp_remove_cb_on_sys_setresgid_enter(on_sys_setresgid_enter_t);
typedef void (*on_sys_setresgid_return_t)(CPUState* cpu, target_ulong pc, uint32_t rgid, uint32_t egid, uint32_t sgid);
void ppp_add_cb_on_sys_setresgid_return(on_sys_setresgid_return_t);
bool ppp_remove_cb_on_sys_setresgid_return(on_sys_setresgid_return_t);
typedef void (*on_sys_setresgid16_enter_t)(CPUState* cpu, target_ulong pc, uint32_t rgid, uint32_t egid, uint32_t sgid);
void ppp_add_cb_on_sys_setresgid16_enter(on_sys_setresgid16_enter_t);
bool ppp_remove_cb_on_sys_setresgid16_enter(on_sys_setresgid16_enter_t);
typedef void (*on_sys_setresgid16_return_t)(CPUState* cpu, target_ulong pc, uint32_t rgid, uint32_t egid, uint32_t sgid);
void ppp_add_cb_on_sys_setresgid16_return(on_sys_setresgid16_return_t);
bool ppp_remove_cb_on_sys_setresgid16_return(on_sys_setresgid16_return_t);
typedef void (*on_sys_setresuid_enter_t)(CPUState* cpu, target_ulong pc, uint32_t ruid, uint32_t euid, uint32_t suid);
void ppp_add_cb_on_sys_setresuid_enter(on_sys_setresuid_enter_t);
bool ppp_remove_cb_on_sys_setresuid_enter(on_sys_setresuid_enter_t);
typedef void (*on_sys_setresuid_return_t)(CPUState* cpu, target_ulong pc, uint32_t ruid, uint32_t euid, uint32_t suid);
void ppp_add_cb_on_sys_setresuid_return(on_sys_setresuid_return_t);
bool ppp_remove_cb_on_sys_setresuid_return(on_sys_setresuid_return_t);
typedef void (*on_sys_setresuid16_enter_t)(CPUState* cpu, target_ulong pc, uint32_t ruid, uint32_t euid, uint32_t suid);
void ppp_add_cb_on_sys_setresuid16_enter(on_sys_setresuid16_enter_t);
bool ppp_remove_cb_on_sys_setresuid16_enter(on_sys_setresuid16_enter_t);
typedef void (*on_sys_setresuid16_return_t)(CPUState* cpu, target_ulong pc, uint32_t ruid, uint32_t euid, uint32_t suid);
void ppp_add_cb_on_sys_setresuid16_return(on_sys_setresuid16_return_t);
bool ppp_remove_cb_on_sys_setresuid16_return(on_sys_setresuid16_return_t);
typedef void (*on_sys_setreuid_enter_t)(CPUState* cpu, target_ulong pc, uint32_t ruid, uint32_t euid);
void ppp_add_cb_on_sys_setreuid_enter(on_sys_setreuid_enter_t);
bool ppp_remove_cb_on_sys_setreuid_enter(on_sys_setreuid_enter_t);
typedef void (*on_sys_setreuid_return_t)(CPUState* cpu, target_ulong pc, uint32_t ruid, uint32_t euid);
void ppp_add_cb_on_sys_setreuid_return(on_sys_setreuid_return_t);
bool ppp_remove_cb_on_sys_setreuid_return(on_sys_setreuid_return_t);
typedef void (*on_sys_setreuid16_enter_t)(CPUState* cpu, target_ulong pc, uint32_t ruid, uint32_t euid);
void ppp_add_cb_on_sys_setreuid16_enter(on_sys_setreuid16_enter_t);
bool ppp_remove_cb_on_sys_setreuid16_enter(on_sys_setreuid16_enter_t);
typedef void (*on_sys_setreuid16_return_t)(CPUState* cpu, target_ulong pc, uint32_t ruid, uint32_t euid);
void ppp_add_cb_on_sys_setreuid16_return(on_sys_setreuid16_return_t);
bool ppp_remove_cb_on_sys_setreuid16_return(on_sys_setreuid16_return_t);
typedef void (*on_sys_setrlimit_enter_t)(CPUState* cpu, target_ulong pc, uint32_t resource, uint32_t rlim);
void ppp_add_cb_on_sys_setrlimit_enter(on_sys_setrlimit_enter_t);
bool ppp_remove_cb_on_sys_setrlimit_enter(on_sys_setrlimit_enter_t);
typedef void (*on_sys_setrlimit_return_t)(CPUState* cpu, target_ulong pc, uint32_t resource, uint32_t rlim);
void ppp_add_cb_on_sys_setrlimit_return(on_sys_setrlimit_return_t);
bool ppp_remove_cb_on_sys_setrlimit_return(on_sys_setrlimit_return_t);
typedef void (*on_sys_setsid_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_setsid_enter(on_sys_setsid_enter_t);
bool ppp_remove_cb_on_sys_setsid_enter(on_sys_setsid_enter_t);
typedef void (*on_sys_setsid_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_setsid_return(on_sys_setsid_return_t);
bool ppp_remove_cb_on_sys_setsid_return(on_sys_setsid_return_t);
typedef void (*on_sys_setsockopt_enter_t)(CPUState* cpu, target_ulong pc, int32_t fd, int32_t level, int32_t optname, uint32_t optval, int32_t optlen);
void ppp_add_cb_on_sys_setsockopt_enter(on_sys_setsockopt_enter_t);
bool ppp_remove_cb_on_sys_setsockopt_enter(on_sys_setsockopt_enter_t);
typedef void (*on_sys_setsockopt_return_t)(CPUState* cpu, target_ulong pc, int32_t fd, int32_t level, int32_t optname, uint32_t optval, int32_t optlen);
void ppp_add_cb_on_sys_setsockopt_return(on_sys_setsockopt_return_t);
bool ppp_remove_cb_on_sys_setsockopt_return(on_sys_setsockopt_return_t);
typedef void (*on_sys_settimeofday_enter_t)(CPUState* cpu, target_ulong pc, uint32_t tv, uint32_t tz);
void ppp_add_cb_on_sys_settimeofday_enter(on_sys_settimeofday_enter_t);
bool ppp_remove_cb_on_sys_settimeofday_enter(on_sys_settimeofday_enter_t);
typedef void (*on_sys_settimeofday_return_t)(CPUState* cpu, target_ulong pc, uint32_t tv, uint32_t tz);
void ppp_add_cb_on_sys_settimeofday_return(on_sys_settimeofday_return_t);
bool ppp_remove_cb_on_sys_settimeofday_return(on_sys_settimeofday_return_t);
typedef void (*on_sys_setuid_enter_t)(CPUState* cpu, target_ulong pc, uint32_t uid);
void ppp_add_cb_on_sys_setuid_enter(on_sys_setuid_enter_t);
bool ppp_remove_cb_on_sys_setuid_enter(on_sys_setuid_enter_t);
typedef void (*on_sys_setuid_return_t)(CPUState* cpu, target_ulong pc, uint32_t uid);
void ppp_add_cb_on_sys_setuid_return(on_sys_setuid_return_t);
bool ppp_remove_cb_on_sys_setuid_return(on_sys_setuid_return_t);
typedef void (*on_sys_setuid16_enter_t)(CPUState* cpu, target_ulong pc, uint32_t uid);
void ppp_add_cb_on_sys_setuid16_enter(on_sys_setuid16_enter_t);
bool ppp_remove_cb_on_sys_setuid16_enter(on_sys_setuid16_enter_t);
typedef void (*on_sys_setuid16_return_t)(CPUState* cpu, target_ulong pc, uint32_t uid);
void ppp_add_cb_on_sys_setuid16_return(on_sys_setuid16_return_t);
bool ppp_remove_cb_on_sys_setuid16_return(on_sys_setuid16_return_t);
typedef void (*on_sys_setxattr_enter_t)(CPUState* cpu, target_ulong pc, uint32_t path, uint32_t name, uint32_t value, uint32_t size, int32_t flags);
void ppp_add_cb_on_sys_setxattr_enter(on_sys_setxattr_enter_t);
bool ppp_remove_cb_on_sys_setxattr_enter(on_sys_setxattr_enter_t);
typedef void (*on_sys_setxattr_return_t)(CPUState* cpu, target_ulong pc, uint32_t path, uint32_t name, uint32_t value, uint32_t size, int32_t flags);
void ppp_add_cb_on_sys_setxattr_return(on_sys_setxattr_return_t);
bool ppp_remove_cb_on_sys_setxattr_return(on_sys_setxattr_return_t);
typedef void (*on_sys_shmat_enter_t)(CPUState* cpu, target_ulong pc, int32_t shmid, uint32_t shmaddr, int32_t shmflg);
void ppp_add_cb_on_sys_shmat_enter(on_sys_shmat_enter_t);
bool ppp_remove_cb_on_sys_shmat_enter(on_sys_shmat_enter_t);
typedef void (*on_sys_shmat_return_t)(CPUState* cpu, target_ulong pc, int32_t shmid, uint32_t shmaddr, int32_t shmflg);
void ppp_add_cb_on_sys_shmat_return(on_sys_shmat_return_t);
bool ppp_remove_cb_on_sys_shmat_return(on_sys_shmat_return_t);
typedef void (*on_sys_shmctl_enter_t)(CPUState* cpu, target_ulong pc, int32_t shmid, int32_t cmd, uint32_t buf);
void ppp_add_cb_on_sys_shmctl_enter(on_sys_shmctl_enter_t);
bool ppp_remove_cb_on_sys_shmctl_enter(on_sys_shmctl_enter_t);
typedef void (*on_sys_shmctl_return_t)(CPUState* cpu, target_ulong pc, int32_t shmid, int32_t cmd, uint32_t buf);
void ppp_add_cb_on_sys_shmctl_return(on_sys_shmctl_return_t);
bool ppp_remove_cb_on_sys_shmctl_return(on_sys_shmctl_return_t);
typedef void (*on_sys_shmdt_enter_t)(CPUState* cpu, target_ulong pc, uint32_t shmaddr);
void ppp_add_cb_on_sys_shmdt_enter(on_sys_shmdt_enter_t);
bool ppp_remove_cb_on_sys_shmdt_enter(on_sys_shmdt_enter_t);
typedef void (*on_sys_shmdt_return_t)(CPUState* cpu, target_ulong pc, uint32_t shmaddr);
void ppp_add_cb_on_sys_shmdt_return(on_sys_shmdt_return_t);
bool ppp_remove_cb_on_sys_shmdt_return(on_sys_shmdt_return_t);
typedef void (*on_sys_shmget_enter_t)(CPUState* cpu, target_ulong pc, uint32_t key, uint32_t size, int32_t flag);
void ppp_add_cb_on_sys_shmget_enter(on_sys_shmget_enter_t);
bool ppp_remove_cb_on_sys_shmget_enter(on_sys_shmget_enter_t);
typedef void (*on_sys_shmget_return_t)(CPUState* cpu, target_ulong pc, uint32_t key, uint32_t size, int32_t flag);
void ppp_add_cb_on_sys_shmget_return(on_sys_shmget_return_t);
bool ppp_remove_cb_on_sys_shmget_return(on_sys_shmget_return_t);
typedef void (*on_sys_shutdown_enter_t)(CPUState* cpu, target_ulong pc, int32_t arg0, int32_t arg1);
void ppp_add_cb_on_sys_shutdown_enter(on_sys_shutdown_enter_t);
bool ppp_remove_cb_on_sys_shutdown_enter(on_sys_shutdown_enter_t);
typedef void (*on_sys_shutdown_return_t)(CPUState* cpu, target_ulong pc, int32_t arg0, int32_t arg1);
void ppp_add_cb_on_sys_shutdown_return(on_sys_shutdown_return_t);
bool ppp_remove_cb_on_sys_shutdown_return(on_sys_shutdown_return_t);
typedef void (*on_sys_sigaction_enter_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, uint32_t arg2);
void ppp_add_cb_on_sys_sigaction_enter(on_sys_sigaction_enter_t);
bool ppp_remove_cb_on_sys_sigaction_enter(on_sys_sigaction_enter_t);
typedef void (*on_sys_sigaction_return_t)(CPUState* cpu, target_ulong pc, int32_t arg0, uint32_t arg1, uint32_t arg2);
void ppp_add_cb_on_sys_sigaction_return(on_sys_sigaction_return_t);
bool ppp_remove_cb_on_sys_sigaction_return(on_sys_sigaction_return_t);
typedef void (*on_sys_sigaltstack_enter_t)(CPUState* cpu, target_ulong pc, uint32_t uss, uint32_t uoss);
void ppp_add_cb_on_sys_sigaltstack_enter(on_sys_sigaltstack_enter_t);
bool ppp_remove_cb_on_sys_sigaltstack_enter(on_sys_sigaltstack_enter_t);
typedef void (*on_sys_sigaltstack_return_t)(CPUState* cpu, target_ulong pc, uint32_t uss, uint32_t uoss);
void ppp_add_cb_on_sys_sigaltstack_return(on_sys_sigaltstack_return_t);
bool ppp_remove_cb_on_sys_sigaltstack_return(on_sys_sigaltstack_return_t);
typedef void (*on_sys_signalfd_enter_t)(CPUState* cpu, target_ulong pc, int32_t ufd, uint32_t user_mask, uint32_t sizemask);
void ppp_add_cb_on_sys_signalfd_enter(on_sys_signalfd_enter_t);
bool ppp_remove_cb_on_sys_signalfd_enter(on_sys_signalfd_enter_t);
typedef void (*on_sys_signalfd_return_t)(CPUState* cpu, target_ulong pc, int32_t ufd, uint32_t user_mask, uint32_t sizemask);
void ppp_add_cb_on_sys_signalfd_return(on_sys_signalfd_return_t);
bool ppp_remove_cb_on_sys_signalfd_return(on_sys_signalfd_return_t);
typedef void (*on_sys_signalfd4_enter_t)(CPUState* cpu, target_ulong pc, int32_t ufd, uint32_t user_mask, uint32_t sizemask, int32_t flags);
void ppp_add_cb_on_sys_signalfd4_enter(on_sys_signalfd4_enter_t);
bool ppp_remove_cb_on_sys_signalfd4_enter(on_sys_signalfd4_enter_t);
typedef void (*on_sys_signalfd4_return_t)(CPUState* cpu, target_ulong pc, int32_t ufd, uint32_t user_mask, uint32_t sizemask, int32_t flags);
void ppp_add_cb_on_sys_signalfd4_return(on_sys_signalfd4_return_t);
bool ppp_remove_cb_on_sys_signalfd4_return(on_sys_signalfd4_return_t);
typedef void (*on_sys_sigpending_enter_t)(CPUState* cpu, target_ulong pc, uint32_t set);
void ppp_add_cb_on_sys_sigpending_enter(on_sys_sigpending_enter_t);
bool ppp_remove_cb_on_sys_sigpending_enter(on_sys_sigpending_enter_t);
typedef void (*on_sys_sigpending_return_t)(CPUState* cpu, target_ulong pc, uint32_t set);
void ppp_add_cb_on_sys_sigpending_return(on_sys_sigpending_return_t);
bool ppp_remove_cb_on_sys_sigpending_return(on_sys_sigpending_return_t);
typedef void (*on_sys_sigprocmask_enter_t)(CPUState* cpu, target_ulong pc, int32_t how, uint32_t set, uint32_t oset);
void ppp_add_cb_on_sys_sigprocmask_enter(on_sys_sigprocmask_enter_t);
bool ppp_remove_cb_on_sys_sigprocmask_enter(on_sys_sigprocmask_enter_t);
typedef void (*on_sys_sigprocmask_return_t)(CPUState* cpu, target_ulong pc, int32_t how, uint32_t set, uint32_t oset);
void ppp_add_cb_on_sys_sigprocmask_return(on_sys_sigprocmask_return_t);
bool ppp_remove_cb_on_sys_sigprocmask_return(on_sys_sigprocmask_return_t);
typedef void (*on_sys_sigreturn_enter_t)(CPUState* cpu, target_ulong pc, uint32_t regs);
void ppp_add_cb_on_sys_sigreturn_enter(on_sys_sigreturn_enter_t);
bool ppp_remove_cb_on_sys_sigreturn_enter(on_sys_sigreturn_enter_t);
typedef void (*on_sys_sigreturn_return_t)(CPUState* cpu, target_ulong pc, uint32_t regs);
void ppp_add_cb_on_sys_sigreturn_return(on_sys_sigreturn_return_t);
bool ppp_remove_cb_on_sys_sigreturn_return(on_sys_sigreturn_return_t);
typedef void (*on_sys_sigsuspend_enter_t)(CPUState* cpu, target_ulong pc, int32_t unused1, int32_t unused2, uint32_t mask);
void ppp_add_cb_on_sys_sigsuspend_enter(on_sys_sigsuspend_enter_t);
bool ppp_remove_cb_on_sys_sigsuspend_enter(on_sys_sigsuspend_enter_t);
typedef void (*on_sys_sigsuspend_return_t)(CPUState* cpu, target_ulong pc, int32_t unused1, int32_t unused2, uint32_t mask);
void ppp_add_cb_on_sys_sigsuspend_return(on_sys_sigsuspend_return_t);
bool ppp_remove_cb_on_sys_sigsuspend_return(on_sys_sigsuspend_return_t);
typedef void (*on_sys_socket_enter_t)(CPUState* cpu, target_ulong pc, int32_t arg0, int32_t arg1, int32_t arg2);
void ppp_add_cb_on_sys_socket_enter(on_sys_socket_enter_t);
bool ppp_remove_cb_on_sys_socket_enter(on_sys_socket_enter_t);
typedef void (*on_sys_socket_return_t)(CPUState* cpu, target_ulong pc, int32_t arg0, int32_t arg1, int32_t arg2);
void ppp_add_cb_on_sys_socket_return(on_sys_socket_return_t);
bool ppp_remove_cb_on_sys_socket_return(on_sys_socket_return_t);
typedef void (*on_sys_socketcall_enter_t)(CPUState* cpu, target_ulong pc, int32_t call, uint32_t args);
void ppp_add_cb_on_sys_socketcall_enter(on_sys_socketcall_enter_t);
bool ppp_remove_cb_on_sys_socketcall_enter(on_sys_socketcall_enter_t);
typedef void (*on_sys_socketcall_return_t)(CPUState* cpu, target_ulong pc, int32_t call, uint32_t args);
void ppp_add_cb_on_sys_socketcall_return(on_sys_socketcall_return_t);
bool ppp_remove_cb_on_sys_socketcall_return(on_sys_socketcall_return_t);
typedef void (*on_sys_socketpair_enter_t)(CPUState* cpu, target_ulong pc, int32_t arg0, int32_t arg1, int32_t arg2, uint32_t arg3);
void ppp_add_cb_on_sys_socketpair_enter(on_sys_socketpair_enter_t);
bool ppp_remove_cb_on_sys_socketpair_enter(on_sys_socketpair_enter_t);
typedef void (*on_sys_socketpair_return_t)(CPUState* cpu, target_ulong pc, int32_t arg0, int32_t arg1, int32_t arg2, uint32_t arg3);
void ppp_add_cb_on_sys_socketpair_return(on_sys_socketpair_return_t);
bool ppp_remove_cb_on_sys_socketpair_return(on_sys_socketpair_return_t);
typedef void (*on_sys_splice_enter_t)(CPUState* cpu, target_ulong pc, int32_t fd_in, uint32_t off_in, int32_t fd_out, uint32_t off_out, uint32_t len, uint32_t flags);
void ppp_add_cb_on_sys_splice_enter(on_sys_splice_enter_t);
bool ppp_remove_cb_on_sys_splice_enter(on_sys_splice_enter_t);
typedef void (*on_sys_splice_return_t)(CPUState* cpu, target_ulong pc, int32_t fd_in, uint32_t off_in, int32_t fd_out, uint32_t off_out, uint32_t len, uint32_t flags);
void ppp_add_cb_on_sys_splice_return(on_sys_splice_return_t);
bool ppp_remove_cb_on_sys_splice_return(on_sys_splice_return_t);
typedef void (*on_sys_stat64_enter_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t statbuf);
void ppp_add_cb_on_sys_stat64_enter(on_sys_stat64_enter_t);
bool ppp_remove_cb_on_sys_stat64_enter(on_sys_stat64_enter_t);
typedef void (*on_sys_stat64_return_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t statbuf);
void ppp_add_cb_on_sys_stat64_return(on_sys_stat64_return_t);
bool ppp_remove_cb_on_sys_stat64_return(on_sys_stat64_return_t);
typedef void (*on_sys_statfs_enter_t)(CPUState* cpu, target_ulong pc, uint32_t path, uint32_t buf);
void ppp_add_cb_on_sys_statfs_enter(on_sys_statfs_enter_t);
bool ppp_remove_cb_on_sys_statfs_enter(on_sys_statfs_enter_t);
typedef void (*on_sys_statfs_return_t)(CPUState* cpu, target_ulong pc, uint32_t path, uint32_t buf);
void ppp_add_cb_on_sys_statfs_return(on_sys_statfs_return_t);
bool ppp_remove_cb_on_sys_statfs_return(on_sys_statfs_return_t);
typedef void (*on_sys_statfs64_enter_t)(CPUState* cpu, target_ulong pc, uint32_t path, uint32_t sz, uint32_t buf);
void ppp_add_cb_on_sys_statfs64_enter(on_sys_statfs64_enter_t);
bool ppp_remove_cb_on_sys_statfs64_enter(on_sys_statfs64_enter_t);
typedef void (*on_sys_statfs64_return_t)(CPUState* cpu, target_ulong pc, uint32_t path, uint32_t sz, uint32_t buf);
void ppp_add_cb_on_sys_statfs64_return(on_sys_statfs64_return_t);
bool ppp_remove_cb_on_sys_statfs64_return(on_sys_statfs64_return_t);
typedef void (*on_sys_stime_enter_t)(CPUState* cpu, target_ulong pc, uint32_t tptr);
void ppp_add_cb_on_sys_stime_enter(on_sys_stime_enter_t);
bool ppp_remove_cb_on_sys_stime_enter(on_sys_stime_enter_t);
typedef void (*on_sys_stime_return_t)(CPUState* cpu, target_ulong pc, uint32_t tptr);
void ppp_add_cb_on_sys_stime_return(on_sys_stime_return_t);
bool ppp_remove_cb_on_sys_stime_return(on_sys_stime_return_t);
typedef void (*on_sys_swapoff_enter_t)(CPUState* cpu, target_ulong pc, uint32_t specialfile);
void ppp_add_cb_on_sys_swapoff_enter(on_sys_swapoff_enter_t);
bool ppp_remove_cb_on_sys_swapoff_enter(on_sys_swapoff_enter_t);
typedef void (*on_sys_swapoff_return_t)(CPUState* cpu, target_ulong pc, uint32_t specialfile);
void ppp_add_cb_on_sys_swapoff_return(on_sys_swapoff_return_t);
bool ppp_remove_cb_on_sys_swapoff_return(on_sys_swapoff_return_t);
typedef void (*on_sys_swapon_enter_t)(CPUState* cpu, target_ulong pc, uint32_t specialfile, int32_t swap_flags);
void ppp_add_cb_on_sys_swapon_enter(on_sys_swapon_enter_t);
bool ppp_remove_cb_on_sys_swapon_enter(on_sys_swapon_enter_t);
typedef void (*on_sys_swapon_return_t)(CPUState* cpu, target_ulong pc, uint32_t specialfile, int32_t swap_flags);
void ppp_add_cb_on_sys_swapon_return(on_sys_swapon_return_t);
bool ppp_remove_cb_on_sys_swapon_return(on_sys_swapon_return_t);
typedef void (*on_sys_symlink_enter_t)(CPUState* cpu, target_ulong pc, uint32_t old, uint32_t _new);
void ppp_add_cb_on_sys_symlink_enter(on_sys_symlink_enter_t);
bool ppp_remove_cb_on_sys_symlink_enter(on_sys_symlink_enter_t);
typedef void (*on_sys_symlink_return_t)(CPUState* cpu, target_ulong pc, uint32_t old, uint32_t _new);
void ppp_add_cb_on_sys_symlink_return(on_sys_symlink_return_t);
bool ppp_remove_cb_on_sys_symlink_return(on_sys_symlink_return_t);
typedef void (*on_sys_symlinkat_enter_t)(CPUState* cpu, target_ulong pc, uint32_t oldname, int32_t newdfd, uint32_t newname);
void ppp_add_cb_on_sys_symlinkat_enter(on_sys_symlinkat_enter_t);
bool ppp_remove_cb_on_sys_symlinkat_enter(on_sys_symlinkat_enter_t);
typedef void (*on_sys_symlinkat_return_t)(CPUState* cpu, target_ulong pc, uint32_t oldname, int32_t newdfd, uint32_t newname);
void ppp_add_cb_on_sys_symlinkat_return(on_sys_symlinkat_return_t);
bool ppp_remove_cb_on_sys_symlinkat_return(on_sys_symlinkat_return_t);
typedef void (*on_sys_sync_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_sync_enter(on_sys_sync_enter_t);
bool ppp_remove_cb_on_sys_sync_enter(on_sys_sync_enter_t);
typedef void (*on_sys_sync_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_sync_return(on_sys_sync_return_t);
bool ppp_remove_cb_on_sys_sync_return(on_sys_sync_return_t);
typedef void (*on_sys_sync_file_range2_enter_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint32_t flags, uint64_t offset, uint64_t nbytes);
void ppp_add_cb_on_sys_sync_file_range2_enter(on_sys_sync_file_range2_enter_t);
bool ppp_remove_cb_on_sys_sync_file_range2_enter(on_sys_sync_file_range2_enter_t);
typedef void (*on_sys_sync_file_range2_return_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint32_t flags, uint64_t offset, uint64_t nbytes);
void ppp_add_cb_on_sys_sync_file_range2_return(on_sys_sync_file_range2_return_t);
bool ppp_remove_cb_on_sys_sync_file_range2_return(on_sys_sync_file_range2_return_t);
typedef void (*on_sys_syncfs_enter_t)(CPUState* cpu, target_ulong pc, int32_t fd);
void ppp_add_cb_on_sys_syncfs_enter(on_sys_syncfs_enter_t);
bool ppp_remove_cb_on_sys_syncfs_enter(on_sys_syncfs_enter_t);
typedef void (*on_sys_syncfs_return_t)(CPUState* cpu, target_ulong pc, int32_t fd);
void ppp_add_cb_on_sys_syncfs_return(on_sys_syncfs_return_t);
bool ppp_remove_cb_on_sys_syncfs_return(on_sys_syncfs_return_t);
typedef void (*on_sys_sysctl_enter_t)(CPUState* cpu, target_ulong pc, uint32_t args);
void ppp_add_cb_on_sys_sysctl_enter(on_sys_sysctl_enter_t);
bool ppp_remove_cb_on_sys_sysctl_enter(on_sys_sysctl_enter_t);
typedef void (*on_sys_sysctl_return_t)(CPUState* cpu, target_ulong pc, uint32_t args);
void ppp_add_cb_on_sys_sysctl_return(on_sys_sysctl_return_t);
bool ppp_remove_cb_on_sys_sysctl_return(on_sys_sysctl_return_t);
typedef void (*on_sys_sysfs_enter_t)(CPUState* cpu, target_ulong pc, int32_t option, uint32_t arg1, uint32_t arg2);
void ppp_add_cb_on_sys_sysfs_enter(on_sys_sysfs_enter_t);
bool ppp_remove_cb_on_sys_sysfs_enter(on_sys_sysfs_enter_t);
typedef void (*on_sys_sysfs_return_t)(CPUState* cpu, target_ulong pc, int32_t option, uint32_t arg1, uint32_t arg2);
void ppp_add_cb_on_sys_sysfs_return(on_sys_sysfs_return_t);
bool ppp_remove_cb_on_sys_sysfs_return(on_sys_sysfs_return_t);
typedef void (*on_sys_sysinfo_enter_t)(CPUState* cpu, target_ulong pc, uint32_t info);
void ppp_add_cb_on_sys_sysinfo_enter(on_sys_sysinfo_enter_t);
bool ppp_remove_cb_on_sys_sysinfo_enter(on_sys_sysinfo_enter_t);
typedef void (*on_sys_sysinfo_return_t)(CPUState* cpu, target_ulong pc, uint32_t info);
void ppp_add_cb_on_sys_sysinfo_return(on_sys_sysinfo_return_t);
bool ppp_remove_cb_on_sys_sysinfo_return(on_sys_sysinfo_return_t);
typedef void (*on_sys_syslog_enter_t)(CPUState* cpu, target_ulong pc, int32_t type, uint32_t buf, int32_t len);
void ppp_add_cb_on_sys_syslog_enter(on_sys_syslog_enter_t);
bool ppp_remove_cb_on_sys_syslog_enter(on_sys_syslog_enter_t);
typedef void (*on_sys_syslog_return_t)(CPUState* cpu, target_ulong pc, int32_t type, uint32_t buf, int32_t len);
void ppp_add_cb_on_sys_syslog_return(on_sys_syslog_return_t);
bool ppp_remove_cb_on_sys_syslog_return(on_sys_syslog_return_t);
typedef void (*on_sys_tee_enter_t)(CPUState* cpu, target_ulong pc, int32_t fdin, int32_t fdout, uint32_t len, uint32_t flags);
void ppp_add_cb_on_sys_tee_enter(on_sys_tee_enter_t);
bool ppp_remove_cb_on_sys_tee_enter(on_sys_tee_enter_t);
typedef void (*on_sys_tee_return_t)(CPUState* cpu, target_ulong pc, int32_t fdin, int32_t fdout, uint32_t len, uint32_t flags);
void ppp_add_cb_on_sys_tee_return(on_sys_tee_return_t);
bool ppp_remove_cb_on_sys_tee_return(on_sys_tee_return_t);
typedef void (*on_sys_tgkill_enter_t)(CPUState* cpu, target_ulong pc, int32_t tgid, int32_t pid, int32_t sig);
void ppp_add_cb_on_sys_tgkill_enter(on_sys_tgkill_enter_t);
bool ppp_remove_cb_on_sys_tgkill_enter(on_sys_tgkill_enter_t);
typedef void (*on_sys_tgkill_return_t)(CPUState* cpu, target_ulong pc, int32_t tgid, int32_t pid, int32_t sig);
void ppp_add_cb_on_sys_tgkill_return(on_sys_tgkill_return_t);
bool ppp_remove_cb_on_sys_tgkill_return(on_sys_tgkill_return_t);
typedef void (*on_sys_time_enter_t)(CPUState* cpu, target_ulong pc, uint32_t tloc);
void ppp_add_cb_on_sys_time_enter(on_sys_time_enter_t);
bool ppp_remove_cb_on_sys_time_enter(on_sys_time_enter_t);
typedef void (*on_sys_time_return_t)(CPUState* cpu, target_ulong pc, uint32_t tloc);
void ppp_add_cb_on_sys_time_return(on_sys_time_return_t);
bool ppp_remove_cb_on_sys_time_return(on_sys_time_return_t);
typedef void (*on_sys_timer_create_enter_t)(CPUState* cpu, target_ulong pc, uint32_t which_clock, uint32_t timer_event_spec, uint32_t created_timer_id);
void ppp_add_cb_on_sys_timer_create_enter(on_sys_timer_create_enter_t);
bool ppp_remove_cb_on_sys_timer_create_enter(on_sys_timer_create_enter_t);
typedef void (*on_sys_timer_create_return_t)(CPUState* cpu, target_ulong pc, uint32_t which_clock, uint32_t timer_event_spec, uint32_t created_timer_id);
void ppp_add_cb_on_sys_timer_create_return(on_sys_timer_create_return_t);
bool ppp_remove_cb_on_sys_timer_create_return(on_sys_timer_create_return_t);
typedef void (*on_sys_timer_delete_enter_t)(CPUState* cpu, target_ulong pc, uint32_t timer_id);
void ppp_add_cb_on_sys_timer_delete_enter(on_sys_timer_delete_enter_t);
bool ppp_remove_cb_on_sys_timer_delete_enter(on_sys_timer_delete_enter_t);
typedef void (*on_sys_timer_delete_return_t)(CPUState* cpu, target_ulong pc, uint32_t timer_id);
void ppp_add_cb_on_sys_timer_delete_return(on_sys_timer_delete_return_t);
bool ppp_remove_cb_on_sys_timer_delete_return(on_sys_timer_delete_return_t);
typedef void (*on_sys_timer_getoverrun_enter_t)(CPUState* cpu, target_ulong pc, uint32_t timer_id);
void ppp_add_cb_on_sys_timer_getoverrun_enter(on_sys_timer_getoverrun_enter_t);
bool ppp_remove_cb_on_sys_timer_getoverrun_enter(on_sys_timer_getoverrun_enter_t);
typedef void (*on_sys_timer_getoverrun_return_t)(CPUState* cpu, target_ulong pc, uint32_t timer_id);
void ppp_add_cb_on_sys_timer_getoverrun_return(on_sys_timer_getoverrun_return_t);
bool ppp_remove_cb_on_sys_timer_getoverrun_return(on_sys_timer_getoverrun_return_t);
typedef void (*on_sys_timer_gettime_enter_t)(CPUState* cpu, target_ulong pc, uint32_t timer_id, uint32_t setting);
void ppp_add_cb_on_sys_timer_gettime_enter(on_sys_timer_gettime_enter_t);
bool ppp_remove_cb_on_sys_timer_gettime_enter(on_sys_timer_gettime_enter_t);
typedef void (*on_sys_timer_gettime_return_t)(CPUState* cpu, target_ulong pc, uint32_t timer_id, uint32_t setting);
void ppp_add_cb_on_sys_timer_gettime_return(on_sys_timer_gettime_return_t);
bool ppp_remove_cb_on_sys_timer_gettime_return(on_sys_timer_gettime_return_t);
typedef void (*on_sys_timer_settime_enter_t)(CPUState* cpu, target_ulong pc, uint32_t timer_id, int32_t flags, uint32_t new_setting, uint32_t old_setting);
void ppp_add_cb_on_sys_timer_settime_enter(on_sys_timer_settime_enter_t);
bool ppp_remove_cb_on_sys_timer_settime_enter(on_sys_timer_settime_enter_t);
typedef void (*on_sys_timer_settime_return_t)(CPUState* cpu, target_ulong pc, uint32_t timer_id, int32_t flags, uint32_t new_setting, uint32_t old_setting);
void ppp_add_cb_on_sys_timer_settime_return(on_sys_timer_settime_return_t);
bool ppp_remove_cb_on_sys_timer_settime_return(on_sys_timer_settime_return_t);
typedef void (*on_sys_timerfd_create_enter_t)(CPUState* cpu, target_ulong pc, int32_t clockid, int32_t flags);
void ppp_add_cb_on_sys_timerfd_create_enter(on_sys_timerfd_create_enter_t);
bool ppp_remove_cb_on_sys_timerfd_create_enter(on_sys_timerfd_create_enter_t);
typedef void (*on_sys_timerfd_create_return_t)(CPUState* cpu, target_ulong pc, int32_t clockid, int32_t flags);
void ppp_add_cb_on_sys_timerfd_create_return(on_sys_timerfd_create_return_t);
bool ppp_remove_cb_on_sys_timerfd_create_return(on_sys_timerfd_create_return_t);
typedef void (*on_sys_timerfd_gettime_enter_t)(CPUState* cpu, target_ulong pc, int32_t ufd, uint32_t otmr);
void ppp_add_cb_on_sys_timerfd_gettime_enter(on_sys_timerfd_gettime_enter_t);
bool ppp_remove_cb_on_sys_timerfd_gettime_enter(on_sys_timerfd_gettime_enter_t);
typedef void (*on_sys_timerfd_gettime_return_t)(CPUState* cpu, target_ulong pc, int32_t ufd, uint32_t otmr);
void ppp_add_cb_on_sys_timerfd_gettime_return(on_sys_timerfd_gettime_return_t);
bool ppp_remove_cb_on_sys_timerfd_gettime_return(on_sys_timerfd_gettime_return_t);
typedef void (*on_sys_timerfd_settime_enter_t)(CPUState* cpu, target_ulong pc, int32_t ufd, int32_t flags, uint32_t utmr, uint32_t otmr);
void ppp_add_cb_on_sys_timerfd_settime_enter(on_sys_timerfd_settime_enter_t);
bool ppp_remove_cb_on_sys_timerfd_settime_enter(on_sys_timerfd_settime_enter_t);
typedef void (*on_sys_timerfd_settime_return_t)(CPUState* cpu, target_ulong pc, int32_t ufd, int32_t flags, uint32_t utmr, uint32_t otmr);
void ppp_add_cb_on_sys_timerfd_settime_return(on_sys_timerfd_settime_return_t);
bool ppp_remove_cb_on_sys_timerfd_settime_return(on_sys_timerfd_settime_return_t);
typedef void (*on_sys_times_enter_t)(CPUState* cpu, target_ulong pc, uint32_t tbuf);
void ppp_add_cb_on_sys_times_enter(on_sys_times_enter_t);
bool ppp_remove_cb_on_sys_times_enter(on_sys_times_enter_t);
typedef void (*on_sys_times_return_t)(CPUState* cpu, target_ulong pc, uint32_t tbuf);
void ppp_add_cb_on_sys_times_return(on_sys_times_return_t);
bool ppp_remove_cb_on_sys_times_return(on_sys_times_return_t);
typedef void (*on_sys_tkill_enter_t)(CPUState* cpu, target_ulong pc, int32_t pid, int32_t sig);
void ppp_add_cb_on_sys_tkill_enter(on_sys_tkill_enter_t);
bool ppp_remove_cb_on_sys_tkill_enter(on_sys_tkill_enter_t);
typedef void (*on_sys_tkill_return_t)(CPUState* cpu, target_ulong pc, int32_t pid, int32_t sig);
void ppp_add_cb_on_sys_tkill_return(on_sys_tkill_return_t);
bool ppp_remove_cb_on_sys_tkill_return(on_sys_tkill_return_t);
typedef void (*on_sys_truncate_enter_t)(CPUState* cpu, target_ulong pc, uint32_t path, int32_t length);
void ppp_add_cb_on_sys_truncate_enter(on_sys_truncate_enter_t);
bool ppp_remove_cb_on_sys_truncate_enter(on_sys_truncate_enter_t);
typedef void (*on_sys_truncate_return_t)(CPUState* cpu, target_ulong pc, uint32_t path, int32_t length);
void ppp_add_cb_on_sys_truncate_return(on_sys_truncate_return_t);
bool ppp_remove_cb_on_sys_truncate_return(on_sys_truncate_return_t);
typedef void (*on_sys_truncate64_enter_t)(CPUState* cpu, target_ulong pc, uint32_t path, uint64_t length);
void ppp_add_cb_on_sys_truncate64_enter(on_sys_truncate64_enter_t);
bool ppp_remove_cb_on_sys_truncate64_enter(on_sys_truncate64_enter_t);
typedef void (*on_sys_truncate64_return_t)(CPUState* cpu, target_ulong pc, uint32_t path, uint64_t length);
void ppp_add_cb_on_sys_truncate64_return(on_sys_truncate64_return_t);
bool ppp_remove_cb_on_sys_truncate64_return(on_sys_truncate64_return_t);
typedef void (*on_sys_umask_enter_t)(CPUState* cpu, target_ulong pc, int32_t mask);
void ppp_add_cb_on_sys_umask_enter(on_sys_umask_enter_t);
bool ppp_remove_cb_on_sys_umask_enter(on_sys_umask_enter_t);
typedef void (*on_sys_umask_return_t)(CPUState* cpu, target_ulong pc, int32_t mask);
void ppp_add_cb_on_sys_umask_return(on_sys_umask_return_t);
bool ppp_remove_cb_on_sys_umask_return(on_sys_umask_return_t);
typedef void (*on_sys_umount_enter_t)(CPUState* cpu, target_ulong pc, uint32_t name, int32_t flags);
void ppp_add_cb_on_sys_umount_enter(on_sys_umount_enter_t);
bool ppp_remove_cb_on_sys_umount_enter(on_sys_umount_enter_t);
typedef void (*on_sys_umount_return_t)(CPUState* cpu, target_ulong pc, uint32_t name, int32_t flags);
void ppp_add_cb_on_sys_umount_return(on_sys_umount_return_t);
bool ppp_remove_cb_on_sys_umount_return(on_sys_umount_return_t);
typedef void (*on_sys_unlink_enter_t)(CPUState* cpu, target_ulong pc, uint32_t pathname);
void ppp_add_cb_on_sys_unlink_enter(on_sys_unlink_enter_t);
bool ppp_remove_cb_on_sys_unlink_enter(on_sys_unlink_enter_t);
typedef void (*on_sys_unlink_return_t)(CPUState* cpu, target_ulong pc, uint32_t pathname);
void ppp_add_cb_on_sys_unlink_return(on_sys_unlink_return_t);
bool ppp_remove_cb_on_sys_unlink_return(on_sys_unlink_return_t);
typedef void (*on_sys_unlinkat_enter_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t pathname, int32_t flag);
void ppp_add_cb_on_sys_unlinkat_enter(on_sys_unlinkat_enter_t);
bool ppp_remove_cb_on_sys_unlinkat_enter(on_sys_unlinkat_enter_t);
typedef void (*on_sys_unlinkat_return_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t pathname, int32_t flag);
void ppp_add_cb_on_sys_unlinkat_return(on_sys_unlinkat_return_t);
bool ppp_remove_cb_on_sys_unlinkat_return(on_sys_unlinkat_return_t);
typedef void (*on_sys_unshare_enter_t)(CPUState* cpu, target_ulong pc, uint32_t unshare_flags);
void ppp_add_cb_on_sys_unshare_enter(on_sys_unshare_enter_t);
bool ppp_remove_cb_on_sys_unshare_enter(on_sys_unshare_enter_t);
typedef void (*on_sys_unshare_return_t)(CPUState* cpu, target_ulong pc, uint32_t unshare_flags);
void ppp_add_cb_on_sys_unshare_return(on_sys_unshare_return_t);
bool ppp_remove_cb_on_sys_unshare_return(on_sys_unshare_return_t);
typedef void (*on_sys_uselib_enter_t)(CPUState* cpu, target_ulong pc, uint32_t library);
void ppp_add_cb_on_sys_uselib_enter(on_sys_uselib_enter_t);
bool ppp_remove_cb_on_sys_uselib_enter(on_sys_uselib_enter_t);
typedef void (*on_sys_uselib_return_t)(CPUState* cpu, target_ulong pc, uint32_t library);
void ppp_add_cb_on_sys_uselib_return(on_sys_uselib_return_t);
bool ppp_remove_cb_on_sys_uselib_return(on_sys_uselib_return_t);
typedef void (*on_sys_userfaultfd_enter_t)(CPUState* cpu, target_ulong pc, int32_t flags);
void ppp_add_cb_on_sys_userfaultfd_enter(on_sys_userfaultfd_enter_t);
bool ppp_remove_cb_on_sys_userfaultfd_enter(on_sys_userfaultfd_enter_t);
typedef void (*on_sys_userfaultfd_return_t)(CPUState* cpu, target_ulong pc, int32_t flags);
void ppp_add_cb_on_sys_userfaultfd_return(on_sys_userfaultfd_return_t);
bool ppp_remove_cb_on_sys_userfaultfd_return(on_sys_userfaultfd_return_t);
typedef void (*on_sys_ustat_enter_t)(CPUState* cpu, target_ulong pc, uint32_t dev, uint32_t ubuf);
void ppp_add_cb_on_sys_ustat_enter(on_sys_ustat_enter_t);
bool ppp_remove_cb_on_sys_ustat_enter(on_sys_ustat_enter_t);
typedef void (*on_sys_ustat_return_t)(CPUState* cpu, target_ulong pc, uint32_t dev, uint32_t ubuf);
void ppp_add_cb_on_sys_ustat_return(on_sys_ustat_return_t);
bool ppp_remove_cb_on_sys_ustat_return(on_sys_ustat_return_t);
typedef void (*on_sys_utime_enter_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t times);
void ppp_add_cb_on_sys_utime_enter(on_sys_utime_enter_t);
bool ppp_remove_cb_on_sys_utime_enter(on_sys_utime_enter_t);
typedef void (*on_sys_utime_return_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t times);
void ppp_add_cb_on_sys_utime_return(on_sys_utime_return_t);
bool ppp_remove_cb_on_sys_utime_return(on_sys_utime_return_t);
typedef void (*on_sys_utimensat_enter_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t filename, uint32_t utimes, int32_t flags);
void ppp_add_cb_on_sys_utimensat_enter(on_sys_utimensat_enter_t);
bool ppp_remove_cb_on_sys_utimensat_enter(on_sys_utimensat_enter_t);
typedef void (*on_sys_utimensat_return_t)(CPUState* cpu, target_ulong pc, int32_t dfd, uint32_t filename, uint32_t utimes, int32_t flags);
void ppp_add_cb_on_sys_utimensat_return(on_sys_utimensat_return_t);
bool ppp_remove_cb_on_sys_utimensat_return(on_sys_utimensat_return_t);
typedef void (*on_sys_utimes_enter_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t utimes);
void ppp_add_cb_on_sys_utimes_enter(on_sys_utimes_enter_t);
bool ppp_remove_cb_on_sys_utimes_enter(on_sys_utimes_enter_t);
typedef void (*on_sys_utimes_return_t)(CPUState* cpu, target_ulong pc, uint32_t filename, uint32_t utimes);
void ppp_add_cb_on_sys_utimes_return(on_sys_utimes_return_t);
bool ppp_remove_cb_on_sys_utimes_return(on_sys_utimes_return_t);
typedef void (*on_sys_vfork_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_vfork_enter(on_sys_vfork_enter_t);
bool ppp_remove_cb_on_sys_vfork_enter(on_sys_vfork_enter_t);
typedef void (*on_sys_vfork_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_vfork_return(on_sys_vfork_return_t);
bool ppp_remove_cb_on_sys_vfork_return(on_sys_vfork_return_t);
typedef void (*on_sys_vhangup_enter_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_vhangup_enter(on_sys_vhangup_enter_t);
bool ppp_remove_cb_on_sys_vhangup_enter(on_sys_vhangup_enter_t);
typedef void (*on_sys_vhangup_return_t)(CPUState* cpu, target_ulong pc);
void ppp_add_cb_on_sys_vhangup_return(on_sys_vhangup_return_t);
bool ppp_remove_cb_on_sys_vhangup_return(on_sys_vhangup_return_t);
typedef void (*on_sys_vmsplice_enter_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint32_t iov, uint32_t nr_segs, uint32_t flags);
void ppp_add_cb_on_sys_vmsplice_enter(on_sys_vmsplice_enter_t);
bool ppp_remove_cb_on_sys_vmsplice_enter(on_sys_vmsplice_enter_t);
typedef void (*on_sys_vmsplice_return_t)(CPUState* cpu, target_ulong pc, int32_t fd, uint32_t iov, uint32_t nr_segs, uint32_t flags);
void ppp_add_cb_on_sys_vmsplice_return(on_sys_vmsplice_return_t);
bool ppp_remove_cb_on_sys_vmsplice_return(on_sys_vmsplice_return_t);
typedef void (*on_sys_wait4_enter_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t stat_addr, int32_t options, uint32_t ru);
void ppp_add_cb_on_sys_wait4_enter(on_sys_wait4_enter_t);
bool ppp_remove_cb_on_sys_wait4_enter(on_sys_wait4_enter_t);
typedef void (*on_sys_wait4_return_t)(CPUState* cpu, target_ulong pc, int32_t pid, uint32_t stat_addr, int32_t options, uint32_t ru);
void ppp_add_cb_on_sys_wait4_return(on_sys_wait4_return_t);
bool ppp_remove_cb_on_sys_wait4_return(on_sys_wait4_return_t);
typedef void (*on_sys_waitid_enter_t)(CPUState* cpu, target_ulong pc, int32_t which, int32_t pid, uint32_t infop, int32_t options, uint32_t ru);
void ppp_add_cb_on_sys_waitid_enter(on_sys_waitid_enter_t);
bool ppp_remove_cb_on_sys_waitid_enter(on_sys_waitid_enter_t);
typedef void (*on_sys_waitid_return_t)(CPUState* cpu, target_ulong pc, int32_t which, int32_t pid, uint32_t infop, int32_t options, uint32_t ru);
void ppp_add_cb_on_sys_waitid_return(on_sys_waitid_return_t);
bool ppp_remove_cb_on_sys_waitid_return(on_sys_waitid_return_t);
typedef void (*on_sys_write_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t buf, uint32_t count);
void ppp_add_cb_on_sys_write_enter(on_sys_write_enter_t);
bool ppp_remove_cb_on_sys_write_enter(on_sys_write_enter_t);
typedef void (*on_sys_write_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t buf, uint32_t count);
void ppp_add_cb_on_sys_write_return(on_sys_write_return_t);
bool ppp_remove_cb_on_sys_write_return(on_sys_write_return_t);
typedef void (*on_sys_writev_enter_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t vec, uint32_t vlen);
void ppp_add_cb_on_sys_writev_enter(on_sys_writev_enter_t);
bool ppp_remove_cb_on_sys_writev_enter(on_sys_writev_enter_t);
typedef void (*on_sys_writev_return_t)(CPUState* cpu, target_ulong pc, uint32_t fd, uint32_t vec, uint32_t vlen);
void ppp_add_cb_on_sys_writev_return(on_sys_writev_return_t);
bool ppp_remove_cb_on_sys_writev_return(on_sys_writev_return_t);


// NOTE: panda_datatypes.h is auto generated by the script create_panda_datatypes.py
// Please do not tinker with it!  Instead, fix the script that generates it

#define PYPANDA 1

typedef target_ulong target_ptr_t;
#define MAX_PANDA_PLUGINS 16
#define MAX_PANDA_PLUGIN_ARGS 32


// -----------------------------------
// Pull number 1 from (panda-aware) include/panda/callbacks/cb-defs.h

typedef enum panda_cb_type {
    PANDA_CB_BEFORE_BLOCK_TRANSLATE,    // Before translating each basic block
    PANDA_CB_AFTER_BLOCK_TRANSLATE,     // After translating each basic block
    PANDA_CB_BEFORE_BLOCK_EXEC_INVALIDATE_OPT, // Before executing each basic
                                               // block (with option to
                                               // invalidate, may trigger
                                               // retranslation)
    PANDA_CB_BEFORE_TCG_CODEGEN,    // Called right before tcg_codegen.
    PANDA_CB_BEFORE_BLOCK_EXEC,     // Before executing each basic block
    PANDA_CB_AFTER_BLOCK_EXEC,      // After executing each basic block
    PANDA_CB_INSN_TRANSLATE,        // Before an insn is translated
    PANDA_CB_INSN_EXEC,             // Before an insn is executed
    PANDA_CB_AFTER_INSN_TRANSLATE,  // After an insn is translated
    PANDA_CB_AFTER_INSN_EXEC,       // After an insn is executed

    PANDA_CB_VIRT_MEM_BEFORE_READ,  // Before read of virtual memory
    PANDA_CB_VIRT_MEM_BEFORE_WRITE, // Before write of virtual memory
    PANDA_CB_PHYS_MEM_BEFORE_READ,  // Before read of physical memory
    PANDA_CB_PHYS_MEM_BEFORE_WRITE, // Before write of physical memory

    PANDA_CB_VIRT_MEM_AFTER_READ,   // After read of virtual memory
    PANDA_CB_VIRT_MEM_AFTER_WRITE,  // After write of virtual memory
    PANDA_CB_PHYS_MEM_AFTER_READ,   // After read of physical memory
    PANDA_CB_PHYS_MEM_AFTER_WRITE,  // After write of physical memory

    PANDA_CB_MMIO_AFTER_READ,       // After each MMIO read
    PANDA_CB_MMIO_BEFORE_WRITE,     // Before each MMIO write

    PANDA_CB_HD_READ,               // Each HDD read
    PANDA_CB_HD_WRITE,              // Each HDD write
    PANDA_CB_GUEST_HYPERCALL,       // Hypercall from the guest (e.g. CPUID)
    PANDA_CB_MONITOR,               // Monitor callback
    PANDA_CB_CPU_RESTORE_STATE,     // In cpu_restore_state() (fault/exception)
    PANDA_CB_BEFORE_LOADVM,         // at start of replay, before loadvm
    PANDA_CB_ASID_CHANGED,          // When CPU asid (address space identifier) changes
    PANDA_CB_REPLAY_HD_TRANSFER,    // In replay, hd transfer
    PANDA_CB_REPLAY_NET_TRANSFER,   // In replay, transfers within network card
                                    // (currently only E1000)
    PANDA_CB_REPLAY_SERIAL_RECEIVE, // In replay, right after data is pushed
                                    // into the serial RX FIFO
    PANDA_CB_REPLAY_SERIAL_READ,    // In replay, right after a value is read from
                                    // the serial RX FIFO.
    PANDA_CB_REPLAY_SERIAL_SEND,    // In replay, right after data is popped from
                                    // the serial TX FIFO
    PANDA_CB_REPLAY_SERIAL_WRITE,   // In replay, right after data is pushed into
                                    // the serial TX FIFO.
    PANDA_CB_REPLAY_BEFORE_DMA,     // In replay, just before RAM case of
                                    // cpu_physical_mem_rw
    PANDA_CB_REPLAY_AFTER_DMA,      // In replay, just after RAM case of
                                    // cpu_physical_mem_rw
    PANDA_CB_REPLAY_HANDLE_PACKET,  // In replay, packet in / out
    PANDA_CB_AFTER_CPU_EXEC_ENTER,  // Just after cpu_exec_enter is called
    PANDA_CB_BEFORE_CPU_EXEC_EXIT,  // Just before cpu_exec_exit is called
    PANDA_CB_AFTER_MACHINE_INIT,    // Right after the machine is initialized,
                                    // before any code runs
    PANDA_CB_AFTER_LOADVM,          // Right after we restore from a snapshot
    PANDA_CB_TOP_LOOP,              // At top of loop that manages emulation.
                                    // A good place to take a snapshot.
    PANDA_CB_DURING_MACHINE_INIT,   // At the start of machine initialization

    PANDA_CB_MAIN_LOOP_WAIT,        // Called after main_loop in main_loop.c runs
    PANDA_CB_PRE_SHUTDOWN,          // Just before shutting down

    // Unassigned I/O
    PANDA_CB_UNASSIGNED_IO_READ,
    PANDA_CB_UNASSIGNED_IO_WRITE,

    PANDA_CB_BEFORE_HANDLE_EXCEPTION, // Allows you to monitor, modify,
                                      // or squash exceptions

    PANDA_CB_BEFORE_HANDLE_INTERRUPT, // ditto, for interrupts

    PANDA_CB_LAST
} panda_cb_type;

// Union of all possible callback function types
typedef union panda_cb {
    /* Callback ID: PANDA_CB_BEFORE_BLOCK_EXEC_INVALIDATE_OPT

       before_block_exec_invalidate_opt:
        Called before execution of every basic block, with the option
        to invalidate the TB.

       Arguments:
        CPUState *env:        the current CPU state
        TranslationBlock *tb: the TB we are about to execute

       Helper call location: cpu-exec.c (indirectly)

       Return value:
        true if we should invalidate the current translation block
        and retranslate, false otherwise.
    */
    bool (*before_block_exec_invalidate_opt)(CPUState *env, TranslationBlock *tb);

    /* Callback ID: PANDA_CB_BEFORE_TCG_CODEGEN

       before_tcg_codegen:
        Called before host code generation for every basic block. Enables
        inspection and modification of the TCG block after lifting from guest
        code.

       Arguments:
        CPUState *env:        the current CPU state
        TranslationBlock *tb: the TB about to be compiled

       Helper call location: translate-all.c

       Return value:
        None
    */
    void (*before_tcg_codegen)(CPUState *env, TranslationBlock *tb);

    /* Callback ID: PANDA_CB_BEFORE_BLOCK_EXEC

       before_block_exec:
        Called before execution of every basic block.

       Arguments:
        CPUState *env:        the current CPU state
        TranslationBlock *tb: the TB we are about to execute

       Helper call location: cpu-exec.c

       Return value:
        none
    */
    void (*before_block_exec)(CPUState *env, TranslationBlock *tb);

    /* Callback ID: PANDA_CB_AFTER_BLOCK_EXEC

       after_block_exec:
        Called after execution of every basic block.
        If exitCode > TB_EXIT_IDX1, then the block exited early.

       Arguments:
        CPUState *env:        the current CPU state
        TranslationBlock *tb: the TB we just executed
        uint8_t exitCode:     why the block execution exited

       Helper call location: cpu-exec.c

       Return value:
        none
    */
    void (*after_block_exec)(CPUState *env, TranslationBlock *tb, uint8_t exitCode);

    /* Callback ID: PANDA_CB_BEFORE_BLOCK_TRANSLATE

       before_block_translate:
        Called before translation of each basic block.

       Arguments:
        CPUState *env:   the current CPU state
        target_ptr_t pc: the guest PC we are about to translate

       Helper call location: cpu-exec.c

       Return value:
        none
    */
    void (*before_block_translate)(CPUState *env, target_ptr_t pc);

    /* Callback ID: PANDA_CB_AFTER_BLOCK_TRANSLATE

       after_block_translate:
        Called after the translation of each basic block.

       Arguments:
        CPUState *env:        the current CPU state
        TranslationBlock *tb: the TB we just translated

       Helper call location: cpu-exec.c

       Return value:
        none

       Notes:
        This is a good place to perform extra passes over the generated
        code (particularly by manipulating the LLVM code).
        FIXME: How would this actually work? By this point the out ASM
        has already been generated. Modify the IR and then regenerate?
    */
    void (*after_block_translate)(CPUState *env, TranslationBlock *tb);

    /* Callback ID: PANDA_CB_AFTER_CPU_EXEC_ENTER

       after_cpu_exec_enter:
        Called after cpu_exec calls cpu_exec_enter function.

       Arguments:
        CPUState *env: the current CPU state

       Helper call location: cpu-exec.c

       Return value:
        none
    */
    void (*after_cpu_exec_enter)(CPUState *env);

    /* Callback ID: PANDA_CB_BEFORE_CPU_EXEC_EXIT

       before_cpu_exec_exit:
        Called before cpu_exec calls cpu_exec_exit function.

       Arguments:
        CPUState *env: the current CPU state
        bool ranBlock: true if ran a block since previous cpu_exec_enter

       Helper call location: cpu-exec.c

       Return value:
        none
    */
    void (*before_cpu_exec_exit)(CPUState *env, bool ranBlock);

    /* Callback ID: PANDA_CB_INSN_TRANSLATE

       insn_translate:
        Called before the translation of each instruction.

       Arguments:
        CPUState *env:   the current CPU state
        target_ptr_t pc: the guest PC we are about to translate

       Helper call location: panda/target/ARCH/translate.c

       Return value:
        true if PANDA should insert instrumentation into the generated code,
        false otherwise

       Notes:
        This allows a plugin writer to instrument only a small number of
        instructions, avoiding the performance hit of instrumenting everything.
        If you do want to instrument every single instruction, just return
        true. See the documentation for PANDA_CB_INSN_EXEC for more detail.
    */
    bool (*insn_translate)(CPUState *env, target_ptr_t pc);

    /* Callback ID: PANDA_CB_INSN_EXEC

       insn_exec:
        Called before execution of any instruction identified by the
        PANDA_CB_INSN_TRANSLATE callback.

       Arguments:
        CPUState *env:   the current CPU state
        target_ptr_t pc: the guest PC we are about to execute

       Helper call location: TBA

       Return value:
        unused

       Notes:
        This instrumentation is implemented by generating a call to a
        helper function just before the instruction itself is generated.
        This is fairly expensive, which is why it's only enabled via
        the PANDA_CB_INSN_TRANSLATE callback.
    */
    int (*insn_exec)(CPUState *env, target_ptr_t pc);

    /* Callback ID: PANDA_CB_AFTER_INSN_TRANSLATE

       after_insn_translate:
        Called after the translation of each instruction.

       Arguments:
        CPUState *env:   the current CPU state
        target_ptr_t pc: the next guest PC we've translated

       Helper call location: panda/target/ARCH/translate.c

       Return value:
        true if PANDA should insert instrumentation into the generated code,
        false otherwise

       Notes:
        See `insn_translate`, callbacks are registered via PANDA_CB_AFTER_INSN_EXEC
    */
    bool (*after_insn_translate)(CPUState *env, target_ptr_t pc);

    /* Callback ID: PANDA_CB_AFTER_INSN_EXEC

       after_insn_exec:
        Called after execution of an instruction identified by the
        PANDA_CB_AFTER_INSN_TRANSLATE callback

       Arguments:
        CPUState *env:   the current CPU state
        target_ptr_t pc: the next guest PC already executed

       Helper call location: TBA

       Return value:
        unused

       Notes:
        See `insn_exec`. Enabled via the PANDA_CB_AFTER_INSN_TRANSLATE callback.
    */
    int (*after_insn_exec)(CPUState *env, target_ptr_t pc);

    /* Callback ID: PANDA_CB_VIRT_MEM_BEFORE_READ

       virt_mem_before_read:
        Called before memory is read.

       Arguments:
        CPUState *env:     the current CPU state
        target_ptr_t pc:   the guest PC doing the read
        target_ptr_t addr: the (virtual) address being read
        size_t size:       the size of the read

       Helper call location: TBA

       Return value:
        none
    */
    void (*virt_mem_before_read)(CPUState *env, target_ptr_t pc, target_ptr_t addr, size_t size);

    /* Callback ID: PANDA_CB_VIRT_MEM_BEFORE_WRITE

       virt_mem_before_write:
        Called before memory is written.

       Arguments:
        CPUState *env:     the current CPU state
        target_ptr_t pc:   the guest PC doing the write
        target_ptr_t addr: the (virtual) address being written
        size_t size:       the size of the write
        uint8_t *buf:      pointer to the data that is to be written

       Helper call location: TBA

       Return value:
        none
    */
    void (*virt_mem_before_write)(CPUState *env, target_ptr_t pc, target_ptr_t addr, size_t size, uint8_t *buf);

    /* Callback ID: PANDA_CB_PHYS_MEM_BEFORE_READ

       phys_mem_before_read:
        Called after memory is read.

       Arguments:
        CPUState *env:     the current CPU state
        target_ptr_t pc:   the guest PC doing the read
        target_ptr_t addr: the (physical) address being read
        size_t size:       the size of the read

       Helper call location: TBA

       Return value:
        none
    */
    void (*phys_mem_before_read)(CPUState *env, target_ptr_t pc, target_ptr_t addr, size_t size);

    /* Callback ID: PANDA_CB_PHYS_MEM_BEFORE_WRITE

       phys_mem_write:
        Called before memory is written.

       Arguments:
        CPUState *env:     the current CPU state
        target_ptr_t pc:   the guest PC doing the write
        target_ptr_t addr: the (physical) address being written
        size_t size:       the size of the write
        uint8_t *buf:      pointer to the data that is to be written

       Helper call location: TBA

       Return value:
        none
    */
    void (*phys_mem_before_write)(CPUState *env, target_ptr_t pc, target_ptr_t addr, size_t size, uint8_t *buf);

    /* Callback ID: PANDA_CB_VIRT_MEM_AFTER_READ

       virt_mem_after_read:
        Called after memory is read.

       Arguments:
        CPUState *env:     the current CPU state
        target_ptr_t pc:   the guest PC doing the read
        target_ptr_t addr: the (virtual) address being read
        size_t size:       the size of the read
        uint8_t *buf:      pointer to data just read

       Helper call location: TBA

       Return value:
        none
    */
    void (*virt_mem_after_read)(CPUState *env, target_ptr_t pc, target_ptr_t addr, size_t size, uint8_t *buf);

    /* Callback ID: PANDA_CB_VIRT_MEM_AFTER_WRITE

       virt_mem_after_write:
        Called after memory is written.

       Arguments:
        CPUState *env:     the current CPU state
        target_ptr_t pc:   the guest PC doing the write
        target_ptr_t addr: the (virtual) address being written
        size_t size:       the size of the write
        uint8_t *buf:      pointer to the data that was written

       Helper call location: TBA

       Return value:
        none
    */
    void (*virt_mem_after_write)(CPUState *env, target_ptr_t pc, target_ptr_t addr, size_t size, uint8_t *buf);

    /* Callback ID: PANDA_CB_PHYS_MEM_AFTER_READ

       phys_mem_after_read:
        Called after memory is read.

       Arguments:
        CPUState *env:     the current CPU state
        target_ptr_t pc:   the guest PC doing the read
        target_ptr_t addr: the (physical) address being read
        size_t size:       the size of the read
        uint8_t *buf:      pointer to data just read

       Helper call location: TBA

       Return value:
        none
    */
    void (*phys_mem_after_read)(CPUState *env, target_ptr_t pc, target_ptr_t addr, size_t size, uint8_t *buf);

    /* Callback ID: PANDA_CB_PHYS_MEM_AFTER_WRITE

       phys_mem_write:
        Called after memory is written.

       Arguments:
        CPUState *env:     the current CPU state
        target_ptr_t pc:   the guest PC doing the write
        target_ptr_t addr: the (physical) address being written
        size_t size:       the size of the write
        uint8_t *buf:      pointer to the data that was written

       Helper call location: TBA

       Return value:
        none
    */
    void (*phys_mem_after_write)(CPUState *env, target_ptr_t pc, target_ptr_t addr, size_t size, uint8_t *buf);

    /* Callback ID: PANDA_CB_MMIO_AFTER_READ

       mmio_after_read:
        Called after MMIO memory is read.

       Arguments:
        CPUState *env:          the current CPU state
        target_ptr_t physaddr:  the physical address being read from
        target_ptr_t vaddr:     the virtual address being read from
        size_t size:            the size of the read
        uin64_t *val:           the value being read

       Helper call location: cputlb.c

       Return value:
        none
    */
    void (*mmio_after_read)(CPUState *env, target_ptr_t physaddr, target_ptr_t vaddr, size_t size, uint64_t *val);

    /* Callback ID: PANDA_CB_MMIO_BEFORE_WRITE

       mmio_before_write:
        Called after MMIO memory is written to.

       Arguments:
        CPUState *env:          the current CPU state
        target_ptr_t physaddr:  the physical address being written to
        target_ptr_t vaddr:     the virtual address being written to
        size_t size:            the size of the write
        uin64_t *val:           the value being written

       Helper call location: cputlb.c

       Return value:
        none
    */
    void (*mmio_before_write)(CPUState *env, target_ptr_t physaddr, target_ptr_t vaddr, size_t size, uint64_t *val);

    /* Callback ID: PANDA_CB_HD_READ
       hd_read : called when there is a hard drive read

       Note: this was added to panda_cb_type enum but no callback prototype inserted
       Here is a stub.  I'm not sure what the args should be.
       Arguments
       CPUState *env
    */

    void (*hd_read)(CPUState *env);

    /* Callback ID: PANDA_CB_HD_WRITE
       hd_write : called when there is a hard drive write

       Note: this was added to panda_cb_type enum but no callback prototype inserted
       Here is a stub.  I'm not sure what the args should be.
       Arguments
       CPUState *env
    */

    void (*hd_write)(CPUState *env);

    /* Callback ID: PANDA_CB_GUEST_HYPERCALL

       guest_hypercall:
        Called when a program inside the guest makes a hypercall to pass
        information from inside the guest to a plugin

       Arguments:
        CPUState *env: the current CPU state

       Helper call location: target/i386/misc_helper.c

       Return value:
        true if the callback has processed the hypercall, false if the
        hypercall has been ignored.

       Notes:
        On x86, this is called whenever CPUID is executed. On ARM, the
        MCR instructions is used. Plugins should check for magic values
        in the registers to determine if it really is a guest hypercall.
        Parameters can be passed in other registers. If the plugin
        processes the hypercall, it should return true so the execution
        of the normal instruction is skipped.
    */
    bool (*guest_hypercall)(CPUState *env);

    /* Callback ID: PANDA_CB_MONITOR

       monitor:
        Called when someone uses the plugin_cmd monitor command.

       Arguments:
        Monitor *mon:    a pointer to the Monitor
        const char *cmd: the command string passed to plugin_cmd

       Helper call location: TBA

       Return value:
        unused

       Notes:
        The command is passed as a single string. No parsing is performed
        on the string before it is passed to the plugin, so each plugin
        must parse the string as it deems appropriate (e.g. by using strtok
        and getopt) to do more complex option processing.
        It is recommended that each plugin implementing this callback respond
        to the "help" message by listing the commands supported by the plugin.
        Note that every loaded plugin will have the opportunity to respond to
        each plugin_cmd; thus it is a good idea to ensure that your plugin's
        monitor commands are uniquely named, e.g. by using the plugin name
        as a prefix ("sample_do_foo" rather than "do_foo").
    */
    int (*monitor)(Monitor *mon, const char *cmd);


    /* Callback ID: PANDA_CB_CPU_RESTORE_STATE

       cpu_restore_state:
        Called inside of cpu_restore_state(), when there is a CPU
        fault/exception.

       Arguments:
        CPUState *env:        the current CPU state
        TranslationBlock *tb: the current translation block

       Helper call location: translate-all.c

       Return value:
        none
    */
    void (*cpu_restore_state)(CPUState *env, TranslationBlock *tb);

    /* Callback ID: PANDA_CB_BEFORE_LOADVM

       before_loadvm:
        Called at start of replay, before loadvm is called. This allows
        us to hook devices' loadvm handlers. Remember to unregister the
        existing handler for the device first. See the example in the
        sample plugin.

       Arguments:
        none

       Helper call location: TBA

       Return value:
        unused
    */
    int (*before_loadvm)(void);

    /* Callback ID: PANDA_CB_ASID_CHANGED

       asid_changed:
        Called when asid changes.

       Arguments:
        CPUState *env:       pointer to CPUState
        target_ptr_t oldval: old asid value
        target_ptr_t newval: new asid value

       Helper call location: target/i386/helper.c, target/arm/helper.c

       Return value:
        true if the asid should be prevented from being changed
        false otherwise

       Notes:
        The callback is only invoked implemented for x86 and ARM.
        This should break plugins which rely on it to detect context
        switches in any other architecture.
    */
    bool (*asid_changed)(CPUState *env, target_ptr_t oldval, target_ptr_t newval);

    /* Callback ID:     PANDA_CB_REPLAY_HD_TRANSFER,

       replay_hd_transfer:
        In replay only. Some kind of data transfer involving hard drive.

       Arguments:
        CPUState *env:          pointer to CPUState
        uint32_t type:          type of transfer  (Hd_transfer_type)
        target_ptr_t src_addr:  address for src
        target_ptr_t dest_addr: address for dest
        size_t num_bytes:       size of transfer in bytes

       Helper call location: panda/src/rr/rr_log.c

       Return value:
        none

       Helper call location: TBA

       Notes:
        Unlike most callbacks, this is neither a "before" or "after" callback.
        In replay the transfer doesn't really happen. We are *at* the point at
        which it happened, really.
    */
    void (*replay_hd_transfer)(CPUState *env, uint32_t type, target_ptr_t src_addr, target_ptr_t dest_addr, size_t num_bytes);

    /* Callback ID:     PANDA_CB_REPLAY_BEFORE_DMA,

       replay_before_dma:
        In replay only. We are about to dma between qemu buffer and
        guest memory.

       Arguments:
        CPUState *env:      pointer to CPUState
        const uint8_t *buf: pointer to the QEMU's device buffer ussed in the transfer
        hwaddr addr:        address written to in the guest RAM
        size_t size:        size of transfer
        bool is_write:      indicates whether the DMA transfer writes to memory

       Helper call location: exec.c

       Return value:
        none
    */
    void (*replay_before_dma)(CPUState *env, const uint8_t *buf, hwaddr addr, size_t size, bool is_write);

    /* Callback ID:     PANDA_CB_REPLAY_AFTER_DMA,

       In replay only, we are about to dma between qemu buffer and guest memory

       Arguments:
        CPUState *env:      pointer to CPUState
        const uint8_t *buf: pointer to the QEMU's device buffer ussed in the transfer
        hwaddr addr:        address written to in the guest RAM
        size_t size:        size of transfer
        bool is_write:      indicates whether the DMA transfer writes to memory

       Helper call location: exec.c

       Return value:
        none
    */
    void (*replay_after_dma)(CPUState *env, const uint8_t *buf, hwaddr addr, size_t size, bool is_write);

    /* Callback ID:   PANDA_CB_REPLAY_HANDLE_PACKET,

       In replay only, we have a packet (incoming / outgoing) in hand.

       Arguments:
        CPUState *env:         pointer to CPUState
        uint8_t *buf:          buffer containing packet data
        size_t size:           num bytes in buffer
        uint8_t direction:     either `PANDA_NET_RX` or `PANDA_NET_TX`
        uint64_t buf_addr_rec: the address of `buf` at the time of recording

       Helper call location: panda/src/rr/rr_log.c

       Return value:
        none

       Notes:
        `buf_addr_rec` corresponds to the address of the device buffer of
        the emulated NIC. I.e. it is the address of a VM-host-side buffer.
        It is useful for implementing network tainting in an OS-agnostic
        way, in conjunction with taint2_label_io().

        FIXME: The `buf_addr_rec` maps to the `uint8_t *buf` field of the
        internal `RR_handle_packet_args` struct. The field is dumped/loaded
        to/from the trace without proper serialization/deserialization. As
        a result, a 64bit build of PANDA will not be able to process traces
        produced by a 32bit of PANDA, and vice-versa.
        There are more internal structs that suffer from the same issue.
        This is an oversight that will eventually be fixed. But as the
        real impact is minimal (virtually nobody uses 32bit builds),
        the fix has a very low priority in the bugfix list.
    */
    void (*replay_handle_packet)(CPUState *env, uint8_t *buf, size_t size, uint8_t direction, uint64_t buf_addr_rec);

    /* Callback ID:     PANDA_CB_REPLAY_NET_TRANSFER,

       replay_net_transfer:
       In replay only, some kind of data transfer within the network card
       (currently, only the E1000 is supported).

       Arguments:
        CPUState *env:          pointer to CPUState
        uint32_t type:          type of transfer  (Net_transfer_type)
        uint64_t src_addr:      address for src
        uint64_t dest_addr:     address for dest
        size_t num_bytes:       size of transfer in bytes

       Helper call location: panda/src/rr/rr_log.c

       Return value:
        none

       Notes:
        Unlike most callbacks, this is neither a "before" or "after" callback.
        In replay the transfer doesn't really happen. We are *at* the point at
        which it happened, really.
        Also, the src_addr and dest_addr may be for either host (ie. a location
        in the emulated network device) or guest, depending upon the type.
    */
    void (*replay_net_transfer)(CPUState *env, uint32_t type, uint64_t src_addr, uint64_t dest_addr, size_t num_bytes);

    /* Callback ID:     PANDA_CB_REPLAY_SERIAL_RECEIVE,

        replay_serial_receive:
        In replay only, called when a byte is received on the serial port.

       Arguments:
        CPUState *env:          pointer to CPUState
        target_ptr_t fifo_addr: address of the data within the fifo
        uint8_t value:          value received

       Helper call location: panda/src/rr/rr_log.c

       Return value:
        unused
    */
    void (*replay_serial_receive)(CPUState *env, target_ptr_t fifo_addr, uint8_t value);

    /* Callback ID:     PANDA_CB_REPLAY_SERIAL_READ,

       replay_serial_read:
        In replay only, called when a byte read from the serial RX FIFO

       Arguments:
        CPUState *env:          pointer to CPUState
        target_ptr_t fifo_addr: address of the data within the fifo (source)
        uint32_t port_addr:     address of the IO port where data is being read (destination)
        uint8_t value:          value read

       Helper call location: panda/src/rr/rr_log.c

       Return value:
        none
    */
    void (*replay_serial_read)(CPUState *env, target_ptr_t fifo_addr, uint32_t port_addr, uint8_t value);

    /* Callback ID:     PANDA_CB_REPLAY_SERIAL_SEND,

       replay_serial_send:
        In replay only, called when a byte is sent on the serial port.

       Arguments:
        CPUState *env:          pointer to CPUState
        target_ptr_t fifo_addr: address of the data within the fifo
        uint8_t value:          value received

       Helper call location: panda/src/rr/rr_log.c

       Return value:
        none
    */
    void (*replay_serial_send)(CPUState *env, target_ptr_t fifo_addr, uint8_t value);

    /* Callback ID:     PANDA_CB_REPLAY_SERIAL_WRITE,

       In replay only, called when a byte written to the serial TX FIFO

       Arguments:
        CPUState *env:          pointer to CPUState
        target_ptr_t fifo_addr: address of the data within the fifo (source)
        uint32_t port_addr:     address of the IO port where data is being read (destination)
        uint8_t value:          value read

       Helper call location: panda/src/rr/rr_log.c

       Return value:
        none
    */
    void (*replay_serial_write)(CPUState *env, target_ptr_t fifo_addr, uint32_t port_addr, uint8_t value);

    /* Callback ID:     PANDA_CB_AFTER_MACHINE_INIT

       after_machine_init:
        Called right after the machine has been initialized, but before
        any guest code runs.

       Arguments:
        void *cpu_env: pointer to CPUState

       Helper call location: TBA

       Return value:
        none

       Notes:
        This callback allows initialization of components that need
        access to the RAM, CPU object, etc. E.g. for the taint2 plugin,
        this is the appropriate place to call taint2_enable_taint().
    */
    void (*after_machine_init)(CPUState *env);

    /* Callback ID:     PANDA_CB_AFTER_LOADVM

       after_loadvm:
        Called right after a snapshot has been loaded (either with loadvm or replay initialization),
        but before any guest code runs.

       Arguments:
        void *cpu_env: pointer to CPUState

       Return value:
        none

    */
    void (*after_loadvm)(CPUState *env);

    /* Callback ID:     PANDA_CB_TOP_LOOP

       top_loop:
        Called at the top of the loop that manages emulation.

       Arguments:
        CPUState *env:          pointer to CPUState

       Helper call location: cpus.c

       Return value:
        unused
     */
    void (*top_loop)(CPUState *env);
    /* Callback ID:     PANDA_CB_DURING_MACHINE_INIT

       during_machine_init: Called in the middle of machine initialization

       Arguments:
         MachineState *machine: pointer to the machine state

       Return value:
         None
     */

    void (*during_machine_init)(MachineState *machine);

    /* Callback ID:     PANDA_CB_MAIN_LOOP_WAIT

       main_loop_wait: Called in IO thread in place where monitor cmds are processed

       Arguments:
         None

       Return value:
         None
     */

    void (*main_loop_wait)(void);

    /* Callback ID:     PANDA_CB_PRE_SHUTDOWN

      pre_shutdown: Called just before qemu shuts down

       Arguments:
         None

       Return value:
         None
     */
    void (*pre_shutdown)(void);

    /* Callback ID:     PANDA_CB_UNASSIGNED_IO_WRITE

      unassigned_io_read: Called when the guest attempts to read from an unmapped peripheral via MMIO

       Arguments:
         pc: Guest program counter at time of write
         addr: Physical address written to
         size: Size of write
         val: Pointer to a buffer that will be passed to the guest as the result of the read

       Return value:
         True if value read was changed by a PANDA plugin and should be returned
         False if error-logic (invalid write) should be run
     */
    bool (*unassigned_io_read)(CPUState *env, target_ptr_t pc, hwaddr addr, size_t size, uint64_t *val);

    /* Callback ID:     PANDA_CB_UNASSIGNED_IO_WRITE

      unassigned_io_write: Called when the guest attempts to write to an unmapped peripheral via MMIO

       Arguments:
         pc: Guest program counter at time of write
         addr: Physical address written to
         size: Size of write
         val: Data being written, up to 8 bytes

       Return value:
         True if the write should be allowed without error
         False if normal behavior should be used (error-logic)
     */
    bool (*unassigned_io_write)(CPUState *env, target_ptr_t pc, hwaddr addr, size_t size, uint64_t val);


    /* Callback ID:     PANDA_CB_BEFORE_HANDLE_EXCEPTION

       before_handle_exception: Called just before we are about to
       handle an exception.

       Note: only called for cpu->exception_index > 0

       Aguments:
         exception_index (the current exception number)

       Return value:
         a new exception_index.

       Note: There might be more than one callback for this location.
       First callback that returns an exception index that *differs*
       from the one passed as an arg wins. That is what we return as
       the new exception index, which will replace
       cpu->exception_index

     */

    int32_t (*before_handle_exception)(CPUState *cpu, int32_t exception_index);

    /* Dummy union member.

       This union only contains function pointers.
       Using the cbaddr member one can compare if two union instances
       point to the same callback function. In principle, any other
       member could be used instead.
       However, cbaddr provides neutral semantics for the comparisson.
    */


    int32_t (*before_handle_interrupt)(CPUState *cpu, int32_t interrupt_request);

    void (*cbaddr)(void);
} panda_cb;



// -----------------------------------
// Pull number 2 from (panda-aware) osi_linux/utils/kernelinfo/kernelinfo.h

/**
 * @brief Kernel Version information
 */
struct version {
	int a;
	int b;
	int c;
};

/**
 * @brief Information and offsets related to `struct task_struct`.
 */
struct task_info {
    uint64_t per_cpu_offsets_addr;
    uint64_t per_cpu_offset_0_addr;
    uint64_t current_task_addr;
	uint64_t init_addr;			/**< Address of the `struct task_struct` of the init task. */
	size_t size;				/**< Size of `struct task_struct`. */
	union {
		int tasks_offset;			/**< TODO: add documentation for the rest of the struct members */
		int next_task_offset;
	};
	int pid_offset;
	int tgid_offset;
	int group_leader_offset;
	int thread_group_offset;
	union {
		int real_parent_offset;
		int p_opptr_offset;
	};
	union {
		int parent_offset;
		int p_pptr_offset;
	};
	int mm_offset;
	int stack_offset;
	int real_cred_offset;
	int cred_offset;
	int comm_offset;			/**< Offset of the command name in `struct task_struct`. */
	size_t comm_size;			/**< Size of the command name. */
	int files_offset;			/**< Offset for open files information. */
        int start_time_offset;                  /** offset of start_time */
};

/**
 * @brief Information and offsets related to `struct cred`.
 */
struct cred_info {
	int uid_offset;
	int gid_offset;
	int euid_offset;
	int egid_offset;
};

/**
 * @brief Information and offsets related to `struct mm_struct`.
 */
struct mm_info {
	size_t size;				/**< Size of `struct mm_struct`. */
	int mmap_offset;
	int pgd_offset;
	int arg_start_offset;
	int start_brk_offset;
	int brk_offset;
	int start_stack_offset;
};

/**
 * @brief Information and offsets related to `struct vm_area_struct`.
 */
struct vma_info {
	size_t size;				/**< Size of `struct vm_area_struct`. */
	int vm_mm_offset;
	int vm_start_offset;
	int vm_end_offset;
	int vm_next_offset;
	int vm_file_offset;
	int vm_flags_offset;
};

/**
 * @brief Filesystem information and offsets.
 */
struct fs_info {
	union {
		int f_path_dentry_offset;
		int f_dentry_offset;
	};
	union {
		int f_path_mnt_offset;
		int f_vfsmnt_offset;
	};
	int f_pos_offset;
	int fdt_offset;
	int fdtab_offset;
	int fd_offset;
};

/**
 * @brief qstr information and offsets
 */
struct qstr_info {
  size_t size;
  size_t name_offset;
};

/**
 * @brief Path related information and offsets.
 */
struct path_info {
	int d_name_offset;
	int d_iname_offset;
	int d_parent_offset;
	int d_op_offset;			/**< Offset of the dentry ops table. */
	int d_dname_offset;			/**< Offset of dynamic name function in dentry ops. */
	int mnt_root_offset;
	int mnt_parent_offset;
	int mnt_mountpoint_offset;
};

/**
 * @brief Wrapper for the structure-specific structs.
 */
struct kernelinfo {
	char *name;
	struct version version;
	struct task_info task;
	struct cred_info cred;
	struct mm_info mm;
	struct vma_info vma;
	struct fs_info fs;
	struct qstr_info qstr;
	struct path_info path;
};




// -----------------------------------
// Pull number 3 from (panda-aware) panda/include/panda/panda_api.h

// from panda_api.c
int panda_init(int argc, char **argv, char **envp);
int panda_run(void);
void panda_stop(int code);
void panda_cont(void);
void _panda_set_library_mode(const bool);
int panda_delvm(char *snapshot_name);
void panda_start_pandalog(const char *name);
int panda_revert(char *snapshot_name);
void panda_reset(void);
int panda_snap(char *snapshot_name);
int panda_finish(void);
bool panda_was_aborted(void);

void panda_set_qemu_path(char* filepath);

int panda_init_plugin(char *plugin_name, char **plugin_args, uint32_t num_args);

void panda_register_callback_helper(void* plugin, panda_cb_type type, panda_cb* cb);
void panda_enable_callback_helper(void *plugin, panda_cb_type, panda_cb* cb);
void panda_disable_callback_helper(void *plugin, panda_cb_type, panda_cb* cb);

int rr_get_guest_instr_count_external(void);

int panda_virtual_memory_read_external(CPUState *env, target_ulong addr, char *buf, int len);
int panda_virtual_memory_write_external(CPUState *env, target_ulong addr, char *buf, int len);
int panda_physical_memory_read_external(hwaddr addr, uint8_t *buf, int len);
int panda_physical_memory_write_external(hwaddr addr, uint8_t *buf, int len);

bool panda_in_kernel_external(CPUState *cpu);
target_ulong panda_current_sp_external(CPUState *cpu);
target_ulong panda_current_sp_masked_pagesize_external(CPUState *cpu, target_ulong pagesize);
target_ulong panda_virt_to_phys_external(CPUState *cpu, target_ulong virt_addr);

void panda_setup_signal_handling(void (*f) (int, void*, void *));

void map_memory(char* name, uint64_t size, uint64_t address);

// REDEFINITIONS below here from monitor.h

// Create a monitor for panda
void panda_init_monitor(void); // Redefinition from monitor.h

// Pass a message via the panda monitor. Create monitor if necessary'
// returns output string from monitor. Some commands may cause spinloops
char* panda_monitor_run(char* buf);// Redefinition from monitor.h

// Map a region of memory in the guest. WIP
//int panda_map_physical_mem(target_ulong addr, int len);

CPUState* get_cpu(void);

unsigned long garray_len(GArray *list);

/**
 * @brief Meta-information about system calls.
 */
typedef struct {
    uint32_t max;
    uint32_t max_generic;
    uint32_t max_args;
} syscall_meta_t;

/**
 * @brief Type of system call argument enumeration.
 */
typedef enum {
    SYSCALL_ARG_U64 = 0x00, /**< unsigned 64bit value */
    SYSCALL_ARG_U32,        /**< unsigned 32bit value */
    SYSCALL_ARG_U16,        /**< unsigned 16bit value */
    SYSCALL_ARG_S64 = 0x10, /**< signed 64bit value */
    SYSCALL_ARG_S32,        /**< signed 32bit value */
    SYSCALL_ARG_S16,        /**< signed 16bit value */
    SYSCALL_ARG_PTR = 0x20, /**< pointer to buffer/struct */
    SYSCALL_ARG_STR         /**< C string */
} syscall_argtype_t;

/**
 * @brief System call information.
 */
typedef struct {
    int no;
    const char *name;
    int nargs;
    syscall_argtype_t *argt;
    uint8_t *argsz;
    bool noreturn;
} syscall_info_t;
 typedef struct syscall_ctx { 
            int no;               /**< number */
            target_ptr_t asid;    /**< calling process asid */
            target_ptr_t retaddr; /**< return address */
            uint8_t args[64]
                 [64]; /**< arguments */
                 
        } syscall_ctx_t;
    //Autogenerated PPP header from /home/luke/workspace/panda/panda/plugins/syscalls2/generated/syscalls_ext_typedefs.h
typedef void (*on_all_sys_enter_t)(CPUState *cpu, target_ulong pc, target_ulong callno);
void ppp_add_cb_on_all_sys_enter(on_all_sys_enter_t);
bool ppp_remove_cb_on_all_sys_enter(on_all_sys_enter_t);
typedef void (*on_all_sys_enter2_t)(CPUState *cpu, target_ulong pc, const syscall_info_t *call, const syscall_ctx_t *ctx);
void ppp_add_cb_on_all_sys_enter2(on_all_sys_enter2_t);
bool ppp_remove_cb_on_all_sys_enter2(on_all_sys_enter2_t);
typedef void (*on_all_sys_return_t)(CPUState *cpu, target_ulong pc, target_ulong callno);
void ppp_add_cb_on_all_sys_return(on_all_sys_return_t);
bool ppp_remove_cb_on_all_sys_return(on_all_sys_return_t);
typedef void (*on_all_sys_return2_t)(CPUState *cpu, target_ulong pc, const syscall_info_t *call, const syscall_ctx_t *ctx);
void ppp_add_cb_on_all_sys_return2(on_all_sys_return2_t);
bool ppp_remove_cb_on_all_sys_return2(on_all_sys_return2_t);
typedef void (*on_unknown_sys_enter_t)(CPUState *cpu, target_ulong pc, target_ulong callno);
void ppp_add_cb_on_unknown_sys_enter(on_unknown_sys_enter_t);
bool ppp_remove_cb_on_unknown_sys_enter(on_unknown_sys_enter_t);
typedef void (*on_unknown_sys_return_t)(CPUState *cpu, target_ulong pc, target_ulong callno);
void ppp_add_cb_on_unknown_sys_return(on_unknown_sys_return_t);
bool ppp_remove_cb_on_unknown_sys_return(on_unknown_sys_return_t);
//Autogenerated PPP header from /home/luke/workspace/panda/panda/plugins/callstack_instr/callstack_instr.h

typedef void (*on_call_t)(CPUState *env, target_ulong func);
void ppp_add_cb_on_call(on_call_t);
bool ppp_remove_cb_on_call(on_call_t);
typedef void (*on_ret_t)(CPUState *env, target_ulong func);
void ppp_add_cb_on_ret(on_ret_t);
bool ppp_remove_cb_on_ret(on_ret_t);

//Autogenerated PPP header from /home/luke/workspace/panda/panda/plugins/hooks2/hooks2_ppp.h

// Hook functions must be of this type
typedef bool (*hooks2_func_t)(CPUState *, TranslationBlock *, void *);


typedef void (*on_process_start_t)(CPUState *cpu,const char *procname,target_ulong asid,target_pid_t pid);
void ppp_add_cb_on_process_start(on_process_start_t);
bool ppp_remove_cb_on_process_start(on_process_start_t);

typedef void (*on_process_end_t)(CPUState *cpu,const char *procname,target_ulong asid,target_pid_t pid);
void ppp_add_cb_on_process_end(on_process_end_t);
bool ppp_remove_cb_on_process_end(on_process_end_t);

typedef void (*on_thread_start_t)(CPUState* cpu,const char *procname,target_ulong asid,target_pid_t pid,target_pid_t tid);
void ppp_add_cb_on_thread_start(on_thread_start_t);
bool ppp_remove_cb_on_thread_start(on_thread_start_t);

typedef void (*on_thread_end_t)(CPUState* cpu,const char *procname,target_ulong asid,target_pid_t pid,target_pid_t tid);
void ppp_add_cb_on_thread_end(on_thread_end_t);
bool ppp_remove_cb_on_thread_end(on_thread_end_t);

typedef void (*on_mmap_updated_t)(CPUState* cpu,const char *libname,target_ulong base,target_ulong size);
void ppp_add_cb_on_mmap_updated(on_mmap_updated_t);
bool ppp_remove_cb_on_mmap_updated(on_mmap_updated_t);


typedef int (*_add_hooks2_t)(hooks2_func_t hook,void *cb_data,bool is_kernel,const char *procname,const char *libname,target_ulong trace_start,target_ulong trace_stop,target_ulong range_begin,target_ulong range_end);

typedef void (*_enable_hooks2_t)(int id);
void ppp_add_cb__enable_hooks2(_enable_hooks2_t);
bool ppp_remove_cb__enable_hooks2(_enable_hooks2_t);
typedef void (*_disable_hooks2_t)(int id);
void ppp_add_cb__disable_hooks2(_disable_hooks2_t);
bool ppp_remove_cb__disable_hooks2(_disable_hooks2_t);

// Manully created. Sorry. Didn't know how to deal with the QTAILQ stuff with cffi

typedef struct {
    struct CPUBreakpoint *tqe_next;       /* next element */
    struct CPUBreakpoint **tqe_prev;      /* address of previous next element */
} CPUBreakpoint_qtailq;

typedef struct CPUBreakpoint {
    vaddr pc;
    uint64_t rr_instr_count;
    int flags; /* BP_* */
    CPUBreakpoint_qtailq entry; // Was a QTAILQ(CPUBreakpoint)
} CPUBreakpoint;

int cpu_breakpoint_insert(CPUState *cpu, vaddr pc, int flags, CPUBreakpoint **breakpoint);

int cpu_breakpoint_remove(CPUState *cpu, vaddr pc, int flags);


/**
 * @brief Minimal handle for a process. Contains a unique identifier \p asid
 * and a task descriptor pointer \p taskd that can be used to retrieve the full
 * details of the process.
 */
typedef struct osi_proc_handle_struct {
    target_ptr_t taskd;
    target_ptr_t asid;
} OsiProcHandle;

/**
 * @brief Minimal information about a process thread.
 * Address space and open resources are shared between threads
 * of the same process. This information is stored in OsiProc.
 */
typedef struct osi_thread_struct {
    target_pid_t pid;
    target_pid_t tid;
} OsiThread;

/**
 * @brief Represents a page in the address space of a process.
 *
 * @note This has not been implemented/used so far.
 */
typedef struct osi_page_struct {
    target_ptr_t start;
    target_ulong len;
} OsiPage;

/**
 * @brief Represents information about a guest OS module (kernel module
 * or shared library).
 */
typedef struct osi_module_struct {
    target_ptr_t modd;
    target_ptr_t base;
    target_ptr_t size;
    char *file;
    char *name;
} OsiModule;

/**
 * @brief Detailed information for a process.
 */
typedef struct osi_proc_struct {
    target_ptr_t taskd;
    target_ptr_t asid;
    target_pid_t pid;
    target_pid_t ppid;
    char *name;
    OsiPage *pages;
    uint64_t create_time;
} OsiProc;

// returns minimal handles for processes in an array
GArray *get_process_handles(CPUState *cpu);

// returns the current thread
OsiThread *get_current_thread(CPUState *cpu);

// returns information about the modules loaded by the guest OS kernel
GArray *get_modules(CPUState *cpu);

// returns information about the memory mappings of libraries loaded by a guest OS process
GArray *get_mappings(CPUState *cpu, OsiProc *p);

// returns operating system introspection info for each process in an array
GArray *get_processes(CPUState *cpu);

// gets the currently running process
OsiProc *get_current_process(CPUState *cpu);

OsiModule* get_one_module(GArray *osimodules, unsigned int idx);

OsiProc* get_one_proc(GArray *osiprocs, unsigned int idx);

void cleanup_garray(GArray *g);


    // Block a signal for all processes
    void block_sig(int32_t sig);

    // Block a signal only for a named process
    void block_sig_by_proc(int32_t sig, char* proc_name);


// Public interface

// Get up to n callers from the given stack in use at this moment
// Callers are returned in callers[], most recent first
uint32_t get_callers(target_ulong *callers, uint32_t n, CPUState *cpu);

// Get up to n functions from the given stack in use at this moment
// Functions are returned in functions[], most recent first
uint32_t get_functions(target_ulong *functions, uint32_t n, CPUState *cpu);


/* these need to be the same size because when we have an unknown dynamic value
 * that we need to fill in later, we need to fix up the taint op in the buffer
 */
typedef uint64_t HAddr;    // hard drive
typedef uint64_t MAddr;    // physical ram
typedef uint64_t IAddr;    // io buffers (net & hd)
typedef uint64_t PAddr;    // port addresses (x86-specific)
typedef uint64_t LAddr;    // local values
typedef uint64_t GReg;     // guest general purpose register
typedef uint64_t GSpec;    // guest special address, like floating point regs
typedef uint64_t Unk;      // unknown type that needs to be fixed up
typedef uint64_t Const;    // constant that we currently treat as untainted
typedef uint64_t Ret;      // LLVM return value, also temp register

typedef enum {HADDR, MADDR, IADDR, PADDR, LADDR, GREG, GSPEC,
    UNK, CONST, RET, ADDR_LAST} AddrType;

typedef enum {
    IRRELEVANT=5,  // memory access to CPU state we don't care about
    EXCEPTION=1,    // indicates that there was a memory exception
    READLOG,        // indicates that we need to read from dynamic log
    FUNCARG         // indicates that we need to copy to the current frame + 1
} AddrFlag;

typedef enum {
    INSNREADLOG=1 // indicates that we need to read from dynamic log
} InsnFlag;

typedef struct addr_struct {
  AddrType typ;
  union {
    HAddr ha;
    MAddr ma;
    IAddr ia;
    PAddr pa;
    LAddr la;
    GReg gr;
    GSpec gs;
    Unk ua;
    Const con;
    Ret ret;
  } val;
  uint16_t off;   // offset within local registers and guest registers
  AddrFlag flag;  // indication that we might need to look up address from log
} Addr;



typedef struct query_result {
    uint32_t num_labels;
    // ptrs to label set and c++ iterator 
    void *ls;
    void *it_end;
    void *it_curr;
    // taint compute number for this set
    uint32_t tcn;
    // controlled bit mask
    uint8_t cb_mask;
} QueryResult;



// turns on taint
void taint2_enable_taint(void);

// turns on tainted pointer
void taint2_enable_tainted_pointer(void);

// returns 1 if taint is on
int taint2_enabled(void);

void taint2_label_addr(Addr a, int offset, uint32_t l);

// label this RAM offset in memory with label l, and only label l. any previous
// labels applied to this RAM offset are removed.
void taint2_label_ram(uint64_t RamOffset, uint32_t l);

// label this reg with label l, and only label l. any previous labels applied 
// to this address are removed.
void taint2_label_reg(int reg_num, int offset, uint32_t l);

// label this io addr with label l, and only label l. any previous
// labels applied to this address are removed.
void taint2_label_io(uint64_t ia, uint32_t l);

// add label l to this RAM offset in memory. any previous labels applied to this
// RAM offset are not removed.
void taint2_label_ram_additive(uint64_t RamOffset, uint32_t l);

// add label l to this register. any previous labels applied to this register
// are not removed.
void taint2_label_reg_additive(int reg_num, int offset, uint32_t l);

// add label l to this io addr. any previous labels applied to this
// address are not removed.
void taint2_label_io_additive(uint64_t ia, uint32_t l);

// query fns return 0 if untainted, else cardinality of taint set
uint32_t taint2_query(Addr a);
uint32_t taint2_query_ram(uint64_t RamOffset);
uint32_t taint2_query_reg(int reg_num, int offset);
uint32_t taint2_query_io(uint64_t ia);
uint32_t taint2_query_laddr(uint64_t ia, uint64_t offset);

// query with automatic allocation of the required memory
uint32_t taint2_query_set_a(Addr a, uint32_t **out, uint32_t *outsz);

// query set fns writes taint set contents to the specified array. the size of
// the array must be >= the cardianlity of the taint set.
void taint2_query_set(Addr a, uint32_t *out);
void taint2_query_set_ram(uint64_t RamOffset, uint32_t *out);
void taint2_query_set_reg(int reg_num, int offset, uint32_t *out);
void taint2_query_set_io(uint64_t ia, uint32_t *out);

// returns taint compute number associated with addr
uint32_t taint2_query_tcn(Addr a);
uint32_t taint2_query_tcn_ram(uint64_t RamOffset);
uint32_t taint2_query_tcn_reg(int reg_num, int offset);
uint32_t taint2_query_tcn_io(uint64_t ia);

// Returns a mask indicating which bits are attacker-controlled (derived
// reversibly from input).
uint64_t taint2_query_cb_mask(Addr a, uint8_t size);

// delete taint from this RAM Offset
void taint2_delete_ram(uint64_t RamOffset);

// delete taint from this register
void taint2_delete_reg(int reg_num, int offset);

// delete taint from this io addr
void taint2_delete_io(uint64_t ia);

// addr is an opaque.  it should be &a if a is known to be an Addr
void taint2_labelset_addr_iter(Addr addr, int (*app)(uint32_t el, void *stuff1), void *stuff2);

// apply this fn to each of the labels associated with this RAM offset
// fn should return 0 to continue iteration
void taint2_labelset_ram_iter(uint64_t RamOffset, int (*app)(uint32_t el, void *stuff1), void *stuff2);

// ditto, but a machine register
// you should be able to use R_EAX, etc as reg_num
// offset is byte offset withing that reg.
void taint2_labelset_reg_iter(int reg_num, int offset, int (*app)(uint32_t el, void *stuff1), void *stuff2);

// apply this fn to each of the labels associated with this io address
// fn should return 0 to continue iteration
void taint2_labelset_io_iter(uint64_t ia, int (*app)(uint32_t el, void *stuff1), void *stuff2);

// just tells how big that labels_applied set will be
uint32_t taint2_num_labels_applied(void);

// Track whether taint state actually changed during a BB
void taint2_track_taint_state(void);

typedef uint32_t TaintLabel;

// Initializes the labelset label iterator in the query result
// meaning rewinding it to first label in set
void taint2_query_results_iter(QueryResult *qr);

// Returns current label in set and moves on to next. Sets *bool to
// true if there are no more labels and false otherwise
uint32_t taint2_query_result_next(QueryResult *qr, bool *done);

// Places taint query results for this register / offset byte in
// returned qr.  qr's label set iterator is pre initialized, so there
// is no need to call taint2_query_results_iter unless you want to
// iterate through labels more than once).
void taint2_query_reg_full(uint32_t reg_num, uint32_t offset, QueryResult *qr);


// Places taint query results for this RAM offset in
// returned qr.  qr's label set iterator is pre initialized, so there
// is no need to call taint2_query_results_iter unless you want to
// iterate through labels more than once).
void taint2_query_ram_full(uint64_t RamOffset, QueryResult *qr);

// Places taint query results for this laaddress in
// returned qr.  qr's label set iterator is pre initialized, so there
// is no need to call taint2_query_results_iter unless you want to
// iterate through labels more than once).
void taint2_query_laddr_full(uint64_t la, uint64_t offset, QueryResult *qr);



// returns fd for a filename or a NULL if failed
char *osi_linux_fd_to_filename(CPUState *env, OsiProc *p, int fd);

// returns pos in a file 
unsigned long long osi_linux_fd_to_pos(CPUState *env, OsiProc *p, int fd);


// returns the system call return value, hiding arch-specific details
target_long get_syscall_retval(CPUState *cpu);


    // Hook functions must be of this type
    typedef bool (*hook_func_t)(CPUState *, TranslationBlock *);

    void add_hook(target_ulong addr, hook_func_t hook);
    void update_hook(hook_func_t hook, target_ulong value);
    void enable_hook(hook_func_t hook, target_ulong value);
    void disable_hook(hook_func_t hook);


int panda_vm_quit(void);
int panda_record_begin(const char *name, const char *snapshot);
int panda_record_end(void);
int panda_replay_begin(const char *name);
int panda_replay_end(void);


// Doubly linked list that stores a callback, along with its owner
typedef struct _panda_cb_list panda_cb_list;
struct _panda_cb_list {
    panda_cb entry;
    void *owner;
    panda_cb_list *next;
    panda_cb_list *prev;
    bool enabled;
};
panda_cb_list *panda_cb_list_next(panda_cb_list *plist);
void panda_enable_plugin(void *plugin);
void panda_disable_plugin(void *plugin);

// Structure to store metadata about a plugin
typedef struct panda_plugin {
    char name[256];     // Currently basename(filename)
    void *plugin;       // Handle to the plugin (for use with dlsym())
} panda_plugin;

void   panda_register_callback(void *plugin, panda_cb_type type, panda_cb cb);
void   panda_disable_callback(void *plugin, panda_cb_type type, panda_cb cb);
void   panda_enable_callback(void *plugin, panda_cb_type type, panda_cb cb);
void   panda_unregister_callbacks(void *plugin);
bool   panda_load_plugin(const char *filename, const char *plugin_name);
bool   _panda_load_plugin(const char *filename, const char *plugin_name, bool library_mode);
bool   panda_add_arg(const char *plugin_name, const char *plugin_arg);
bool   panda_load_external_plugin(const char *filename, const char *plugin_name, void *plugin_uuid, void *init_fn_ptr);
void * panda_get_plugin_by_name(const char *name);
void   panda_unload_plugin_by_name(const char* name);
void   panda_do_unload_plugin(int index);
void   panda_unload_plugin(void *plugin);
void   panda_unload_plugin_idx(int idx);
void   panda_unload_plugins(void);

extern bool panda_update_pc;
extern bool panda_use_memcb;
extern panda_cb_list *panda_cbs[PANDA_CB_LAST];
extern bool panda_plugins_to_unload[MAX_PANDA_PLUGINS];
extern bool panda_plugin_to_unload;
extern bool panda_tb_chaining;

// this stuff is used by the new qemu cmd-line arg '-os os_name'
typedef enum OSFamilyEnum { OS_UNKNOWN, OS_WINDOWS, OS_LINUX, OS_FREEBSD } PandaOsFamily;

// these are set in panda/src/common.c via call to panda_set_os_name(os_name)
extern char *panda_os_name;           // the full name of the os, as provided by the user
extern char *panda_os_family;         // parsed os family
extern char *panda_os_variant;        // parsed os variant
extern uint32_t panda_os_bits;        // parsed os bits
extern PandaOsFamily panda_os_familyno; // numeric identifier for family



bool panda_flush_tb(void);

void panda_do_flush_tb(void);
void panda_enable_precise_pc(void);
void panda_disable_precise_pc(void);
void panda_enable_memcb(void);
void panda_disable_memcb(void);
void panda_enable_llvm(void);
void panda_disable_llvm(void);
void panda_enable_llvm_helpers(void);
void panda_disable_llvm_helpers(void);
void panda_enable_tb_chaining(void);
void panda_disable_tb_chaining(void);
void panda_memsavep(FILE *f);

// Struct for holding a parsed key/value pair from
// a -panda-arg plugin:key=value style argument.
typedef struct panda_arg {
    char *argptr;   // For internal use only
    char *key;      // Pointer to the key string
    char *value;    // Pointer to the value string
} panda_arg;

typedef struct panda_arg_list {
    int nargs;
    panda_arg *list;
    char *plugin_name;
} panda_arg_list;

// Parse out arguments and return them to caller
panda_arg_list *panda_get_args(const char *plugin_name);
// Free a list of parsed arguments
void panda_free_args(panda_arg_list *args);

target_ulong panda_parse_ulong(panda_arg_list *args, const char *argname, target_ulong defval);
target_ulong panda_parse_ulong_req(panda_arg_list *args, const char *argname, const char *help);
target_ulong panda_parse_ulong_opt(panda_arg_list *args, const char *argname, target_ulong defval, const char *help);
uint32_t panda_parse_uint32(panda_arg_list *args, const char *argname, uint32_t defval);
uint32_t panda_parse_uint32_req(panda_arg_list *args, const char *argname, const char *help);
uint32_t panda_parse_uint32_opt(panda_arg_list *args, const char *argname, uint32_t defval, const char *help);
uint64_t panda_parse_uint64(panda_arg_list *args, const char *argname, uint64_t defval);
uint64_t panda_parse_uint64_req(panda_arg_list *args, const char *argname, const char *help);
uint64_t panda_parse_uint64_opt(panda_arg_list *args, const char *argname, uint64_t defval, const char *help);
double panda_parse_double(panda_arg_list *args, const char *argname, double defval);
double panda_parse_double_req(panda_arg_list *args, const char *argname, const char *help);
double panda_parse_double_opt(panda_arg_list *args, const char *argname, double defval, const char *help);
// Returns true if arg present, unless arg=false or arg=no exists.
bool panda_parse_bool(panda_arg_list *args, const char *argname);
bool panda_parse_bool_req(panda_arg_list *args, const char *argname, const char *help);
bool panda_parse_bool_opt(panda_arg_list *args, const char *argname, const char *help);
const char *panda_parse_string(panda_arg_list *args, const char *argname, const char *defval);
const char *panda_parse_string_req(panda_arg_list *args, const char *argname, const char *help);
const char *panda_parse_string_opt(panda_arg_list *args, const char *argname, const char *defval, const char *help);

char** str_split(char *a_str, const char a_delim);

extern const gchar *panda_argv[MAX_PANDA_PLUGIN_ARGS];
extern int panda_argc;

char *panda_plugin_path(const char *name);
void panda_require_from_library(const char *plugin_name, char **plugin_args, uint32_t num_args);
void panda_require(const char *plugin_name);
bool panda_is_callback_enabled(void *plugin, panda_cb_type type, panda_cb cb);


void panda_cleanup(void);
void panda_set_os_name(char *os_name);
void panda_before_find_fast(void);
void panda_disas(FILE *out, void *code, unsigned long size);
void panda_break_main_loop(void);
MemoryRegion* panda_find_ram(void);

extern bool panda_exit_loop;
extern bool panda_break_vl_loop_req;


/*
 * @brief Returns the guest address space identifier.
 */
target_ulong panda_current_asid(CPUState *env);

/**
 * @brief Returns the guest program counter.
 */
target_ulong panda_current_pc(CPUState *cpu);


/** @brief Memory types. */
typedef enum { RR_MEM_IO, RR_MEM_RAM, RR_MEM_UNKNOWN } RR_mem_type;

/**
 * @brief Record/Replay modes. Also used to request transitions from one
 * mode to another.
 */
typedef enum { RR_NOCHANGE=-1, RR_OFF=0, RR_RECORD, RR_REPLAY } RR_mode;

/** @brief Return codes for functions controlling record/replay. */
typedef enum { 
    RRCTRL_EINVALID=-2, /* invalid mode transition requested */
    RRCTRL_EPENDING=-1, /* another transition is already pending */
    RRCTRL_OK=0         /* transition request registered */
} RRCTRL_ret;

int add_hooks2(
    hooks2_func_t hook,
    void *cb_data,
    bool is_kernel,
    const char *procname,
    const char *libname,
    target_ulong trace_start,
    target_ulong trace_stop,
    target_ulong range_begin,
    target_ulong range_end);

void enable_hooks2(int id);
void disable_hooks2(int id);

