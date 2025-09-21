@class NSString;

@interface BWCameraAppLaunchAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) char isPrewarmed;
@property (copy, nonatomic) NSString *launchMode;
@property (nonatomic) int devicePosition;
@property (copy, nonatomic) NSString *prewarmReason;
@property (nonatomic) int launchDuration;
@property (nonatomic) int memoryStatusLevel;
@property (nonatomic) int thermalLevel;
@property (nonatomic) int ispStartDuration;
@property (nonatomic) int numberOfGraphStartsDuringLaunch;
@property (nonatomic) char deviceIsLocked;
@property (nonatomic) int deviceStolenDuration;
@property (nonatomic) int deviceStolenCondition;
@property (nonatomic) char isColdLaunch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)reset;
- (id)eventName;
- (id)eventDictionary;

@end
