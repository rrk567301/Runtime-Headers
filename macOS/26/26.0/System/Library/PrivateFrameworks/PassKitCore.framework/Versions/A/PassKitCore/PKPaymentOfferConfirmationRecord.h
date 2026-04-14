@class NSString, PKPaymentTransaction, NSDate;

@interface PKPaymentOfferConfirmationRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *passUniqueID;
@property (copy, nonatomic) NSString *criteriaIdentifier;
@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (nonatomic) unsigned long long context;
@property (nonatomic) unsigned long long processedEvents;
@property (copy, nonatomic) NSDate *lastAttempt;
@property (nonatomic) long long backoffLevel;
@property (copy, nonatomic) NSDate *nextAttempt;
@property (copy, nonatomic) NSDate *fullyProcessedDate;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)selectedOfferConfirmationRecord;
- (id)_dynamicContentMessageTileForPageType:(unsigned long long)a0;
- (id)dashboardMessageTileDynamicContent;
- (BOOL)fullyProcessed;
- (id)initWithTransaction:(id)a0 passUniqueID:(id)a1 criteriaIdentifier:(id)a2 context:(unsigned long long)a3 type:(unsigned long long)a4;
- (BOOL)isSetupPaymentOfferAfterPurchase;
- (id)paymentHash;
- (id)processedEventsString;
- (id)transactionDetailMessageTileDynamicContent;

@end
