@interface SLSScreenTelemetryResultsSnapshotDataWrapper : NSObject

@property (readonly, nonatomic) struct shared_ptr<SLSScreenTelemetryResultsSnapshotData> { struct SLSScreenTelemetryResultsSnapshotData *__ptr_; struct __shared_weak_count *__cntrl_; } data;

+ (id)wrapperWithObject:(struct shared_ptr<SLSScreenTelemetryResultsSnapshotData> { struct SLSScreenTelemetryResultsSnapshotData *x0; struct __shared_weak_count *x1; })a0;
+ (id)wrapperWithXPCObject:(id)a0;

- (unsigned long long)columnCount;
- (id)initWithXPCObject:(id)a0;
- (const float *)rawData;
- (id)initWithObject:(struct shared_ptr<SLSScreenTelemetryResultsSnapshotData> { struct SLSScreenTelemetryResultsSnapshotData *x0; struct __shared_weak_count *x1; })a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (double)timestamp;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (unsigned long long)rowCount;
- (id)panel;
- (float)AZL_max;
- (float)AZL_mean;
- (float)EDR_headroom;
- (float)AZL_min;

@end
