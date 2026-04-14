@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, AFUserNotificationAnnouncementSpeakingStateDelegate;

@interface AFUserNotificationAnnouncementSpeakingStateObserver : NSObject <AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    id<AFUserNotificationAnnouncementSpeakingStateDelegate> _delegate;
    NSMutableSet *_observingNotifications;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_tearDown;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void)_startObservingNotificationWithRequestIdentifier:(id)a0;
- (void)_removeObserverForNotificationRequestIdentifier:(id)a0;
- (void)_receivedNotificationForSpeakingStateChange:(id)a0;
- (void)receivedNotificationForSpeakingStateChange:(id)a0;
- (void)startObservingNotificationWithRequestIdentifier:(id)a0;
- (void)stopObservingNotificationWithRequestIdentifier:(id)a0;

@end
