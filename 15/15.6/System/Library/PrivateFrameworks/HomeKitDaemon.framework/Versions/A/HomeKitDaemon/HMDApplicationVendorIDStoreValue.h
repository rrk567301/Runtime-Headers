@class NSData, NSString;

@interface HMDApplicationVendorIDStoreValue : HMFObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSData *vendorIdSha1;
@property (readonly, nonatomic) NSString *applicationBundleId;
@property (readonly, nonatomic) NSString *companionAppBundleId;
@property (readonly, nonatomic) char spiClient;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVendorIDSha1:(id)a0 applicationBundleId:(id)a1 companionAppBundleId:(id)a2 spiClient:(char)a3;

@end
