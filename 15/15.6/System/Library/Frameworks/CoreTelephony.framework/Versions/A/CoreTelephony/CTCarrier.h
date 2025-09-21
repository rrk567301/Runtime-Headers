@class NSString;

@interface CTCarrier : NSObject

@property (retain, nonatomic) NSString *carrierName;
@property (retain, nonatomic) NSString *mobileCountryCode;
@property (retain, nonatomic) NSString *mobileNetworkCode;
@property (retain, nonatomic) NSString *isoCountryCode;
@property (nonatomic) char allowsVOIP;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;

@end
