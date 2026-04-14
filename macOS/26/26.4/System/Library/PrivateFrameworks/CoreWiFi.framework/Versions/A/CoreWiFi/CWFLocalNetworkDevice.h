@class NSSet, NSString;

@interface CWFLocalNetworkDevice : NSObject

@property (copy, nonatomic) NSSet *sourceAddresses;
@property (copy, nonatomic) NSString *deviceInfo;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSSet *serviceNames;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)sanitizedName;
- (id)preferredSourceAddress;

@end
