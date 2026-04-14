@class NSMutableArray, NSObject;
@protocol OS_os_metric_uint64_counter, OS_os_metric_double_gauge;

@interface CoalitionComputeMetrics : NSObject

@property (retain) NSObject<OS_os_metric_uint64_counter> *tasks_started;
@property (retain) NSObject<OS_os_metric_uint64_counter> *tasks_exited;
@property (retain) NSObject<OS_os_metric_uint64_counter> *cpu_time;
@property (retain) NSObject<OS_os_metric_uint64_counter> *interrupt_wakeups;
@property (retain) NSObject<OS_os_metric_uint64_counter> *platform_idle_wakeups;
@property (retain) NSObject<OS_os_metric_uint64_counter> *bytesread;
@property (retain) NSObject<OS_os_metric_uint64_counter> *byteswritten;
@property (retain) NSObject<OS_os_metric_uint64_counter> *gpu_time;
@property (retain) NSObject<OS_os_metric_uint64_counter> *cpu_time_billed_to_me;
@property (retain) NSObject<OS_os_metric_uint64_counter> *cpu_time_billed_to_others;
@property (retain) NSObject<OS_os_metric_uint64_counter> *energy;
@property (retain) NSObject<OS_os_metric_uint64_counter> *energy_billed_to_me;
@property (retain) NSObject<OS_os_metric_uint64_counter> *energy_billed_to_others;
@property (retain) NSObject<OS_os_metric_uint64_counter> *cpu_ptime;
@property (retain) NSMutableArray *cpu_time_eqos;
@property (retain) NSObject<OS_os_metric_uint64_counter> *cpu_instructions;
@property (retain) NSObject<OS_os_metric_uint64_counter> *cpu_cycles;
@property (retain) NSObject<OS_os_metric_uint64_counter> *fs_metadata_writes;
@property (retain) NSObject<OS_os_metric_uint64_counter> *pm_writes;
@property (retain) NSObject<OS_os_metric_uint64_counter> *cpu_pinstructions;
@property (retain) NSObject<OS_os_metric_uint64_counter> *cpu_pcycles;
@property (retain) NSObject<OS_os_metric_double_gauge> *conclave_mem;
@property (retain) NSObject<OS_os_metric_uint64_counter> *ane_mach_time;
@property (retain) NSObject<OS_os_metric_uint64_counter> *ane_energy_nj;
@property (retain) NSObject<OS_os_metric_double_gauge> *phys_footprint;
@property (retain) NSObject<OS_os_metric_uint64_counter> *gpu_energy_nj;
@property (retain) NSObject<OS_os_metric_uint64_counter> *gpu_energy_nj_billed_to_me;
@property (retain) NSObject<OS_os_metric_uint64_counter> *gpu_energy_nj_billed_to_others;
@property (retain) NSObject<OS_os_metric_uint64_counter> *swapins;
@property (retain) NSObject<OS_os_metric_double_gauge> *wired_size;
@property (retain) NSObject<OS_os_metric_double_gauge> *purgeable_size;
@property (retain) NSObject<OS_os_metric_double_gauge> *rss_size;
@property (retain) NSObject<OS_os_metric_double_gauge> *anonmem_size;
@property (retain) NSObject<OS_os_metric_double_gauge> *compressed_size;
@property (retain) NSObject<OS_os_metric_double_gauge> *process_count;
@property (retain) NSObject<OS_os_metric_double_gauge> *compressed_lifetime;
@property (retain) NSObject<OS_os_metric_double_gauge> *n_files;

- (void).cxx_destruct;
- (id)initWithCoalitionId:(unsigned long long)a0 withBundleId:(id)a1 withLaunchDName:(id)a2;

@end
