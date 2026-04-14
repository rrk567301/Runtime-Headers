@class NSSet, NSString;

@interface CWFLocalNetworkDevice : NSObject

@property (copy, nonatomic) NSSet *sourceAddresses;
@property (copy, nonatomic) NSString *deviceInfo;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSSet *serviceNames;

- (id)description;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)sanitizedName;
- (id)preferredSourceAddress;

@end
