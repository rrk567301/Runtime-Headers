@class NSString;

@interface PKPaymentCredentialMetadataCurrency : PKPaymentCredentialMetadata

@property (readonly, copy, nonatomic) NSString *currencyCode;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)displayString;
- (BOOL)_isEqualToMetadata:(id)a0;

@end
