@class TSUBezierPath;

@interface TSDBezierPathSource : TSDPathSource <TSDMixing> {
    TSUBezierPath *mPath;
    char mIsRectangular;
    TSUBezierPath *mBezierPathWithoutFlips;
}

@property (nonatomic) struct CGSize { double width; double height; } naturalSize;

+ (id)pathSourceWithBezierPath:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)name;
- (void).cxx_destruct;
- (char)isClosed;
- (char)isRectangular;
- (id)initWithArchive:(const void *)a0;
- (char)isCircular;
- (void)saveToArchive:(void *)a0;
- (id)bezierPathWithoutFlips;
- (id)initWithBezierPath:(id)a0;
- (id)initWithNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (char)isRectangularForever;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (void)p_setBezierPath:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformToNaturalSize;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)saveToArchive:(void *)a0 andBezierArchive:(void *)a1;
- (id)inferredAccessibilityDescription;
- (id)initWithArchive:(const void *)a0 andBezierArchive:(const void *)a1;

@end
