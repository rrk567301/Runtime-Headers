@class NSString, HMDApplicationInfo, NSData, HMFLocationAuthorization, RBSProcessHandle;

@interface HMDProcessInfo : HMFProcessInfo <HMFLogging> {
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
}

@property (class, readonly) NSData *privateClientIdentifierSalt;

@property (readonly, nonatomic) RBSProcessHandle *processHandle;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, getter=isEntitledForAPIAccess) char entitledForAPIAccess;
@property (readonly, getter=isEntitledForSPIAccess) char entitledForSPIAccess;
@property (readonly) unsigned long long state;
@property (readonly, getter=isForegrounded) char foreground;
@property (readonly, getter=isBackgroundUpgradedToForeground) char backgroundUpgradedToForeground;
@property (readonly, getter=isBackgrounded) char background;
@property (readonly, getter=isSuspended) char suspended;
@property (readonly, getter=isTerminated) char terminated;
@property (readonly) char shouldMonitor;
@property (readonly) HMDApplicationInfo *applicationInfo;
@property (readonly) HMFLocationAuthorization *locationAuthorization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)locationAuthorizationFromEffectiveBundleIdentifier:(id)a0 processInfo:(id)a1;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)setState:(unsigned long long)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (void)_updateState:(unsigned long long)a0;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (id)clientIdentifierSalt:(id *)a0;

@end
