@class NSString, NSDate;

@interface PKPassTransactionActivitySummary : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *passUniqueIdentifier;
@property (retain, nonatomic) NSString *paymentApplicationIdentifier;
@property (retain, nonatomic) NSString *subcredentialIdentifier;
@property (nonatomic) unsigned long long presentmentType;
@property (retain, nonatomic) NSDate *lastUsed;

- (id)redactedDescription;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)_databaseInit;
- (id)initWithPassUniqueIdentifier:(id)a0 paymentApplicationIdentifier:(id)a1 subcredentialIdentifier:(id)a2 lastUsed:(id)a3 presentmentType:(unsigned long long)a4;
- (id)initWithPassUniqueIdentifier:(id)a0 paymentApplicationIdentifier:(id)a1 subcredentialIdentifier:(id)a2 pass:(id)a3 state:(id)a4;
- (void)updateWithPassTransactionActivitySummary:(id)a0;

@end
