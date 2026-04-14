@class NSObject;
@protocol OS_dispatch_queue;

@interface CSMediaPlayingMonitor : CSEventMonitor {
    long long _mediaIsPlaying;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)initializeMediaPlayingState;
- (long long)mediaPlayingState;
- (void)mediaPlayingStateWithCompletion:(id /* block */)a0;

@end
