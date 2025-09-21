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

- (id)provideFeatures;
- (id)initWithLocationManager:(id)a0;
- (void)stopListening;
- (void)dealloc;
- (id)initWithLocationManager:(id)a0 andMiloProvider:(id)a1;
- (void)_eventsDidChange:(id)a0;
- (void)_setFeaturesForEventsCurrentlyIn:(id)a0 now:(id)a1 featureSet:(id)a2;
- (BOOL)_shouldInitiateMicrolocationLocalizationWithMostRecentWorkEvent:(id)a0 upcomingWorkEvent:(id)a1 now:(id)a2;
- (void)_addTimerForDate:(id)a0;
- (BOOL)_shouldConsiderEventBasedOnParticipantStatus:(long long)a0;
- (BOOL)_shouldStayInWorkModeInBetweenMostRecentWorkEvent:(id)a0 andUpcomingWorkEvent:(id)a1;
- (void)_updateFeatures;
- (void)beginListening;
- (id)_fetchEligibleEventsForDay;
- (BOOL)_isDate:(id)a0 betweenStartDate:(id)a1 andEndDate:(id)a2;
- (void).cxx_destruct;

@end
