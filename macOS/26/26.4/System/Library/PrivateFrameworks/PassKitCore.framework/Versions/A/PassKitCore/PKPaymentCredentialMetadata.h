@class NSString;

@interface PKPaymentCredentialMetadata : NSObject

@property (readonly, copy, nonatomic) NSString *localizedDisplayName;
@property (readonly, copy, nonatomic) NSString *value;

+ (Class)classForValueType:(id)a0;
+ (id)paymentCredentialMetadataWithConfiguration:(id)a0;

- (id)displayString;
- (id)initWithConfiguration:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)_isEqualToMetadata:(id)a0;

@end
