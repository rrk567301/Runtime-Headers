@class NSString, NSArray, GEODirectionsFeedbackLogMessage, NSMutableArray, GEOLatLng, GEOLocation, GEODirectionsFeedback, NSNumber;

@interface GEODirectionsFeedbackCollector : NSObject {
    double _currentDirectionsModeStartTime;
    NSMutableArray *_navigationModes;
    double _originalExpectedTime;
    GEOLatLng *_tripOrigin;
    char _wasEverConnectedToCarplay;
    char _hasEnteredPreArrivalMode;
    NSNumber *_isVLFImprovementUsed;
    NSNumber *_arWalkingUsedInRoutePlanning;
    NSNumber *_arWalkingUsedInNavigation;
    char _chargingStopAdded;
    char _isCoarseLocationUsed;
    int _voiceGuidanceLevel;
    int _transportType;
    NSNumber *_isHandsFreeProfileUsed;
}

@property (retain, nonatomic) GEODirectionsFeedbackLogMessage *currentFeedbackLogMessage;
@property (retain, nonatomic) GEODirectionsFeedback *currentDirectionsFeedback;
@property (readonly, nonatomic) char hasActiveFeedbackSession;
@property (nonatomic) char isEVRoute;
@property (nonatomic) char batteryDied;
@property (nonatomic) char isBadEvExperience;
@property (retain, nonatomic) NSNumber *stateOfChargeAtOrigin;
@property (retain, nonatomic) NSNumber *stateOfChargeAtDestPredicted;
@property (retain, nonatomic) NSNumber *stateOfChargeAtDestActual;
@property (retain, nonatomic) NSArray *waypoints;
@property (retain, nonatomic) NSString *evConsumptionModel;
@property (retain, nonatomic) NSString *evChargingModel;
@property (nonatomic) double timeBetweenParkedAndArrival;
@property (nonatomic) unsigned long long arrivedAtDestinationCount;
@property (nonatomic) unsigned long long inParkingModeCount;
@property (nonatomic) char enteredParkingMode;
@property (nonatomic) char didSuggestWalkingRoute;
@property (nonatomic) char userDidAcceptWalkingRoute;
@property (nonatomic) char didSuggestFindMy;
@property (nonatomic) char userDidLaunchFindMy;
@property (nonatomic) long long endReason;
@property (retain, nonatomic) GEOLocation *parkingDetectionLocation;
@property (retain, nonatomic) GEOLocation *arrivalLocation;

- (void)dealloc;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)setTransportType:(int)a0;
- (char)_canSampleBadEvTrip;
- (void)_updateFeedbackSessionWithResponseID:(id)a0;
- (void)addAlightNotificationFeedback:(id)a0;
- (void)addGuidanceEventFeedback:(id)a0;
- (void)addRouteID:(id)a0 routeIndex:(unsigned int)a1 stepID:(unsigned int)a2 completeStep:(char)a3;
- (void)addStepFeedback:(id)a0;
- (void)addTrafficRerouteFeedback:(id)a0;
- (void)changeNavigationType:(int)a0;
- (void)endFeedbackSessionWithTracePath:(id)a0;
- (void)setARWalkingUsedInNavigation:(char)a0;
- (void)setARWalkingUsedInRoutePlanning:(char)a0;
- (void)setAudioFeedback:(struct GEONavigationAudioFeedback { char x0; char x1; char x2; int x3; char x4; char x5; char x6; char x7; char x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12; unsigned int x13; char x14; char x15; char x16; char x17; struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; unsigned char x6 : 1; unsigned char x7 : 1; unsigned char x8 : 1; unsigned char x9 : 1; unsigned char x10 : 1; unsigned char x11 : 1; unsigned char x12 : 1; unsigned char x13 : 1; unsigned char x14 : 1; unsigned char x15 : 1; unsigned char x16 : 1; unsigned char x17 : 1; } x18; } *)a0;
- (void)setChargingStopAdded:(char)a0;
- (void)setFinalLocation:(id)a0 asArrival:(char)a1;
- (void)setHasEnteredPreArrivalMode:(char)a0;
- (void)setIsCoarseLocationUsed:(char)a0;
- (void)setIsHandsFreeProfileUsed:(char)a0;
- (void)setIsVLFImprovementUsed:(char)a0;
- (void)setModalities:(id)a0;
- (void)setOriginalExpectedTime:(double)a0;
- (void)setTripOrigin:(id)a0;
- (void)setVoiceGuidanceLevel:(int)a0;
- (void)setWasEverConnectedToCarplay:(char)a0;
- (void)setupFeedbackSessionWithResponseID:(id)a0;
- (void)startFeedbackSessionForResponseID:(id)a0 withNavigationType:(int)a1;

@end
