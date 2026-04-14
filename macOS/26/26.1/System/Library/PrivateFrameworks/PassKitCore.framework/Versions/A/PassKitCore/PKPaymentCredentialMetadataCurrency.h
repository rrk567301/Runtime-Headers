@class NSString;

@interface PKPaymentCredentialMetadataCurrency : PKPaymentCredentialMetadata

@property (readonly, copy, nonatomic) NSString *currencyCode;

- (unsigned long long)hash;
- (id)initWithConfiguration:(id)a0;
- (id)displayString;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isEqualToMetadata:(id)a0;

@end
