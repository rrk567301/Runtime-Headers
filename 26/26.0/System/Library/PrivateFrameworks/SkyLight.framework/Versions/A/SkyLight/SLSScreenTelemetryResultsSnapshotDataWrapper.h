@interface SLSScreenTelemetryResultsSnapshotDataWrapper : NSObject

@property (readonly, nonatomic) struct shared_ptr<SLSScreenTelemetryResultsSnapshotData> { struct SLSScreenTelemetryResultsSnapshotData *__ptr_; struct __shared_weak_count *__cntrl_; } data;

+ (id)wrapperWithObject:(struct shared_ptr<SLSScreenTelemetryResultsSnapshotData> { struct SLSScreenTelemetryResultsSnapshotData *x0; struct __shared_weak_count *x1; })a0;
+ (id)wrapperWithXPCObject:(id)a0;

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)initWithObject:(struct shared_ptr<SLSScreenTelemetryResultsSnapshotData> { struct SLSScreenTelemetryResultsSnapshotData *x0; struct __shared_weak_count *x1; })a0;
- (unsigned long long)columnCount;
- (double)timestamp;
- (unsigned long long)rowCount;
- (const float *)rawData;
- (id).cxx_construct;
- (id)initWithXPCObject:(id)a0;
- (void).cxx_destruct;
- (id)panel;
- (float)AZL_max;
- (float)AZL_mean;
- (float)EDR_headroom;
- (float)AZL_min;

@end
