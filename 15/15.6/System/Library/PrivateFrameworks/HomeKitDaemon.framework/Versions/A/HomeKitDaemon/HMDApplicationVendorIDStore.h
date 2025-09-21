@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDApplicationVendorIDStore : HMFObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSMutableDictionary *applicationVendorIdMapping;
@property (readonly, nonatomic) NSMutableDictionary *applicationMachUUIDMapping;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;

+ (id)sharedStore;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_save;
- (void)_extractVendorIDForApplication:(id)a0;
- (void)__handleUninstalledApplication:(id)a0;
- (char)_addVendorID:(id)a0 forApplication:(id)a1 companionAppBundleId:(id)a2 spiClient:(char)a3;
- (id)_machUUIDsForApplication:(id)a0;
- (void)_setAndSaveVendorID:(id)a0 applicationBundleId:(id)a1 companionAppBundleId:(id)a2 spiClient:(char)a3;
- (id)_vendorIDForApplication:(id)a0;
- (void)addVendorID:(id)a0 applicationBundleId:(id)a1;
- (void)addVendorID:(id)a0 applicationBundleId:(id)a1 companionAppBundleId:(id)a2;
- (void)addVendorID:(id)a0 applicationBundleId:(id)a1 spiClient:(char)a2;
- (void)checkCorrectness;
- (id)machUUIDsForApplication:(id)a0;
- (void)removeVendorIDForApplicationBundleId:(id)a0;
- (id)vendorIDForApplication:(id)a0;

@end
