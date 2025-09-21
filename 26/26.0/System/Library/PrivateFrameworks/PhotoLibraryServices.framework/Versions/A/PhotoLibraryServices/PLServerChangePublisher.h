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

- (void)_postWatchUpdateNotification;
- (void)_postWatchUpdateNotificationIfNotPaused;
- (id)stateCaptureDictionary;
- (id)publishChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 debugEvent:(id)a2 transaction:(id)a3;
- (void)unpauseLaunchEventNotifications;
- (void)dealloc;
- (void)pauseLaunchEventNotifications;
- (void)distributeChangeEvent:(id)a0 debugEvent:(id)a1 transaction:(id)a2;
- (id)init;
- (void)_postChangeHubNotification;
- (void)_postWatchUpdateNotificationIfPending;
- (void).cxx_destruct;
- (id)addEvent;

@end
