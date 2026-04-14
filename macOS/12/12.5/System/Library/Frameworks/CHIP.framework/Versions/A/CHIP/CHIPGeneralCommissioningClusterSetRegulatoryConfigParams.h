@class NSNumber, NSString;

@interface CHIPGeneralCommissioningClusterSetRegulatoryConfigParams : NSObject

@property (retain, nonatomic, getter=getNewRegulatoryConfig) NSNumber *newRegulatoryConfig;
@property (retain, nonatomic) NSString *countryCode;
@property (retain, nonatomic) NSNumber *breadcrumb;

- (id)init;
- (void).cxx_destruct;

@end
