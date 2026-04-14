@interface CNMeContactsPredicate : CNPredicate

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (id)contactsFromDonationStore:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
