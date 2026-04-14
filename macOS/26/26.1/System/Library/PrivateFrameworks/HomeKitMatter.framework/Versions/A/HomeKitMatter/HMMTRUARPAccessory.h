@class NSString, NSURL;

@interface HMMTRUARPAccessory : NSObject

@property (readonly, nonatomic) NSString *productNumber;
@property (readonly, nonatomic) unsigned short vendorID;
@property (readonly, nonatomic) unsigned short productID;
@property (readonly, nonatomic) NSString *vendorName;
@property (readonly, nonatomic) unsigned long long accessoryCategoryNumber;
@property (readonly, nonatomic) NSString *accessoryMarketingName;
@property (readonly, nonatomic) NSString *accessoryProductLabel;
@property (readonly, nonatomic) NSURL *accessoryInstallationGuideURL;

+ (id)fromUARPSupportedAccessory:(id)a0;

- (void).cxx_destruct;
- (id)initWithProductNumber:(id)a0 vendorID:(unsigned short)a1 productID:(unsigned short)a2 vendorName:(id)a3 accessoryCategoryNumber:(unsigned long long)a4 accessoryMarketingName:(id)a5 accessoryProductLabel:(id)a6 accessoryInstallationGuideURL:(id)a7;

@end
