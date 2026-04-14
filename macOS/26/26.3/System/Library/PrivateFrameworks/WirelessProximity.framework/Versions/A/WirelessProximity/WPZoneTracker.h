@protocol WPZoneTrackerDelegate;

@interface WPZoneTracker : WPClient

@property (weak, nonatomic) id<WPZoneTrackerDelegate> delegate;
@property (nonatomic) BOOL wantEntry;
@property (nonatomic) BOOL wantExit;

- (void)invalidate;
- (void)exitedZone:(id)a0;
- (void)stateDidChange:(long long)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)fetchedCurrentlyTrackedZones:(id)a0;
- (id)clientAsString;
- (id)initWithDelegate:(id)a0;
- (id)description;
- (void)getCurrentTrackedZones;
- (void)failedToRegisterZones:(id)a0 withError:(id)a1;
- (void)unregisterForZoneChanges:(id)a0;
- (void).cxx_destruct;
- (void)enteredZone:(id)a0 manufacturerData:(id)a1;
- (void)unregisterAllZoneChanges;
- (void)registerForZoneChangesMatching:(id)a0;

@end
