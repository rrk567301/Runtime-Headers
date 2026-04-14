@class HKConceptSelection;

@interface HKRelationshipConceptSelection : HKConceptSelection

@property (readonly, nonatomic) unsigned long long direction;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) HKConceptSelection *selection;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDirection:(unsigned long long)a0 type:(long long)a1 selection:(id)a2;

@end
