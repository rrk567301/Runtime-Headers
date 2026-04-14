@class NSString, PKPaymentTransaction;

@interface PKSearchTransactionResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (retain, nonatomic) NSString *passUniqueIdentifier;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
