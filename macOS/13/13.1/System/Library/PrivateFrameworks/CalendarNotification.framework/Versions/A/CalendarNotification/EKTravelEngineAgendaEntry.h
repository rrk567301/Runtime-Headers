@class NSData, EKTravelEngineHypothesis, NSString, CalGeocoder, EKTravelEngineOriginalEvent, EKTravelEngineThrottle, NSObject, CLLocation;
@protocol OS_dispatch_queue, CALNRouteHypothesizerProvider, CALNRouteHypothesizer;

@interface EKTravelEngineAgendaEntry : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) EKTravelEngineOriginalEvent *originalEventInternal;
@property (retain, nonatomic) EKTravelEngineThrottle *throttle;
@property (retain, nonatomic) CalGeocoder *geocoder;
@property (readonly, nonatomic) id<CALNRouteHypothesizerProvider> hypothesizerProvider;
@property (retain, nonatomic) id<CALNRouteHypothesizer> hypothesizer;
@property (retain, nonatomic) EKTravelEngineHypothesis *latestHypothesis;
@property (retain, nonatomic) CLLocation *geoLocation;
@property (retain, nonatomic) NSData *mapKitHandle;
@property (nonatomic) BOOL geocodedEventEncountered;
@property (nonatomic) BOOL hypothesizerSentAtLeastOneHypothesis;
@property (nonatomic) long long travelTimeThresholdExceededState;
@property (nonatomic) double maximumTravelDurationEncountered;
@property (retain, nonatomic) NSString *agendaEntryIdentifier;
@property (readonly, nonatomic) EKTravelEngineOriginalEvent *originalEvent;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (copy, nonatomic) id /* block */ entrySignificantlyChangedBlock;
@property (nonatomic) BOOL dismissed;

+ (double)fuzzyMaximumInitialUpdateIntervalBeforeStartDate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (void)receivedAlarmNamed:(id)a0;
- (id)initWithRouteHypothesizerProvider:(id)a0;
- (void)updateHypothesizerIfNecessaryWithOriginalEvent:(id)a0;
- (void)_hypothesisRefreshTimerFired;
- (void)_requestHypothesisRefreshTimerFired;
- (void)_emissionHypothesisRefreshTimerFired;
- (void)requestHypothesisRefreshAtDate:(id)a0;
- (void)cancelHypothesisRefreshRequest;
- (void)cancelEmissionHypothesisRefresh;
- (void)createAlarmWithName:(id)a0 atDate:(id)a1;
- (void)removeAlarmWithName:(id)a0;
- (void)_createHypothesisRequestRefreshTimerWithDate:(id)a0;
- (void)_uninstallRequestHypothesisRefreshTimer;
- (void)_createEmissionHypothesisRefreshTimerWithDate:(id)a0;
- (void)_uninstallEmissionHypothesisRefreshTimer;
- (void)sendFeedbackForPostingLeaveByNotification;
- (void)sendFeedbackForPostingLeaveNowNotification;
- (void)_accountForGeocodedEventEncounter;
- (void)_trackTTLCandidateEvent:(id)a0;
- (void)_updateTravelTimeExceededThresholdStateUsingExceededValue:(BOOL)a0;
- (void)_performAnalyticsPostProcessing;
- (id)requestHypothesisRefreshAlarmName;
- (id)emissionHypothesisRefreshAlarmName;
- (void)_sendFeedbackToHypothesizerForPostingNotification:(unsigned long long)a0;
- (void)_clearEverything;
- (void)_enhanceLocation;
- (void)_setUpRouteMonitoring;
- (id)_generateDestination;
- (id)_createSyntheticHypothesis;
- (void)_createHypothesizerForDestination:(id)a0;
- (void)_updateWithHypothesis:(id)a0;

@end
