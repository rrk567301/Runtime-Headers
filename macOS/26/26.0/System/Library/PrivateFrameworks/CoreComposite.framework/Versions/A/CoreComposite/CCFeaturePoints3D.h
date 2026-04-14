@interface CCFeaturePoints3D : NSObject <NSCopying, NSSecureCoding> {
    struct vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> { void *__begin_; void *__end_; void *__cap_; } _points;
    struct vector<int, std::allocator<int>> { int *__begin_; int *__end_; int *__cap_; } _ids;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)getIdentifierAtIndex:(int)a0;
- (void /* unknown type, empty encoding */)getPointAtIndex:(int)a0;
- (id)initWithPoints:(void *)a0 ids:(int *)a1 count:(unsigned long long)a2;
- (void)setIdentifier:(int)a0 atIndex:(int)a1;
- (void)setPoint:(SEL)a0 atIndex:(int)a1;

@end
