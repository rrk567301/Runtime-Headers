@class NCNotificationDestinationsRegistry, NSString, NCNotificationRequest, NCNotificationCollapsingQueue, BSServiceConnectionEndpoint;
@protocol NCNotificationAlertDestinationDelegate;

@interface NCNotificationAlertQueue : NSObject <NCNotificationAlertDestinationDelegate, NCNotificationAlertDestination>

@property (retain, nonatomic) NCNotificationCollapsingQueue *queue;
@property (retain, nonatomic) NCNotificationRequest *coalescingRequest;
@property (retain, nonatomic) NCNotificationDestinationsRegistry *destinationsRegistry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NCNotificationAlertDestinationDelegate> delegate;
@property (readonly, nonatomic, getter=isAlertDestination) char alertDestination;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BSServiceConnectionEndpoint *endpoint;

- (id)init;
- (void).cxx_destruct;
- (void)registerDestination:(id)a0;
- (void)unregisterDestination:(id)a0;
- (id)notificationSectionSettingsForDestination:(id)a0 forSectionIdentifier:(id)a1;
- (char)_destinations:(id)a0 canReceiveNotificationRequest:(id)a1;
- (char)_performDestinationOperationForRequest:(id)a0 block:(id /* block */)a1;
- (void)_postEnqueuedNotificationRequestsCoalescingWith:(id)a0;
- (void)_postNextNotificationRequest;
- (void)_postNextNotificationRequestPassingTest:(id /* block */)a0;
- (char)_postNotificationRequest:(id)a0;
- (void)_prepareDestinationsToReceiveCriticalNotificationRequest:(id)a0;
- (char)_readyToReceiveForNotificationRequest:(id)a0;
- (char)canReceiveNotificationRequest:(id)a0;
- (void)destination:(id)a0 didBecomeReadyToReceiveNotificationsCoalescedWith:(id)a1;
- (void)destination:(id)a0 didBecomeReadyToReceiveNotificationsPassingTest:(id /* block */)a1;
- (void)destination:(id)a0 didDismissNotificationRequest:(id)a1;
- (void)destination:(id)a0 didPresentNotificationRequest:(id)a1;
- (void)destination:(id)a0 executeAction:(id)a1 forNotificationRequest:(id)a2 requestAuthentication:(char)a3 withParameters:(id)a4 completion:(id /* block */)a5;
- (void)destination:(id)a0 requestPermissionToExecuteAction:(id)a1 forNotificationRequest:(id)a2 withParameters:(id)a3 completion:(id /* block */)a4;
- (void)destination:(id)a0 requestsClearingNotificationRequests:(id)a1;
- (void)destination:(id)a0 requestsClearingNotificationRequests:(id)a1 fromDestinations:(id)a2;
- (void)destination:(id)a0 requestsClearingNotificationRequestsFromDate:(id)a1 toDate:(id)a2 inSections:(id)a3;
- (void)destination:(id)a0 requestsClearingNotificationRequestsInSections:(id)a1;
- (void)destination:(id)a0 setAllowsCriticalAlerts:(char)a1 forSectionIdentifier:(id)a2;
- (void)destination:(id)a0 setAllowsDirectMessages:(char)a1 forSectionIdentifier:(id)a2;
- (void)destination:(id)a0 setAllowsNotifications:(char)a1 forSectionIdentifier:(id)a2;
- (void)destination:(id)a0 setAllowsTimeSensitive:(char)a1 forSectionIdentifier:(id)a2;
- (void)destination:(id)a0 setDeliverQuietly:(char)a1 forSectionIdentifier:(id)a2;
- (void)destination:(id)a0 setMuted:(char)a1 untilDate:(id)a2 forSectionIdentifier:(id)a3 threadIdentifier:(id)a4;
- (void)destination:(id)a0 setNotificationSystemSettings:(id)a1;
- (void)destination:(id)a0 setScheduledDelivery:(char)a1 forSectionIdentifier:(id)a2;
- (void)destination:(id)a0 setSystemScheduledDeliveryEnabled:(char)a1 scheduledDeliveryTimes:(id)a2;
- (void)destination:(id)a0 willDismissNotificationRequest:(id)a1;
- (void)destination:(id)a0 willPresentNotificationRequest:(id)a1;
- (void)destination:(id)a0 willPresentNotificationRequest:(id)a1 suppressAlerts:(char)a2;
- (void)destinationDidBecomeReadyToReceiveNotifications:(id)a0;
- (id)destinationsForRequestDestinations:(id)a0;
- (char)isRegisteredDestination:(id)a0;
- (void)modifyNotificationRequest:(id)a0;
- (id)notificationSectionSettingsForDestination:(id)a0;
- (id)notificationSystemSettingsForDestination:(id)a0;
- (void)postNotificationRequest:(id)a0;
- (void)setDestination:(id)a0 enabled:(char)a1;
- (void)setDestination:(id)a0 ready:(char)a1;
- (void)updateNotificationSectionSettings:(id)a0 previousSectionSettings:(id)a1;
- (void)withdrawNotificationRequest:(id)a0;

@end
