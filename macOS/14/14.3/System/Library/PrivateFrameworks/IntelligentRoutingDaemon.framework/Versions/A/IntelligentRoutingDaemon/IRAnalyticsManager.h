@class IRBackgroundActivitiesManager;

@interface IRAnalyticsManager : NSObject

@property (weak, nonatomic) IRBackgroundActivitiesManager *backgroundActivitiesManager;

+ (void)_AnalyticsSendEventLazyForEventIdentifier:(id)a0 clientIdentifier:(id)a1 analytics:(id)a2;
+ (BOOL)_isClientAllowedCA:(id)a0;
+ (void)logUiEvent:(id)a0 withService:(id)a1 forCandidateIdentifier:(id)a2 systemStateManager:(id)a3 candidatesContainer:(id)a4 inspections:(id)a5 statisticsManager:(id)a6 historyEventsContainer:(id)a7;

- (void).cxx_destruct;
- (void)_handleCoreAnalyticsXPCActivity;
- (id)initWithBackgroundActivitiesManager:(id)a0;

@end
