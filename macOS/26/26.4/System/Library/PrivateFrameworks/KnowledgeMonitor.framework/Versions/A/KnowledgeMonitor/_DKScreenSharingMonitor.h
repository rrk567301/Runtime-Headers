@class AVOutputContext, BMScreenSharingStream;

@interface _DKScreenSharingMonitor : _DKMonitor

@property (retain, nonatomic) AVOutputContext *outputContext;
@property (retain, nonatomic) BMScreenSharingStream *screenSharingStream;
@property (nonatomic) long long currentMirroringDeviceCount;

+ (id)eventStream;
+ (id)entitlements;

- (void)stop;
- (void)registerForScreenMirroringNotifications;
- (void)deactivate;
- (void).cxx_destruct;
- (id)init;
- (void)mirroringDidChange:(id)a0;
- (void)start;

@end
