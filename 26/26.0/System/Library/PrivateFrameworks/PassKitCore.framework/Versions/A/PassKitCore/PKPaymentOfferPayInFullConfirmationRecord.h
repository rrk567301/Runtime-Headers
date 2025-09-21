@interface PKPaymentOfferPayInFullConfirmationRecord : PKPaymentOfferConfirmationRecord <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;


- (id)_init;
- (id)description;
- (id)initWithTransaction:(id)a0 passUniqueID:(id)a1 context:(unsigned long long)a2 criteriaIdentifier:(id)a3;

@end
