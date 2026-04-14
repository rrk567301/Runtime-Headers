@class NSSet, NSString;

@interface CWFLocalNetworkDevice : NSObject

@property (copy, nonatomic) NSSet *sourceAddresses;
@property (copy, nonatomic) NSString *deviceInfo;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSSet *serviceNames;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)sanitizedName;
- (id)preferredSourceAddress;

@end
