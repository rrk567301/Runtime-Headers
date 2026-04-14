@interface SLSScreenTelemetryResultsSnapshotZoneDataWrapper : NSObject

@property (readonly, nonatomic) struct shared_ptr<SLSScreenTelemetryResultsSnapshotZoneData> { struct SLSScreenTelemetryResultsSnapshotZoneData *__ptr_; struct __shared_weak_count *__cntrl_; } data;

+ (id)wrapperWithObject:(struct shared_ptr<SLSScreenTelemetryResultsSnapshotZoneData> { struct SLSScreenTelemetryResultsSnapshotZoneData *x0; struct __shared_weak_count *x1; })a0;

- (float)count;
- (unsigned long long)row;
- (const float *)rawData;
- (unsigned long long)column;
- (id)initWithObject:(struct shared_ptr<SLSScreenTelemetryResultsSnapshotZoneData> { struct SLSScreenTelemetryResultsSnapshotZoneData *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (float)zAverage;
- (float)zMax;
- (float)zMin;

@end
