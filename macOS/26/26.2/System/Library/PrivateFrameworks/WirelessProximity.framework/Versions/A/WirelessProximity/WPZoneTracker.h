@protocol WPZoneTrackerDelegate;

@interface WPZoneTracker : WPClient

@property (weak, nonatomic) id<WPZoneTrackerDelegate> delegate;
@property (nonatomic) BOOL wantEntry;
@property (nonatomic) BOOL wantExit;

- (void)exitedZone:(id)a0;
- (void)invalidate;
- (void)stateDidChange:(long long)a0;
- (id)clientAsString;
- (void)registerForZoneChangesMatching:(id)a0;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void).cxx_destruct;
- (void)fetchedCurrentlyTrackedZones:(id)a0;
- (id)description;
- (void)failedToRegisterZones:(id)a0 withError:(id)a1;
- (void)enteredZone:(id)a0 manufacturerData:(id)a1;
- (void)getCurrentTrackedZones;
- (void)unregisterForZoneChanges:(id)a0;
- (void)unregisterAllZoneChanges;
- (id)initWithDelegate:(id)a0;

@end
