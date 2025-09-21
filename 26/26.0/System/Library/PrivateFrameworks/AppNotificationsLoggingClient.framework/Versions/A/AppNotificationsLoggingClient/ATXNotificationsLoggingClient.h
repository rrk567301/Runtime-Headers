@class NSXPCConnection, _PASSimpleCoalescingTimer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ATXNotificationsLoggingClient : NSObject <ATXNotificationsLoggingProtocol> {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_activeSuggestionsRequests;
    _PASSimpleCoalescingTimer *_coalescingTimer;
}

+ (id)sharedInstance;

- (void)logNotificationGroupEvent:(long long)a0 eventIdentifier:(id)a1;
- (void)dealloc;
- (void)logNotificationDeliveryUI:(unsigned long long)a0 notificationUUIDs:(id)a1;
- (void)activeSuggestionsWithReply:(id /* block */)a0;
- (void)logRealTimeTuningCountFrom:(unsigned long long)a0;
- (id)init;
- (void)logNotificationEvent:(long long)a0 notification:(id)a1 reason:(unsigned long long)a2 interactionUI:(unsigned long long)a3;
- (void)logRealTimeTuningOutcome:(unsigned long long)a0 withBundleId:(id)a1;
- (void)logNotificationEvent:(long long)a0 notification:(id)a1;
- (void)logSuggestionEvent:(long long)a0 suggestionType:(long long)a1 suggestionIdentifier:(id)a2 timestamp:(id)a3;
- (void)logNotificationGroupEvent:(long long)a0 eventIdentifier:(id)a1 timestamp:(id)a2;
- (void)_processActiveSuggestionsRequests;
- (void)logNotificationEvent:(long long)a0 notification:(id)a1 reason:(unsigned long long)a2;
- (void).cxx_destruct;

@end
