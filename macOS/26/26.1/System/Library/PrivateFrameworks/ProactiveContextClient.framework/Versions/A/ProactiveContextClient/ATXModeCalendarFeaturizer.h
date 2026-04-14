@class NSString, EKEventStore, _PASSimpleCoalescingTimer, NSHashTable;
@protocol ATXModeFeaturizerDelegate;

@interface ATXModeCalendarFeaturizer : NSObject <ATXModeFeaturizer> {
    NSHashTable *_timers;
    _PASSimpleCoalescingTimer *_featureUpdateTimer;
    EKEventStore *_eventStore;
}

@property (nonatomic) BOOL calendarRefreshCoalesceTimerIsEnabled;
@property (weak, nonatomic) id<ATXModeFeaturizerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isCalendarLikelyWork:(id)a0;

- (void)stopListening;
- (id)provideFeatures;
- (void)_updateFeatures;
- (void)beginListening;
- (id)initWithLocationManager:(id)a0 andMiloProvider:(id)a1;
- (void)_setFeaturesForEventsCurrentlyIn:(id)a0 now:(id)a1 featureSet:(id)a2;
- (BOOL)_shouldStayInWorkModeInBetweenMostRecentWorkEvent:(id)a0 andUpcomingWorkEvent:(id)a1;
- (id)initWithLocationManager:(id)a0;
- (BOOL)_isDate:(id)a0 betweenStartDate:(id)a1 andEndDate:(id)a2;
- (void)dealloc;
- (BOOL)_shouldConsiderEventBasedOnParticipantStatus:(long long)a0;
- (void).cxx_destruct;
- (id)_fetchEligibleEventsForDay;
- (void)_addTimerForDate:(id)a0;
- (void)_eventsDidChange:(id)a0;
- (BOOL)_shouldInitiateMicrolocationLocalizationWithMostRecentWorkEvent:(id)a0 upcomingWorkEvent:(id)a1 now:(id)a2;

@end
