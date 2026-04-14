@class NSString, PFStateCaptureEventLog, PFStateCaptureHandler;

@interface PLServerChangePublisher : NSObject <PFStateCaptureProvider, PLChangePublisher> {
    _Atomic unsigned long long _postCount;
    _Atomic BOOL _hasPendingWatchNotification;
    _Atomic BOOL _suppressWatchNotification;
    PFStateCaptureEventLog *_eventLog;
    PFStateCaptureHandler *_stateHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)stateCaptureDictionary;
- (id)addEvent;
- (void)unpauseLaunchEventNotifications;
- (id)init;
- (void)_postWatchUpdateNotificationIfPending;
- (void)_postWatchUpdateNotificationIfNotPaused;
- (id)publishChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 debugEvent:(id)a2 transaction:(id)a3;
- (void)_postWatchUpdateNotification;
- (void).cxx_destruct;
- (void)distributeChangeEvent:(id)a0 debugEvent:(id)a1 transaction:(id)a2;
- (void)dealloc;
- (void)_postChangeHubNotification;
- (void)pauseLaunchEventNotifications;

@end
