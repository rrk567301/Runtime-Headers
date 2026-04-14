@protocol WPZoneTrackerDelegate;

@interface WPZoneTracker : WPClient

@property (weak, nonatomic) id<WPZoneTrackerDelegate> delegate;
@property (nonatomic) BOOL wantEntry;
@property (nonatomic) BOOL wantExit;

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (id)clientAsString;
- (void)exitedZone:(id)a0;
- (void)stateDidChange:(long long)a0;
- (void)failedToRegisterZones:(id)a0 withError:(id)a1;
- (void)invalidate;
- (id)initWithDelegate:(id)a0;
- (void)getCurrentTrackedZones;
- (id)description;
- (void)unregisterForZoneChanges:(id)a0;
- (void)registerForZoneChangesMatching:(id)a0;
- (void).cxx_destruct;
- (void)fetchedCurrentlyTrackedZones:(id)a0;
- (void)unregisterAllZoneChanges;
- (void)enteredZone:(id)a0 manufacturerData:(id)a1;

@end
