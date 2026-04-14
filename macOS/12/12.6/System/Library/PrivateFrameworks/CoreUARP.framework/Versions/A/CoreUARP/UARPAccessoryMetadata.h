@class NSString, NSURL;

@interface UARPAccessoryMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long accessoryCategoryNumber;
@property (readonly) NSString *productGroup;
@property (readonly) NSString *productNumber;
@property (copy) NSString *manufacturerAppBundleID;
@property (copy) NSString *manufacturerAppStoreID;
@property (copy) NSString *manufacturerName;
@property (copy) NSString *accessoryModel;
@property (copy) NSString *accessoryMarketingName;
@property (copy) NSURL *accessoryInstallationGuideURL;
@property unsigned long long accessoryCapability;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProductGroup:(id)a0 productNumber:(id)a1;

@end
