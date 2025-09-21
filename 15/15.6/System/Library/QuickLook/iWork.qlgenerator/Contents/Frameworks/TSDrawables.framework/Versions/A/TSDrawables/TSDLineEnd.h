@class TSUBezierPath, NSString;

@interface TSDLineEnd : NSObject <TSSPropertyValueArchiving, NSCopying, TSDMixing> {
    TSUBezierPath *_wrapPath;
}

@property (readonly, copy, nonatomic) TSUBezierPath *path;
@property (readonly, copy, nonatomic) TSUBezierPath *wrapPath;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } endPoint;
@property (readonly, nonatomic) char isFilled;
@property (readonly, nonatomic) char isNone;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) int lineJoin;

+ (id)line;
+ (id)none;
+ (id)filledArrow;
+ (id)filledCircle;
+ (id)filledDiamond;
+ (id)filledSquare;
+ (id)invertedArrow;
+ (id)lineEndWithIdentifier:(id)a0;
+ (id)lineEndWithPath:(struct CGPath { } *)a0 endPoint:(struct CGPoint { double x0; double x1; })a1 isFilled:(char)a2 identifier:(id)a3;
+ (id)lineEndWithPath:(struct CGPath { } *)a0 wrapPath:(struct CGPath { } *)a1 endPoint:(struct CGPoint { double x0; double x1; })a2 isFilled:(char)a3 identifier:(id)a4;
+ (id)lineEndWithType:(int)a0;
+ (id)openArrow;
+ (id)openCircle;
+ (id)openSquare;
+ (id)simpleArrow;
+ (id)instanceWithArchive:(const void *)a0 unarchiver:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithPath:(struct CGPath { } *)a0 endPoint:(struct CGPoint { double x0; double x1; })a1 isFilled:(char)a2 identifier:(id)a3;
- (id)initWithPath:(struct CGPath { } *)a0 wrapPath:(struct CGPath { } *)a1 endPoint:(struct CGPoint { double x0; double x1; })a2 isFilled:(char)a3 identifier:(id)a4 lineJoin:(int)a5;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (struct CGImage { } *)newLineEndImageOnRight:(char)a0 forContentsScale:(double)a1 withSize:(struct CGSize { double x0; double x1; })a2;
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (double)scaleForStrokeWidth:(double)a0;
- (id)initWithBezierPath:(id)a0 wrapPath:(id)a1 endPoint:(struct CGPoint { double x0; double x1; })a2 isFilled:(char)a3 identifier:(id)a4 lineJoin:(int)a5;
- (id)lineEndImageForContentsScale:(double)a0 withSize:(struct CGSize { double x0; double x1; })a1 onRight:(char)a2;

@end
