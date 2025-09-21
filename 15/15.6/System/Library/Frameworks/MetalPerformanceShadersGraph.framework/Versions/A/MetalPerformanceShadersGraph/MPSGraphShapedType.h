@class NSArray;

@interface MPSGraphShapedType : MPSGraphType

@property (copy) NSArray *shape;
@property unsigned int dataType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)isEqualTo:(id)a0;
- (id)initWithShape:(id)a0 dataType:(unsigned int)a1;

@end
