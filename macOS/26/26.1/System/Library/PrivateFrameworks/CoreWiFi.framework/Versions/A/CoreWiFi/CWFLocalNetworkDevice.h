@class NSSet, NSString;

@interface CWFLocalNetworkDevice : NSObject

@property (copy, nonatomic) NSSet *sourceAddresses;
@property (copy, nonatomic) NSString *deviceInfo;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSSet *serviceNames;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)preferredSourceAddress;
- (id)sanitizedName;

@end
