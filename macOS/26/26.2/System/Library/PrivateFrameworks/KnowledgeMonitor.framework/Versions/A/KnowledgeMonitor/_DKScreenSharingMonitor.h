@class AVOutputContext, BMScreenSharingStream;

@interface _DKScreenSharingMonitor : _DKMonitor

@property (retain, nonatomic) AVOutputContext *outputContext;
@property (retain, nonatomic) BMScreenSharingStream *screenSharingStream;
@property (nonatomic) long long currentMirroringDeviceCount;

+ (id)entitlements;
+ (id)eventStream;

- (void)stop;
- (void).cxx_destruct;
- (void)start;
- (void)registerForScreenMirroringNotifications;
- (void)mirroringDidChange:(id)a0;
- (id)init;
- (void)deactivate;

@end
