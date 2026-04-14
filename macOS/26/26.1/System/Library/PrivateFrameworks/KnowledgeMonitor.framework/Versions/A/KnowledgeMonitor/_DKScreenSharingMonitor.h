@class AVOutputContext, BMScreenSharingStream;

@interface _DKScreenSharingMonitor : _DKMonitor

@property (retain, nonatomic) AVOutputContext *outputContext;
@property (retain, nonatomic) BMScreenSharingStream *screenSharingStream;
@property (nonatomic) long long currentMirroringDeviceCount;

+ (id)entitlements;
+ (id)eventStream;

- (void)start;
- (void)mirroringDidChange:(id)a0;
- (void)registerForScreenMirroringNotifications;
- (void)deactivate;
- (void)stop;
- (void).cxx_destruct;
- (id)init;

@end
