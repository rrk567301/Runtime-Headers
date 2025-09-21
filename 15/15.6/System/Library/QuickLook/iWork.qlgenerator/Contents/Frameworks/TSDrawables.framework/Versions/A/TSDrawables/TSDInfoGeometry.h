@interface TSDInfoGeometry : NSObject <TSDMixing, NSCopying, NSMutableCopying> {
    struct { unsigned char widthValid : 1; unsigned char heightValid : 1; unsigned char horizontalFlip : 1; unsigned char verticalFlip : 1; } _flags;
}

@property (readonly, nonatomic) struct CGPoint { double x; double y; } position;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) char widthValid;
@property (readonly, nonatomic) char heightValid;
@property (readonly, nonatomic) char horizontalFlip;
@property (readonly, nonatomic) char verticalFlip;
@property (readonly, nonatomic) double angle;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundsBeforeRotation;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } center;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transformWithoutFlips;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } transformedBounds;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } transformedBoundsOrigin;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } fullTransform;
@property (readonly, nonatomic) char allValuesValidNumbers;

+ (id)geometryFromTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 withSize:(struct CGSize { double x0; double x1; })a1;
+ (id)geometryFromFullTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
+ (id)geometryFromFullTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 widthValid:(char)a1 heightValid:(char)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithHeight:(double)a0;
- (id)initWithWidth:(double)a0;
- (id)initWithArchive:(const void *)a0;
- (id)initWithPosition:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)geometryByAppendingTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)geometryRelativeToGeometry:(id)a0;
- (id)geometryWithNewBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)geometryWithParentGeometry:(id)a0;
- (id)initWithCenter:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithFullTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 widthValid:(char)a1 heightValid:(char)a2;
- (id)initWithPosition:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1 angle:(double)a2;
- (id)initWithPosition:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1 widthValid:(char)a2 heightValid:(char)a3 horizontalFlip:(char)a4 verticalFlip:(char)a5 angle:(double)a6;
- (id)initWithTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0 size:(struct CGSize { double x0; double x1; })a1;
- (id)initWithTransformedBoundsOrigin:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1 angle:(double)a2;
- (id)initWithTransformedBoundsOrigin:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1 horizontalFlip:(char)a2 verticalFlip:(char)a3 angle:(double)a4;
- (char)isEqualExceptForPosition:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)normalizedGeometry;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformBasedOnPoint:(struct CGPoint { double x0; double x1; })a0 centeredAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformBasedOnPoint:(struct CGPoint { double x0; double x1; })a0 centeredAtPoint:(struct CGPoint { double x0; double x1; })a1 withFlips:(char)a2;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformBasedOnRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (id)geometryWithValidNumbers;
- (id)initWithLayoutGeometry:(id)a0;
- (id)initWithTransformedBoundsOrigin:(struct CGPoint { double x0; double x1; })a0 size:(struct CGSize { double x0; double x1; })a1 widthValid:(char)a2 heightValid:(char)a3 horizontalFlip:(char)a4 verticalFlip:(char)a5 angle:(double)a6;
- (id)parentGeometryWithRelativeGeometry:(id)a0 parentSize:(struct CGSize { double x0; double x1; })a1;

@end
