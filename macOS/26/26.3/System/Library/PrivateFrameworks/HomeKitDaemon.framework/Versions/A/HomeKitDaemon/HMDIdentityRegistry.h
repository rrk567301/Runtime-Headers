@class HMDHomeManager, NSArray, NSRecursiveLock, NSString, NSMutableArray;

@interface HMDIdentityRegistry : HMFObject <HMFLogging, HMDDumpState> {
    NSMutableArray *_registeredIdentities;
}

@property (weak) HMDHomeManager *homeManager;
@property (readonly, nonatomic) NSRecursiveLock *lock;
@property (readonly) NSArray *registeredIdentities;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)sharedRegistry;

- (void)configureWithHomeManager:(id)a0;
- (void)registerIdentity:(id)a0 account:(id)a1 object:(id)a2;
- (void)deregisterIdentity:(id)a0 object:(id)a1;
- (id)identitiesForAccount:(id)a0;
- (id)identityForIdentifier:(id)a0;
- (id)init;
- (void)registerIdentity:(id)a0 device:(id)a1 object:(id)a2;
- (id)identitiesForDevice:(id)a0;
- (id)attributeDescriptions;
- (id)dumpStateWithPrivacyLevel:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)accountsForIdentity:(id)a0;
- (void)reset;
- (id)identitiesForAccountIdentifier:(id)a0;
- (id)_userForIdenity:(id)a0;
- (id)userForDevice:(id)a0;

@end
