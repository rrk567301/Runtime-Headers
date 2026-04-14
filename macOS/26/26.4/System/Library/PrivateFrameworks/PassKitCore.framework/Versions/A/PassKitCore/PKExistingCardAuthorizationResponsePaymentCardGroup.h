@class NSArray;

@interface PKExistingCardAuthorizationResponsePaymentCardGroup : PKExistingCardAuthorizationResponseGroup

@property (readonly, nonatomic) NSArray *entries;

+ (BOOL)supportsSecureCoding;

- (id)initWithDict:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithEntries:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToPaymentCardGroup:(id)a0;

@end
