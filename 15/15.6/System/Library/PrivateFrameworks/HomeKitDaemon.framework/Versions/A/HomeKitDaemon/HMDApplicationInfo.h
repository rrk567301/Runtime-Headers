@class NSString, NSData, NSURL, NSArray, NSHashTable;

@interface HMDApplicationInfo : HMFObject <HMFLogging> {
    NSURL *_bundleURL;
    char _independent;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSHashTable *_processes;
}

@property (class, readonly) NSData *privateVendorIdentifier;

@property (readonly, copy) NSData *vendorIdentifier;
@property (readonly, getter=isInstalled) char installed;
@property (readonly, getter=isEntitledForAPIAccess) char entitledForAPIAccess;
@property (readonly, getter=isEntitledForSPIAccess) char entitledForSPIAccess;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly) NSURL *bundleURL;
@property (readonly) HMDApplicationInfo *hostApplicationInfo;
@property (readonly, copy) NSArray *processes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)applicationInfoForBundleIdentifier:(id)a0;
+ (id)applicationInfoForBundleURL:(id)a0;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)shortDescription;
- (id)logIdentifier;
- (id)attributeDescriptions;
- (void)addProcess:(id)a0;
- (void)removeProcess:(id)a0;
- (id)clientIdentifierSalt:(id *)a0;
- (id)initWithBundleIdentifier:(id)a0 bundleURL:(id)a1;

@end
