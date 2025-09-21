@class NSString;

@interface SensorAccessDuration : NSObject

@property (nonatomic) unsigned long long remainingMicrophoneDurationNanoSeconds;
@property (nonatomic) unsigned long long remainingCameraDurationNanoSeconds;
@property (nonatomic) unsigned long long remainingFaceIDDurationNanoSeconds;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (id)init:(unsigned long long)a0 :(unsigned long long)a1 :(unsigned long long)a2;

@end
