@class NSString;
@protocol EKEventStoreProvider, CALNEKCalendarNotificationReferenceProvider, CALNInboxNotificationProvider;

@interface CALNSuggestedEventNotificationEKDataSource : NSObject <CALNSuggestedEventNotificationDataSource>

@property (readonly, nonatomic) id<EKEventStoreProvider> eventStoreProvider;
@property (readonly, nonatomic) id<CALNInboxNotificationProvider> inboxNotificationProvider;
@property (readonly, nonatomic) id<CALNEKCalendarNotificationReferenceProvider> notificationReferenceProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_acknowledgeSuggestedEventWithSourceClientIdentifier:(id)a0 accept:(char)a1;
- (void)_clearSuggestedEventNotificationWithObjectID:(id)a0;
- (id)_eventForSourceClientIdentifier:(id)a0 eventStore:(id)a1;
- (id)_notificationInfoFromNotification:(id)a0 inEventStore:(id)a1;
- (void)clearSuggestedEventNotificationWithSourceClientIdentifier:(id)a0;
- (void)confirmSuggestedEventWithSourceClientIdentifier:(id)a0;
- (void)deleteCanceledSuggestedEventWithSourceClientIdentifier:(id)a0;
- (id)fetchSuggestedEventNotificationObjectIDs;
- (id)fetchSuggestedEventNotificationWithObjectID:(id)a0;
- (id)fetchSuggestedEventNotifications;
- (id)fetchSuggestedEventNotificationsWithSourceClientIdentifier:(id)a0;
- (void)ignoreSuggestedEventWithSourceClientIdentifier:(id)a0;
- (id)initWithEventStoreProvider:(id)a0 inboxNotificationProvider:(id)a1 notificationReferenceProvider:(id)a2;

@end
