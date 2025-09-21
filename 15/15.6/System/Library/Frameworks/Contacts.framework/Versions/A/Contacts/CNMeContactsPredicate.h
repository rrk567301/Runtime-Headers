@interface CNMeContactsPredicate : CNPredicate

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)contactsFromDonationStore:(id)a0;

@end
