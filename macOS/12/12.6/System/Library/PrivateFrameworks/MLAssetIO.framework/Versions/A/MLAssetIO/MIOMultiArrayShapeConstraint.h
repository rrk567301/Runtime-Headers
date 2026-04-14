@class NSArray, NSOrderedSet;

@interface MIOMultiArrayShapeConstraint : NSObject {
    NSOrderedSet *_shapeSet;
}

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSArray *sizeRangeForDimension;
@property (readonly, copy, nonatomic) NSArray *enumeratedShapes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSizeRangeForDimension:(id)a0;
- (id)initWithEnumeratedShapes:(id)a0;
- (id)initWithSpecification:(const void *)a0;

@end
