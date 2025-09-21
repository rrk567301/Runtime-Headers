@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDApplicationVendorIDStore : HMFObject <NSSecureCoding>

@property (class, readonly) HMDApplicationVendorIDStore *sharedStore;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *applicationVendorIDMapping;
@property (readonly, nonatomic) NSMutableDictionary *applicationMachUUIDMapping;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;

- (void)_save;
- (void)_setAndSaveVendorID:(id)a0 applicationBundleID:(id)a1 companionAppBundleID:(id)a2 isSPIClient:(BOOL)a3;
- (void)addVendorID:(id)a0 applicationBundleID:(id)a1 isSPIClient:(BOOL)a2;
- (id)_machOUUIDsForApplicationBundleID:(id)a0;
- (id)vendorIDForApplicationBundleID:(id)a0;
- (BOOL)_addVendorID:(id)a0 forApplication:(id)a1 companionAppBundleID:(id)a2 isSPIClient:(BOOL)a3;
- (void)encodeWithCoder:(id)a0;
- (void)addVendorID:(id)a0 applicationBundleID:(id)a1;
- (void)_handleApplicationUninstalledNotification:(id)a0;
- (id)_vendorIDForApplicationBundleID:(id)a0;
- (id)init;
- (void)_extractVendorIDForApplicationBundleID:(id)a0;
- (id)machOUUIDForApplicationBundleID:(id)a0;
- (void)removeVendorIDForApplicationBundleID:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)addVendorID:(id)a0 applicationBundleID:(id)a1 companionAppBundleID:(id)a2;
- (void)checkCorrectness;
- (void).cxx_destruct;

@end
