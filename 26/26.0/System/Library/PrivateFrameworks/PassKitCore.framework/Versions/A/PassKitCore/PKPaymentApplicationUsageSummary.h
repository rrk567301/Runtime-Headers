@class NSString, NSDate;

@interface PKPaymentApplicationUsageSummary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *passUniqueIdentifier;
@property (retain, nonatomic) NSString *paymentApplicationIdentifier;
@property (retain, nonatomic) NSDate *lastUsed;
@property (retain, nonatomic) NSDate *lastUsedTransaction;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_databaseInit;
- (id)initWithPassUniqueIdentifier:(id)a0 paymentApplicationIdentifier:(id)a1 lastUsed:(id)a2;
- (id)initWithPassUniqueIdentifier:(id)a0 paymentApplicationIdentifier:(id)a1 lastUsed:(id)a2 lastUsedTransaction:(id)a3;
- (id)initWithPassUniqueIdentifier:(id)a0 paymentApplicationIdentifier:(id)a1 lastUsedTransaction:(id)a2;
- (void)updateWithSummary:(id)a0;

@end
