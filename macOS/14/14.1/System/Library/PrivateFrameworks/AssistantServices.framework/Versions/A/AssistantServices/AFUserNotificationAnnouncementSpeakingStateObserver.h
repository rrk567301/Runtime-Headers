@class NSString, NSXPCConnection, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, AFUserNotificationAnnouncementSpeakingStateDelegate;

@interface AFUserNotificationAnnouncementSpeakingStateObserver : NSObject <AFUserNotificationAnnouncementSpeakingStateServiceDelegate, AFInvalidating> {
    NSObject<OS_dispatch_queue> *_queue;
    id<AFUserNotificationAnnouncementSpeakingStateDelegate> _delegate;
    NSMutableSet *_observingNotifications;
    NSXPCConnection *_connection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_connection;
- (void)connectionInterrupted;
- (void)_tearDown;
- (void)connectionInvalidated;
- (id)_currentConnection;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void)_cleanUpConnection;
- (void)_notifyObserverOfFailureForAllObservingNotifications;
- (void)_removeObserverForNotificationRequestIdentifier:(id)a0;
- (void)_speakingStateDidChange:(long long)a0 forIdentifiers:(id)a1;
- (void)_startObservingNotificationWithRequestIdentifier:(id)a0;
- (void)cleanUpConnection;
- (void)speakingStateDidChange:(long long)a0 forIdentifiers:(id)a1;
- (void)startObservingNotificationWithRequestIdentifier:(id)a0;
- (void)stopObservingNotificationWithRequestIdentifier:(id)a0;

@end
