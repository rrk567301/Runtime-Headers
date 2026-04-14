@class NSArray, NSOrderedSet;

@interface MIOMultiArrayShapeConstraint : NSObject {
    NSOrderedSet *_shapeSet;
}

@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSArray *sizeRangeForDimension;
@property (readonly, copy, nonatomic) NSArray *enumeratedShapes;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSpecification:(const void *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithEnumeratedShapes:(id)a0;
- (id)initWithSizeRangeForDimension:(id)a0;

@end
