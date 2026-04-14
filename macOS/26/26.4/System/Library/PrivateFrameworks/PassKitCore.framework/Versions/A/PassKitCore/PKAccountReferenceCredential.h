@class NSString;

@interface PKAccountReferenceCredential : PKPaymentCredential

@property (readonly, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) unsigned long long feature;
@property (retain, nonatomic) NSString *sharingInstanceIdentifier;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)_isEqualToCredential:(id)a0;
- (id)activationMethods;
- (id)initWithAccountIdentifier:(id)a0 feature:(unsigned long long)a1;

@end
