@class NSString;

@interface PKPaymentCredentialMetadataDate : PKPaymentCredentialMetadata

@property (readonly, copy, nonatomic) NSString *displayFormat;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (id)displayString;
- (char)_isEqualToMetadata:(id)a0;

@end
