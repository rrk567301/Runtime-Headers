@class NSNumber, NSString;

@interface CHIPGeneralCommissioningClusterSetRegulatoryConfigParams : NSObject

@property (retain, nonatomic) NSNumber *location;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSNumber *breadcrumb;
@property (retain, nonatomic) NSNumber *timeoutMs;

- (id)init;
- (void).cxx_destruct;

@end
