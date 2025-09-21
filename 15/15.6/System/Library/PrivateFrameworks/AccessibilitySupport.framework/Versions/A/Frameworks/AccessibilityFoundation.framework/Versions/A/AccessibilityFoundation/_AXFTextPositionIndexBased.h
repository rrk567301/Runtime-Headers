@interface _AXFTextPositionIndexBased : AXFTextPosition

@property (readonly, nonatomic) long long _index;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (char)isValid;
- (long long)compare:(id)a0;
- (long long)type;
- (long long)indexValue;
- (id)_initWithIndex:(long long)a0;
- (id)descriptionWithoutType;
- (char)isEqualToAXFTextPositionIndexBased:(id)a0;
- (long long)offsetFromPosition:(id)a0;
- (id)positionOffsetBy:(long long)a0 withinLimit:(id)a1;

@end
