@class NSMutableDictionary;
@protocol HMDSiriEndpointOnboardingManagerDataSource;

@interface HMDSiriEndpointOnboardingManager : NSObject {
    NSMutableDictionary *_onboardingSelections;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak) id<HMDSiriEndpointOnboardingManagerDataSource> dataSource;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)applyOnboardingSelections:(id)a0 accessoryUUID:(id)a1 homeUUID:(id)a2 completion:(id /* block */)a3;
- (void)handleCompositeSettingsControllerConfigured:(id)a0;
- (void)handleAccessoryConfigured:(id)a0;
- (void)applyCachedOnboardingSelectionsWithAccessoryUUID:(id)a0 homeUUID:(id)a1;
- (void)_setNeedsOnboardingCompleteWitHomeUUID:(id)a0 accessoryUUID:(id)a1 completion:(id /* block */)a2;
- (BOOL)readyToApplyOnboardingSelectionsWithHomeUUID:(id)a0 accessoryUUID:(id)a1;

@end
