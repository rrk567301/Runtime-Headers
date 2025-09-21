@class NSString;

@interface WiFiUsageNetworkIPv4Details : NSObject

@property (nonatomic) char isValid;
@property (retain, nonatomic) NSString *ipv4Address;
@property (retain, nonatomic) NSString *ipv4RouterAddress;
@property (retain, nonatomic) NSString *ipv4RouterMacAddress;
@property (retain, nonatomic) NSString *ipv4DefGwAddress;
@property (retain, nonatomic) NSString *ipv4Subnet;

- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
