@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDApplicationVendorIDStore : HMFObject <NSSecureCoding>

@property (class, readonly) HMDApplicationVendorIDStore *sharedStore;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *applicationVendorIDMapping;
@property (readonly, nonatomic) NSMutableDictionary *applicationMachUUIDMapping;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;

- (void)_save;
- (id)initWithCoder:(id)a0;
- (void)_extractVendorIDForApplicationBundleID:(id)a0;
- (BOOL)_addVendorID:(id)a0 forApplication:(id)a1 companionAppBundleID:(id)a2 isSPIClient:(BOOL)a3;
- (void)encodeWithCoder:(id)a0;
- (id)machOUUIDForApplicationBundleID:(id)a0;
- (id)vendorIDForApplicationBundleID:(id)a0;
- (void).cxx_destruct;
- (id)_vendorIDForApplicationBundleID:(id)a0;
- (void)addVendorID:(id)a0 applicationBundleID:(id)a1 isSPIClient:(BOOL)a2;
- (id)_machOUUIDsForApplicationBundleID:(id)a0;
- (void)addVendorID:(id)a0 applicationBundleID:(id)a1;
- (void)checkCorrectness;
- (id)init;
- (void)addVendorID:(id)a0 applicationBundleID:(id)a1 companionAppBundleID:(id)a2;
- (void)removeVendorIDForApplicationBundleID:(id)a0;
- (void)_handleApplicationUninstalledNotification:(id)a0;
- (void)_setAndSaveVendorID:(id)a0 applicationBundleID:(id)a1 companionAppBundleID:(id)a2 isSPIClient:(BOOL)a3;

@end
