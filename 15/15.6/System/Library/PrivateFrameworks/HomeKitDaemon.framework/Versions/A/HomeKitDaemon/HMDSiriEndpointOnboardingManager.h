@class NSMutableDictionary;
@protocol HMDSiriEndpointOnboardingManagerDataSource;

@interface HMDSiriEndpointOnboardingManager : NSObject {
    NSMutableDictionary *_onboardingSelections;
    NSMutableDictionary *_onboardingUserUUID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak) id<HMDSiriEndpointOnboardingManagerDataSource> dataSource;

- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;
- (void)_applyOnboardingSelections:(id)a0 accessoryUUID:(id)a1 homeUUID:(id)a2 userUUID:(id)a3 cacheKey:(id)a4 completion:(id /* block */)a5;
- (void)_enableUserListeningHistoryForHomeUUID:(id)a0 accessoryUUID:(id)a1 userUUID:(id)a2;
- (void)_setNeedsOnboardingCompleteWitHomeUUID:(id)a0 accessoryUUID:(id)a1 completion:(id /* block */)a2;
- (void)applyCachedOnboardingSelectionsWithAccessoryUUID:(id)a0 homeUUID:(id)a1;
- (void)applyOnboardingSelections:(id)a0 accessoryUUID:(id)a1 homeUUID:(id)a2 userUUID:(id)a3 completion:(id /* block */)a4;
- (void)handleAccessoryConfigured:(id)a0;
- (void)handleCompositeSettingsControllerConfigured:(id)a0;
- (char)readyToApplyOnboardingSelectionsWithHomeUUID:(id)a0 accessoryUUID:(id)a1;

@end
