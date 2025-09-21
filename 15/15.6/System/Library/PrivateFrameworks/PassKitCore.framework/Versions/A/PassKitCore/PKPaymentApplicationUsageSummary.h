@class NSString, NSDate;

@interface PKPaymentApplicationUsageSummary : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *passUniqueIdentifier;
@property (retain, nonatomic) NSString *paymentApplicationIdentifier;
@property (retain, nonatomic) NSDate *lastUsed;
@property (retain, nonatomic) NSDate *lastUsedTransaction;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_databaseInit;
- (id)initWithPassUniqueIdentifier:(id)a0 paymentApplicationIdentifier:(id)a1 lastUsed:(id)a2;
- (id)initWithPassUniqueIdentifier:(id)a0 paymentApplicationIdentifier:(id)a1 lastUsed:(id)a2 lastUsedTransaction:(id)a3;
- (id)initWithPassUniqueIdentifier:(id)a0 paymentApplicationIdentifier:(id)a1 lastUsedTransaction:(id)a2;
- (void)updateWithSummary:(id)a0;

@end
