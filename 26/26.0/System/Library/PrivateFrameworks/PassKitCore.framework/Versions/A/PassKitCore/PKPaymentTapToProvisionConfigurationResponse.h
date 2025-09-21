@class NSData;

@interface PKPaymentTapToProvisionConfigurationResponse : PKPaymentWebServiceResponse

@property (readonly, nonatomic) NSData *nonce;
@property (readonly, nonatomic) long long countryCode;
@property (readonly, nonatomic) long long currencyCode;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
