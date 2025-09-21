@class NSSet, NSString, NSNumber;

@interface PKPaymentValidationCacheKey : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSSet *supportedNetworks;
@property (readonly, nonatomic) unsigned long long merchantCapabilities;
@property (readonly, copy, nonatomic) NSSet *issuerCountryCodes;
@property (readonly, copy, nonatomic) NSString *webDomain;
@property (readonly, copy, nonatomic) NSNumber *paymentRequestType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithNetworks:(id)a0 issuerCountryCodes:(id)a1 capabilities:(unsigned long long)a2 webDomain:(id)a3 paymentRequestType:(id)a4;

@end
