@class NSMutableArray;
@protocol GPURawCounterSource;

@interface CCGPUMonitor : NSObject {
    BOOL _monitoring;
    id<GPURawCounterSource> _counterSource;
    struct unordered_map<unsigned long long, CCGPUPerformanceCounterSnapshot, std::hash<unsigned long long>, std::equal_to<unsigned long long>, std::allocator<std::pair<const unsigned long long, CCGPUPerformanceCounterSnapshot>>> { struct __hash_table<std::__hash_value_type<unsigned long long, CCGPUPerformanceCounterSnapshot>, std::__unordered_map_hasher<unsigned long long, std::__hash_value_type<unsigned long long, CCGPUPerformanceCounterSnapshot>, std::hash<unsigned long long>, std::equal_to<unsigned long long>>, std::__unordered_map_equal<unsigned long long, std::__hash_value_type<unsigned long long, CCGPUPerformanceCounterSnapshot>, std::equal_to<unsigned long long>, std::hash<unsigned long long>>, std::allocator<std::__hash_value_type<unsigned long long, CCGPUPerformanceCounterSnapshot>>> { struct unique_ptr<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CCGPUPerformanceCounterSnapshot>, void *> *> *[], std::__bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CCGPUPerformanceCounterSnapshot>, void *> *> *>>> { void **__ptr_; struct __bucket_list_deallocator<std::allocator<std::__hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CCGPUPerformanceCounterSnapshot>, void *> *> *>> { unsigned long long __size_; } __deleter_; } __bucket_list_; struct __hash_node_base<std::__hash_node<std::__hash_value_type<unsigned long long, CCGPUPerformanceCounterSnapshot>, void *> *> { void *__next_; } __first_node_; unsigned long long __size_; float __max_load_factor_; } __table_; } _perfSnapshotPool;
}

@property (retain, nonatomic) NSMutableArray *cyclesInMillions;
@property (retain, nonatomic) NSMutableArray *aluInstructionsInMillions;
@property (retain, nonatomic) NSMutableArray *timeInMilliseconds;

+ (id)comparativeSummaryForMonitor:(id)a0 label:(id)a1 otherMonitor:(id)a2 otherLabel:(id)a3;
+ (id)overlaidHistogramsForCounters:(id)a0 countersLabel:(id)a1 otherCounters:(id)a2 otherLabel:(id)a3;

- (void)start;
- (id)summary;
- (void)stop;
- (id)init;
- (id)description;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)histograms;
- (void)processPerformanceCounterSnapshot:(struct CCGPUPerformanceCounterSnapshot { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; } *)a0;
- (void)tagFrameEnd;

@end
