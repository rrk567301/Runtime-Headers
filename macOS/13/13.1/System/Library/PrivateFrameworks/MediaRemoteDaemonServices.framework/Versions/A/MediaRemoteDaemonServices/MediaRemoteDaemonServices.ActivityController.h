@class NSDictionary, NSString;

@interface MediaRemoteDaemonServices.ActivityController : NSObject

@property (class, nonatomic, readonly) BOOL deviceSupportsActivities;

@property (nonatomic, readonly) NSDictionary *currentActivityInfo;
@property (nonatomic, readonly) NSString *nowPlayingActivityIdentifier;

- (id)init;
- (void)clearActivities;
- (id)contextForActivityIdentifier:(id)a0;
- (void)startNowPlayingActivity;
- (void)endNowPlayingActivity;
- (void)startMirroringActivity;
- (void)endMirroringActivity;

@end
