@class HKConceptSelection;

@interface HKRelationshipConceptSelection : HKConceptSelection

@property (readonly, nonatomic) unsigned long long direction;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) HKConceptSelection *selection;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithDirection:(unsigned long long)a0 type:(long long)a1 selection:(id)a2;

@end
