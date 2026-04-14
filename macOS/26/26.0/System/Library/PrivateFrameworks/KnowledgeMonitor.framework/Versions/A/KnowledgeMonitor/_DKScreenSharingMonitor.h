@class AVOutputContext, BMScreenSharingStream;

@interface _DKScreenSharingMonitor : _DKMonitor

@property (retain, nonatomic) AVOutputContext *outputContext;
@property (retain, nonatomic) BMScreenSharingStream *screenSharingStream;
@property (nonatomic) long long currentMirroringDeviceCount;

+ (id)entitlements;
+ (id)eventStream;

- (void)mirroringDidChange:(id)a0;
- (void)start;
- (void)stop;
- (id)init;
- (void)registerForScreenMirroringNotifications;
- (void)deactivate;
- (void).cxx_destruct;

@end
