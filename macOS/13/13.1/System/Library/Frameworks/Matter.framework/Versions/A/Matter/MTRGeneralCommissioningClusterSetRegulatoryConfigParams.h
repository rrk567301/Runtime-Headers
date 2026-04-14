@class NSNumber, NSString;

@interface MTRGeneralCommissioningClusterSetRegulatoryConfigParams : NSObject <NSCopying>

@property (copy, nonatomic, getter=getNewRegulatoryConfig) NSNumber *newRegulatoryConfig;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSNumber *breadcrumb;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
