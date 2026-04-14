@class NSArray;

@interface WiFiUsageNetworkIPv6Details : NSObject

@property (nonatomic) BOOL isValid;
@property (retain, nonatomic) NSArray *ipv6Addresses;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
