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
- (void)_postWatchUpdateNotificationIfPending;
- (void)_postWatchUpdateNotificationIfNotPaused;
- (id)addEvent;
- (void)unpauseLaunchEventNotifications;
- (void)pauseLaunchEventNotifications;
- (void)_postChangeHubNotification;
- (void)_postWatchUpdateNotification;
- (void).cxx_destruct;
- (id)init;
- (void)distributeChangeEvent:(id)a0 debugEvent:(id)a1 transaction:(id)a2;
- (id)publishChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 debugEvent:(id)a2 transaction:(id)a3;
- (void)dealloc;

@end
