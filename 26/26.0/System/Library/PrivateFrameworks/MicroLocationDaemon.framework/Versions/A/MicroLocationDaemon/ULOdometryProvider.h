@class NSUUID, NSDate, NSNumber, NSObject;
@protocol OS_dispatch_queue, ULOdometrySource;

@interface ULOdometryProvider : NSObject {
    id<ULOdometrySource> _odometrySource;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct ULOdometryProviderDelegate { void /* function */ **x0; } *delegate;
@property (retain, nonatomic) NSUUID *trajectoryUUID;
@property (retain, nonatomic) NSNumber *deltaPositionX;
@property (retain, nonatomic) NSNumber *deltaPositionY;
@property (retain, nonatomic) NSNumber *deltaPositionZ;
@property (retain, nonatomic) NSDate *previousStatusUpdateDate;
@property (nonatomic) long long odometrySourceType;

+ (struct optional<ULOdometryDO> { union { char x0; struct ULOdometryDO { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; float x1; float x2; float x3; struct time_point<cl::chrono::CFAbsoluteTimeClock, std::chrono::duration<long double>> { struct duration<long double, std::ratio<1>> { long double x0; } x0; } x4; id x5; long long x6; } x1; } x0; BOOL x1; })findFenceCrossingOdometryEntryWithOdometryEntries:(const void *)a0 fenceRadius:(float)a1 shouldReturnNilIfNoCrossing:(BOOL)a2;

- (void).cxx_destruct;
- (void)stopBackgroundUpdates;
- (BOOL)_checkIfExitedBubble;
- (void)_resetPosition;
- (void)_resetTrajectory;
- (void)_updatePosition:(id)a0;
- (void)didReceiveOdometryProviderStateIsAvailable:(BOOL)a0;
- (void)didReceiveOdometryUpdate:(id)a0 withError:(id)a1;
- (id)initWithQueue:(id)a0 odometrySourceType:(long long)a1 delegate:(struct ULOdometryProviderDelegate { void /* function */ **x0; } *)a2;
- (void)startBackgroundUpdates;

@end
