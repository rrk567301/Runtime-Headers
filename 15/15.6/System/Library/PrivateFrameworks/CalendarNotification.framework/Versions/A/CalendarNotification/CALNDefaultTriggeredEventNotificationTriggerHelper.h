@class NSString;
@protocol CALNTravelAdvisoryAuthority, CalDateProvider;

@interface CALNDefaultTriggeredEventNotificationTriggerHelper : NSObject <CALNTriggeredEventNotificationTriggerHelper>

@property (readonly, nonatomic) id<CALNTravelAdvisoryAuthority> travelAdvisoryAuthority;
@property (readonly, nonatomic) id<CalDateProvider> dateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)_eventWillEndBeforeUserArrivesForHypothesis:(id)a0 eventEndDate:(id)a1;
- (char)_exceededMaximumTravelTimeThresholdForHypothesis:(id)a0;
- (char)_shouldTriggerForTimeToLeaveRefreshForSourceClientIdentifier:(id)a0 sourceNotificationInfo:(id)a1 oldNotificationData:(id)a2;
- (char)_shouldTriggerForTimeToLeaveRefreshGivenImmediateDepartureTimelinessStatusForSourceClientIdentifier:(id)a0 oldNotificationData:(id)a1;
- (char)_shouldTriggerForTravelAdviceReceivedForSourceClientIdentifier:(id)a0 sourceNotificationInfo:(id)a1 oldNotificationData:(id)a2;
- (char)_shouldTriggerForTravelAdviceReceivedGivenHasExistingNotificationDataForSourceClientIdentifier:(id)a0 hypothesis:(id)a1 sourceNotificationInfo:(id)a2 oldNotificationData:(id)a3 hasExistingTravelAdvice:(char)a4 satisfiesMinimumTravelTimeThreshold:(char)a5;
- (id)initWithTravelAdvisoryAuthority:(id)a0 dateProvider:(id)a1;
- (char)shouldTriggerForSourceClientIdentifier:(id)a0 trigger:(unsigned long long)a1 sourceNotificationInfo:(id)a2 oldNotificationData:(id)a3;

@end
