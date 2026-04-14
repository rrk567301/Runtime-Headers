@class AVOutputContext, BMScreenSharingStream;

@interface _DKScreenSharingMonitor : _DKMonitor

@property (retain, nonatomic) AVOutputContext *outputContext;
@property (retain, nonatomic) BMScreenSharingStream *screenSharingStream;
@property (nonatomic) long long currentMirroringDeviceCount;

+ (id)entitlements;
+ (id)eventStream;

- (void)start;
- (void)stop;
- (void)registerForScreenMirroringNotifications;
- (id)init;
- (void).cxx_destruct;
- (void)deactivate;
- (void)mirroringDidChange:(id)a0;

@end
