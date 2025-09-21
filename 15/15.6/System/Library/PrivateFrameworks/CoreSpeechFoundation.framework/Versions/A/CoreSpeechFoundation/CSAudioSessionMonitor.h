@class NSString;

@interface CSAudioSessionMonitor : CSEventMonitor <CSAudioSessionEventProvidingDelegate>

@property (nonatomic, getter=getAudioSessionState) unsigned long long audioSessionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)audioSessionEventProvidingDidSetAudioSessionActive:(char)a0;
- (void)audioSessionEventProvidingWillSetAudioSessionActive:(char)a0;
- (id)initWithCrashMonitor:(id)a0;

@end
