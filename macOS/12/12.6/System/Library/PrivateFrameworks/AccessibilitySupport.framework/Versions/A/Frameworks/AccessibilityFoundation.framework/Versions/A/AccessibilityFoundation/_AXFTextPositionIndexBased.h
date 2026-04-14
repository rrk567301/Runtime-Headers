@interface _AXFTextPositionIndexBased : AXFTextPosition

@property (readonly, nonatomic) long long _index;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isValid;
- (long long)compare:(id)a0;
- (long long)type;
- (long long)indexValue;
- (id)descriptionWithoutType;
- (id)_initWithIndex:(long long)a0;
- (BOOL)isEqualToAXFTextPositionIndexBased:(id)a0;
- (long long)offsetFromPosition:(id)a0;
- (id)positionOffsetBy:(long long)a0 withinLimit:(id)a1;

@end
