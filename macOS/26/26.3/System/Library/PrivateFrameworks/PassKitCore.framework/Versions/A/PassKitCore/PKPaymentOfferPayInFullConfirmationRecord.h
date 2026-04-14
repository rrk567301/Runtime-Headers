@interface PKPaymentOfferPayInFullConfirmationRecord : PKPaymentOfferConfirmationRecord <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;


- (id)description;
- (id)_init;
- (id)initWithTransaction:(id)a0 passUniqueID:(id)a1 context:(unsigned long long)a2 criteriaIdentifier:(id)a3;

@end
