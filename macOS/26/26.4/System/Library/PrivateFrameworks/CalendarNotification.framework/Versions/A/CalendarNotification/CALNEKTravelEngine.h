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

- (void)receivedAlarmNamed:(id)a0;
- (void)didRegisterForAlarms;
- (void)protectedDataDidBecomeAvailable;
- (void)requestHypothesisRefreshAtDate:(id)a0 forEventWithExternalURL:(id)a1;
- (void)sendFeedbackForPostingLeaveByNotificationForEventWithExternalURL:(id)a0;
- (void)receivedNotificationNamed:(id)a0;
- (void)ceaseMonitoringForEventWithExternalURL:(id)a0;
- (void)activate;
- (void)cancelHypothesisRefreshRequestForEventWithExternalURL:(id)a0;
- (void)deactivate;
- (void)sendFeedbackForPostingLeaveNowNotificationForEventWithExternalURL:(id)a0;
- (id)initWithTravelEngine:(id)a0;
- (id /* block */)_authorizationChangedBlock;
- (id /* block */)_eventSignficantlyChangedBlock;
- (void).cxx_destruct;
- (id /* block */)_adviceReceivedBlock;

@end
