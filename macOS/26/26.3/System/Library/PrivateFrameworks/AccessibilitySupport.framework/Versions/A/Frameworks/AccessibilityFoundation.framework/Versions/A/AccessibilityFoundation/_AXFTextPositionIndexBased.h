@interface _AXFTextPositionIndexBased : AXFTextPosition

@property (readonly, nonatomic) long long _index;

- (long long)type;
- (id)description;
- (long long)compare:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isValid;
- (long long)indexValue;
- (id)_initWithIndex:(long long)a0;
- (id)descriptionWithoutType;
- (BOOL)isEqualToAXFTextPositionIndexBased:(id)a0;
- (long long)offsetFromPosition:(id)a0;
- (id)positionOffsetBy:(long long)a0 withinLimit:(id)a1;

@end
