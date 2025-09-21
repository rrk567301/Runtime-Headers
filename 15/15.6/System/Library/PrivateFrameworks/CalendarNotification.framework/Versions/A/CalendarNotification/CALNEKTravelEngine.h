@class EKTravelEngine, NSString;
@protocol CALNTravelEngineDelegate;

@interface CALNEKTravelEngine : NSObject <CALNTravelEngine, CADModule>

@property (readonly, nonatomic) EKTravelEngine *travelEngine;
@property (nonatomic, getter=isActive) char active;
@property (weak, nonatomic) id<CALNTravelEngineDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)activate;
- (void)deactivate;
- (void)protectedDataDidBecomeAvailable;
- (id /* block */)_adviceReceivedBlock;
- (id /* block */)_authorizationChangedBlock;
- (id /* block */)_eventSignficantlyChangedBlock;
- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)a0;
- (void)ceaseMonitoringForEventWithExternalURL:(id)a0;
- (void)didRegisterForAlarms;
- (id)initWithTravelEngine:(id)a0;
- (void)receivedAlarmNamed:(id)a0;
- (void)receivedNotificationNamed:(id)a0;
- (void)requestHypothesisRefreshAtDate:(id)a0 forEventWithExternalURL:(id)a1;
- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)a0;
- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)a0;

@end
