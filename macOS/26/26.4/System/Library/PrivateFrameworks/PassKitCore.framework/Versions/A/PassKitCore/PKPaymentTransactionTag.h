@class NSString, NSDecimalNumber;

@interface PKPaymentTransactionTag : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *localizedTitle;
@property (retain, nonatomic) NSString *localeIdentifier;
@property (retain, nonatomic) NSDecimalNumber *rank;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;

@end
