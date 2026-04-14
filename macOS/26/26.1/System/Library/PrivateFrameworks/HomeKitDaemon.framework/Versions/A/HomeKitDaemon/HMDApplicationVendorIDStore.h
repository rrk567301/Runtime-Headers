@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDApplicationVendorIDStore : HMFObject <NSSecureCoding>

@property (class, readonly) HMDApplicationVendorIDStore *sharedStore;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *applicationVendorIDMapping;
@property (readonly, nonatomic) NSMutableDictionary *applicationMachUUIDMapping;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;

- (id)vendorIDForApplicationBundleID:(id)a0;
- (void)checkCorrectness;
- (void)removeVendorIDForApplicationBundleID:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_machOUUIDsForApplicationBundleID:(id)a0;
- (void)addVendorID:(id)a0 applicationBundleID:(id)a1 isSPIClient:(BOOL)a2;
- (void)_save;
- (void)addVendorID:(id)a0 applicationBundleID:(id)a1 companionAppBundleID:(id)a2;
- (void)addVendorID:(id)a0 applicationBundleID:(id)a1;
- (id)_vendorIDForApplicationBundleID:(id)a0;
- (void)_setAndSaveVendorID:(id)a0 applicationBundleID:(id)a1 companionAppBundleID:(id)a2 isSPIClient:(BOOL)a3;
- (id)initWithCoder:(id)a0;
- (void)_extractVendorIDForApplicationBundleID:(id)a0;
- (void).cxx_destruct;
- (void)_handleApplicationUninstalledNotification:(id)a0;
- (BOOL)_addVendorID:(id)a0 forApplication:(id)a1 companionAppBundleID:(id)a2 isSPIClient:(BOOL)a3;
- (id)machOUUIDForApplicationBundleID:(id)a0;
- (id)init;

@end
