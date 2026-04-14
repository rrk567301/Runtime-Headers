@interface CCTextureView : NSObject <NSCopying, NSSecureCoding> {
    id _structContainer;
    struct CCTextureViewStruct { struct { double x0; double x1; double x2; double x3; double x4; double x5; } x0; long long x1; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2; } *_struct;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct { double originX; double originY; double width; double height; double znear; double zfar; } viewport;
@property (nonatomic) long long sliceIndex;

- (void)acceptVisitor:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)attachToOwner:(id)a0 withStruct:(struct CCTextureViewStruct { struct { double x0; double x1; double x2; double x3; double x4; double x5; } x0; long long x1; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x2; } *)a1;
- (void)loadFromStruct;

@end
