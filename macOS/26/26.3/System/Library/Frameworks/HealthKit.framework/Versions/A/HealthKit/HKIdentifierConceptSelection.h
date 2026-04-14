@class HKConceptIdentifier;

@interface HKIdentifierConceptSelection : HKConceptSelection

@property (readonly, copy, nonatomic) HKConceptIdentifier *identifier;

+ (BOOL)supportsSecureCoding;

- (id)initWithIdentifier:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
