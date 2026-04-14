@class NSObject;
@protocol OS_dispatch_queue;

@interface CSMediaPlayingMonitor : CSEventMonitor {
    long long _mediaIsPlaying;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (long long)mediaPlayingState;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)initializeMediaPlayingState;
- (void)mediaPlayingStateWithCompletion:(id /* block */)a0;

@end
