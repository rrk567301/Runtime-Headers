@class EKTravelEngine, NSString;
@protocol CALNTravelEngineDelegate;

@interface CALNEKTravelEngine : NSObject <CALNTravelEngine, CADModule>

@property (readonly, nonatomic) EKTravelEngine *travelEngine;
@property (nonatomic, getter=isActive) BOOL active;
@property (weak, nonatomic) id<CALNTravelEngineDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)protectedDataDidBecomeAvailable;
- (void)didRegisterForAlarms;
- (void)ceaseMonitoringForEventWithExternalURL:(id)a0;
- (void)receivedAlarmNamed:(id)a0;
- (void)receivedNotificationNamed:(id)a0;
- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)a0;
- (id /* block */)_eventSignficantlyChangedBlock;
- (void)deactivate;
- (id /* block */)_authorizationChangedBlock;
- (void)activate;
- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)a0;
- (id /* block */)_adviceReceivedBlock;
- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)a0;
- (id)initWithTravelEngine:(id)a0;
- (void).cxx_destruct;
- (void)requestHypothesisRefreshAtDate:(id)a0 forEventWithExternalURL:(id)a1;

@end
