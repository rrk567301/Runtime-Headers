@class MTTimerManager, NSMutableDictionary, CADisplayLink;

@interface NTSTimerTimer : NSObject {
    CADisplayLink *_displayLink;
    NSMutableDictionary *_handlers;
    unsigned long long _nextToken;
    BOOL _appInForeground;
    MTTimerManager *_timerManager;
    BOOL _isObserving;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _timerLock;
    unsigned long long _updateErrorCount;
    BOOL _requestPending;
    BOOL _requestInProgress;
}

+ (id)sharedTimerTimer;

- (void)dealloc;
- (id)init;
- (void)_startObserving;
- (void)_stopObserving;
- (void)_tick:(id)a0;
- (void).cxx_destruct;
- (void)_updateTimer;
- (void)_withTimerLock:(id /* block */)a0;
- (void)_appForegrounded:(id)a0;
- (void)_invokeHandlers;
- (void)_appBackgrounded:(id)a0;
- (void)_endRequestWithError:(id)a0;
- (void)_modelStateChanged:(id)a0;
- (void)_modelStateReset:(id)a0;
- (void)_performPendingRequest;
- (void)_performRetry;
- (void)_updateTimerForRetry:(BOOL)a0;
- (id)startTimerUpdatesWithHandler:(id /* block */)a0;
- (void)stopTimerUpdatesForToken:(id)a0;

@end
