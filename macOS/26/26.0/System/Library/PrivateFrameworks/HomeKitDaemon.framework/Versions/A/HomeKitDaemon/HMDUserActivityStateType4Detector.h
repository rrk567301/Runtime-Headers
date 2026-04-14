@class NSString, CLRegion, CLLocation, HMDLocation;

@interface HMDUserActivityStateType4Detector : HMDUserActivityStateDetector <HMDLocationDelegate>

@property (retain, nonatomic) CLLocation *homeLocation;
@property (readonly, nonatomic) HMDLocation *location;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) CLRegion *region;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (unsigned long long)contributorType;
+ (BOOL)supportsDataSource:(id)a0;

- (void)_registerForMessages;
- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)_userType4StateFromRegionState:(long long)a0;
- (void)_handleHomeLocationChangedNotification:(id)a0;
- (void)_updateLocationAuthorization:(long long)a0 withReason:(unsigned long long)a1 notifyDelegate:(BOOL)a2;
- (void)_updateState:(unsigned long long)a0 withReason:(unsigned long long)a1 notifyDelegate:(BOOL)a2;
- (void)configureWithCompletion:(id /* block */)a0;
- (void)deregisterForRegionUpdates;
- (void)didDetermineState:(long long)a0 forRegion:(id)a1;
- (void)handleLocationAuthorizationChange:(long long)a0;
- (id)initWithDataSource:(id)a0 location:(id)a1;
- (void)registerForRegionUpdates;

@end
