@class NSString;

@interface PKPaymentCredentialMetadataDate : PKPaymentCredentialMetadata

@property (readonly, copy, nonatomic) NSString *displayFormat;

- (id)displayString;
- (id)initWithConfiguration:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)_isEqualToMetadata:(id)a0;

@end
