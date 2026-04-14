@interface SLSScreenTelemetryResultsSnapshotZoneDataWrapper : NSObject

@property (readonly, nonatomic) struct shared_ptr<SLSScreenTelemetryResultsSnapshotZoneData> { struct SLSScreenTelemetryResultsSnapshotZoneData *__ptr_; struct __shared_weak_count *__cntrl_; } data;

+ (id)wrapperWithObject:(struct shared_ptr<SLSScreenTelemetryResultsSnapshotZoneData> { struct SLSScreenTelemetryResultsSnapshotZoneData *x0; struct __shared_weak_count *x1; })a0;

- (const float *)rawData;
- (id)initWithObject:(struct shared_ptr<SLSScreenTelemetryResultsSnapshotZoneData> { struct SLSScreenTelemetryResultsSnapshotZoneData *x0; struct __shared_weak_count *x1; })a0;
- (id).cxx_construct;
- (unsigned long long)row;
- (void).cxx_destruct;
- (float)count;
- (unsigned long long)column;
- (float)zAverage;
- (float)zMax;
- (float)zMin;

@end
