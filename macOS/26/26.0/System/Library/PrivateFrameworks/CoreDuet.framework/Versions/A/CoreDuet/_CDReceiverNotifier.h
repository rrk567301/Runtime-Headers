@class NSMutableDictionary, _CDXPCEventPublisher, BMSource, NSObject, BMStream;
@protocol OS_dispatch_queue;

@interface _CDReceiverNotifier : NSObject <_CDXPCEventPublisherDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    _CDXPCEventPublisher *_xpcPublisher;
    NSMutableDictionary *_subscribers;
    BOOL _isRootProcess;
    BMSource *_intentSource;
    BMSource *_activitySource;
    BMStream *_relevantShortcutsStream;
}

+ (id)sharedInstance;

- (void)addSubscriber:(id)a0;
- (id)init;
- (void)removeSubscriberWithToken:(unsigned long long)a0 streamName:(id)a1;
- (void)handleXPCNotificationEvent:(id)a0;
- (void).cxx_destruct;
- (void)_publishXPCEvent:(id)a0 uid:(unsigned int)a1;
- (void)publishXPCEventForAppIntents:(id)a0 appActivities:(id)a1 uid:(unsigned int)a2;
- (void)publishXPCEventForDeletedIntentGroupIdentifiers:(id)a0 bundleID:(id)a1 uid:(unsigned int)a2;
- (void)publishXPCEventForDeletedIntentIdentifiers:(id)a0 bundleID:(id)a1 uid:(unsigned int)a2;
- (void)publishXPCEventForRelevantShortcuts:(id)a0 bundleID:(id)a1 uid:(unsigned int)a2;

@end
