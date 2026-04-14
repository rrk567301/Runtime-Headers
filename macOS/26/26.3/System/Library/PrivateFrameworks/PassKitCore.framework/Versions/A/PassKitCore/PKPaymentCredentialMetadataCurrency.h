@class NSString;

@interface PKPaymentCredentialMetadataCurrency : PKPaymentCredentialMetadata

@property (readonly, copy, nonatomic) NSString *currencyCode;

- (id)displayString;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)_isEqualToMetadata:(id)a0;

@end
