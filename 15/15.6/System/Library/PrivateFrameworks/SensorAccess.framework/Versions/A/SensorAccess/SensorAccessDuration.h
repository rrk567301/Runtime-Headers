@class NSString;

@interface SensorAccessDuration : NSObject

@property (nonatomic) void /* unknown type, empty encoding */ remainingMicrophoneDurationNanoSeconds;
@property (nonatomic) void /* unknown type, empty encoding */ remainingCameraDurationNanoSeconds;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (id)init:(unsigned long long)a0 :(unsigned long long)a1;

@end
