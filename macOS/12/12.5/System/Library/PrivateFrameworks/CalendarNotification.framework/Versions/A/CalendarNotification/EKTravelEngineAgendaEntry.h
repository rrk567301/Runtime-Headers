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

+ (void)_accountForHypothesizerSendingHypothesis;
+ (void)_accountForHypothesizerNeverHavingSentHypothesis;
+ (void)_accountForNoLocationEnhancementNeeded;
+ (void)_accountForGeocodingFailureWithError:(id)a0;
+ (void)_accountForLocationEnhancementSuccess;
+ (double)fuzzyMaximumInitialUpdateIntervalBeforeStartDate;

- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (void)_uninstallRequestHypothesisRefreshTimer;
- (void)_clearEverything;
- (void)_createEmissionHypothesisRefreshTimerWithDate:(id)a0;
- (void)cancelEmissionHypothesisRefresh;
- (void)_enhanceLocation;
- (void)_hypothesisRefreshTimerFired;
- (void)_uninstallEmissionHypothesisRefreshTimer;
- (void)_createHypothesisRequestRefreshTimerWithDate:(id)a0;
- (id)requestHypothesisRefreshBTAJobName;
- (void)createBTAJobWithName:(id)a0 atDate:(id)a1;
- (void)removeBTAJobWithName:(id)a0;
- (id)emissionHypothesisRefreshBTAJobName;
- (void)_performAnalyticsPostProcessing;
- (void)_sendFeedbackToHypothesizerForPostingNotification:(unsigned long long)a0;
- (void)_trackTTLCandidateEvent:(id)a0;
- (void)_accountForTravelDurationThresholdExceededState;
- (void)_accountForMaximumTravelDuration;
- (void)_requestHypothesisRefreshTimerFired:(id)a0;
- (void)_emissionHypothesisRefreshTimerFired;
- (void)_setUpRouteMonitoring;
- (id)_generateDestination;
- (id)_createSyntheticHypothesis;
- (void)_updateWithHypothesis:(id)a0;
- (void)_accountForGeocodedEventEncounter;
- (void)_createHypothesizerForDestination:(id)a0;
- (void)_updateTravelTimeExceededThresholdStateUsingExceededValue:(BOOL)a0;
- (id)initWithRouteHypothesizerProvider:(id)a0;
- (void)updateWithOriginalEvent:(id)a0;
- (void)requestHypothesisRefreshAtDate:(id)a0;
- (void)cancelHypothesisRefreshRequest;
- (void)sendFeedbackForPostingLeaveByNotification;
- (void)sendFeedbackForPostingLeaveNowNotification;
- (void)handleBTAJob:(id)a0 named:(const char *)a1;

@end
