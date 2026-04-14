@class NSMutableDictionary, _CDXPCEventPublisher, NSObject;
@protocol OS_dispatch_queue;

@interface _CDInteractionStoreNotifier : NSObject <_CDXPCEventPublisherDelegate> {
    int _notifierToken;
    NSObject<OS_dispatch_queue> *_queue;
    _CDXPCEventPublisher *_interactionRecordedEventPublisher;
    _CDXPCEventPublisher *_interactionDeletedEventPublisher;
    NSMutableDictionary *_interactionStoreRecordedEventSubscribersByToken;
    NSMutableDictionary *_interactionStoreDeletedEventSubscribersByToken;
    BOOL _isRootProcess;
}

+ (id)sharedInstance;

- (void)deleteAll;
- (void)postPackedMechanisms:(unsigned long long)a0;
- (void)resume;
- (void)suspend;
- (void)publishRecordedXPCEvent:(id)a0;
- (void)recorded:(id)a0;
- (id)filterInteractionsForUser:(id)a0;
- (void)publishDeletedXPCEvent:(id)a0;
- (void)addSubscriber:(id)a0;
- (void)dealloc;
- (void)handleXPCNotificationEvent:(id)a0;
- (void).cxx_destruct;
- (void)removeSubscriberWithToken:(unsigned long long)a0 streamName:(id)a1;
- (void)deleted:(id)a0;
- (id)init;

@end
