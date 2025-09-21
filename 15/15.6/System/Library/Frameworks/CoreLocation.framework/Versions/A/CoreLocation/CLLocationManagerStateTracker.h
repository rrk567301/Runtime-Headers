@interface CLLocationManagerStateTracker : CLStateTracker {
    struct _CLLocationManagerStateTrackerState { double distanceFilter; double desiredAccuracy; char updatingLocation; char requestingLocation; char updatingHeading; double headingFilter; char allowsLocationPrompts; char allowsAlteredAccessoryLocations; char dynamicAccuracyReductionEnabled; char previousAuthorizationStatusValid; int previousAuthorizationStatus; char limitsPrecision; long long activityType; int pausesLocationUpdatesAutomatically; char paused; char allowsBackgroundLocationUpdates; char showsBackgroundLocationIndicator; char allowsMapCorrection; char batchingLocation; char updatingVehicleSpeed; char updatingVehicleHeading; char matchInfoEnabled; char groundAltitudeEnabled; char fusionInfoEnabled; char courtesyPromptNeeded; char isAuthorizedForWidgetUpdates; char trackRunInfoEnabled; } _state;
    void *_identifier;
    char _inTransaction;
}

@property (nonatomic) double distanceFilter;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) char updatingLocation;
@property (nonatomic) char requestingLocation;
@property (nonatomic) char updatingHeading;
@property (nonatomic) double headingFilter;
@property (nonatomic) char allowsLocationPrompts;
@property (nonatomic) char allowsAlteredAccessoryLocations;
@property (nonatomic) char dynamicAccuracyReductionEnabled;
@property (nonatomic) char previousAuthorizationStatusValid;
@property (nonatomic) int previousAuthorizationStatus;
@property (nonatomic) char limitsPrecision;
@property (nonatomic) long long activityType;
@property int pausesLocationUpdatesAutomatically;
@property (nonatomic) char paused;
@property (nonatomic) char allowsBackgroundLocationUpdates;
@property (nonatomic) char showsBackgroundLocationIndicator;
@property (nonatomic) char allowsMapCorrection;
@property (nonatomic) char batchingLocation;
@property (nonatomic) char updatingVehicleSpeed;
@property (nonatomic) char updatingVehicleHeading;
@property (nonatomic) char matchInfoEnabled;
@property (nonatomic) char groundAltitudeEnabled;
@property (nonatomic) char fusionInfoEnabled;
@property (nonatomic) char courtesyPromptNeeded;
@property (nonatomic) char isAuthorizedForWidgetUpdates;
@property (nonatomic) char trackRunInfoEnabled;

+ (unsigned long long)trackerStateSize;
+ (const char *)trackerStateTypeName;

- (void)dealloc;
- (void *)identifier;
- (id)initWithQueue:(id)a0 identifier:(void *)a1 state:(id /* block */)a2;
- (char)dumpState:(void *)a0 withSize:(unsigned long long)a1 hints:(struct os_state_hints_s { unsigned int x0; char *x1; unsigned int x2; unsigned int x3; } *)a2;
- (id)initInSilo:(id)a0 withIdentifier:(void *)a1;
- (id)initInSilo:(id)a0 withIdentifier:(void *)a1 state:(id /* block */)a2;
- (id)initWithQueue:(id)a0 identifier:(void *)a1;
- (void)updateState:(id /* block */)a0;

@end
