@interface SLSScreenTelemetryResultsSnapshotDataWrapper : NSObject

@property (readonly, nonatomic) struct shared_ptr<SLSScreenTelemetryResultsSnapshotData> { struct SLSScreenTelemetryResultsSnapshotData *__ptr_; struct __shared_weak_count *__cntrl_; } data;

+ (id)wrapperWithObject:(struct shared_ptr<SLSScreenTelemetryResultsSnapshotData> { struct SLSScreenTelemetryResultsSnapshotData *x0; struct __shared_weak_count *x1; })a0;
+ (id)wrapperWithXPCObject:(id)a0;

- (unsigned long long)columnCount;
- (id)initWithObject:(struct shared_ptr<SLSScreenTelemetryResultsSnapshotData> { struct SLSScreenTelemetryResultsSnapshotData *x0; struct __shared_weak_count *x1; })a0;
- (double)timestamp;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (unsigned long long)rowCount;
- (id)initWithXPCObject:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (const float *)rawData;
- (id)panel;
- (float)AZL_max;
- (float)AZL_min;
- (float)AZL_mean;
- (float)EDR_headroom;

@end
