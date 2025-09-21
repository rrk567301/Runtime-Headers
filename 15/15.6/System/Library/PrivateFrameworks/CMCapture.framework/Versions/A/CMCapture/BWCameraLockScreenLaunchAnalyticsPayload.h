@class NSString;

@interface BWCameraLockScreenLaunchAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) char completed;
@property (nonatomic) char prewarmed;
@property (nonatomic) char ispStreamingStarted;
@property (nonatomic) int launchError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
