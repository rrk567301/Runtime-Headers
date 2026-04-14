@class NSMutableArray, NSUUID, NSDate, NSNumber, NSObject;
@protocol OS_dispatch_queue, ULOdometryProviderDelegate, ULOdometrySource;

@interface ULOdometryProvider : NSObject {
    id<ULOdometrySource> _odometrySource;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) id<ULOdometryProviderDelegate> delegate;
@property (retain, nonatomic) NSUUID *trajectoryUUID;
@property (retain, nonatomic) NSNumber *deltaPositionX;
@property (retain, nonatomic) NSNumber *deltaPositionY;
@property (retain, nonatomic) NSNumber *deltaPositionZ;
@property (retain, nonatomic) NSNumber *quaternionX;
@property (retain, nonatomic) NSNumber *quaternionY;
@property (retain, nonatomic) NSNumber *quaternionZ;
@property (retain, nonatomic) NSNumber *quaternionW;
@property (retain, nonatomic) NSDate *previousStatusUpdateDate;
@property (nonatomic) long long odometrySourceType;
@property (retain, nonatomic) NSMutableArray *alignmentAngleBuffer;
@property (retain, nonatomic) NSNumber *accumulatedAlignmentAngleRad;
@property (retain, nonatomic) NSNumber *accumulatedAlignmentAngleErrorEstimateRad;

+ (struct optional<ULOdometryDO> { union { char x0; struct ULOdometryDO { float x0; float x1; float x2; struct optional<float> { union { char x0; float x1; } x0; BOOL x1; } x3; struct optional<float> { union { char x0; float x1; } x0; BOOL x1; } x4; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x5; id x6; long long x7; } x1; } x0; BOOL x1; })findFenceCrossingOdometryEntryWithOdometryEntries:(const void *)a0 fenceRadius:(float)a1 shouldReturnNilIfNoCrossing:(BOOL)a2;
+ (BOOL)isCMOdometryAvailable;
+ (BOOL)isNPDROdometryAvailable;
+ (long long)runtimeOdometrySourceType;

- (void).cxx_destruct;
- (void)stopBackgroundUpdates;
- (void)_addAlignmentAngleToBuffer:(id)a0 errorEstimate:(id)a1 timestamp:(id)a2;
- (BOOL)_checkIfExitedBubble;
- (id)_getTimestampFromState:(id)a0;
- (void)_resetPosition;
- (void)_resetTrajectory;
- (void)_updateAlignmentAngle;
- (void)_updatePosition:(id)a0;
- (void)didReceiveOdometryProviderStateIsAvailable:(BOOL)a0;
- (void)didReceiveOdometryUpdate:(id)a0 withError:(id)a1;
- (id)initWithQueue:(id)a0 odometrySourceType:(long long)a1 delegate:(id)a2;
- (void)startBackgroundUpdates;

@end
