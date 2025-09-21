@class NSString;

@interface PKPaymentCredentialMetadata : NSObject

@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *value;

+ (Class)classForValueType:(id)a0;
+ (id)paymentCredentialMetadataWithConfiguration:(id)a0;

- (id)displayString;
- (id)initWithConfiguration:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isEqualToMetadata:(id)a0;

@end
