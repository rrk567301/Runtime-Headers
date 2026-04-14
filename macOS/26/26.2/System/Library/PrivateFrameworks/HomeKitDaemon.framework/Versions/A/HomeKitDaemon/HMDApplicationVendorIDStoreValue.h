@class NSData, NSString;

@interface HMDApplicationVendorIDStoreValue : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *vendorIDSHA1;
@property (readonly, copy, nonatomic) NSString *applicationBundleID;
@property (readonly, copy, nonatomic) NSString *companionAppBundleID;
@property (readonly, nonatomic, getter=isSPIClient) BOOL spiClient;

- (id)initWithVendorIDSHA1:(id)a0 applicationBundleID:(id)a1 companionAppBundleID:(id)a2 isSPIClient:(BOOL)a3;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;

@end
