@interface CNMeContactsPredicate : CNPredicate

+ (BOOL)supportsSecureCoding;

- (id)contactsFromDonationStore:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;

@end
