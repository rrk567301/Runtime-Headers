@class NSArray;

@interface MPSGraphShapedType : MPSGraphType

@property (copy) NSArray *shape;
@property unsigned int dataType;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void).cxx_destruct;
- (BOOL)isEqualTo:(id)a0;
- (id)initWithShape:(id)a0 dataType:(unsigned int)a1;

@end
