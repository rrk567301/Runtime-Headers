@class HKConceptIdentifier;

@interface HKIdentifierConceptSelection : HKConceptSelection

@property (readonly, copy, nonatomic) HKConceptIdentifier *identifier;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
