@class NSArray, NSString, NSLocale;

@interface CHTransformedTextSegment : NSObject <CHTransformedText> {
    struct { struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } descender; struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } base; struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } median; struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } top; } _principalLines;
    NSArray *_principalPoints;
    struct BoundingBox { double x_min; double x_max; double y_min; double y_max; } _boundingBox;
    struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *__begin_; struct CGPoint *__end_; struct CGPoint *__cap_; } _points;
    struct vector<std::vector<CGPoint>, std::allocator<std::vector<CGPoint>>> { void *__begin_; void *__end_; void *__cap_; } _strokePoints;
}

@property (readonly, nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } transform;
@property (readonly) NSArray *textStrokes;
@property (readonly) NSArray *tokens;
@property (readonly) NSArray *supportStrokes;
@property (readonly) NSArray *supportStrokeTokenRanges;
@property (readonly) NSLocale *locale;
@property (readonly, nonatomic) long long strokeClassification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct CGPoint *x2; })points;
- (struct CGPoint { double x0; double x1; })anchorPoint;
- (id)string;
- (struct BoundingBox { double x0; double x1; double x2; double x3; })boundingBox;
- (double)orientation;
- (id).cxx_construct;
- (void).cxx_destruct;
- (double)lineHeight;
- (void)addTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)textSize;
- (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct CGPoint *x2; })filteredPoints:(struct CGSize { double x0; double x1; })a0;
- (id)principalPoints;
- (id)splitIntoTokens;
- (void)addSupportStroke:(id)a0;
- (void)addSupportStroke:(id)a0 tokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct CGPoint *x2; })clippedPoints:(struct CGSize { double x0; double x1; })a0 min:(struct CGPoint { double x0; double x1; })a1 max:(struct CGPoint { double x0; double x1; })a2;
- (id)initWithStrokes:(id)a0 tokens:(id)a1 locale:(id)a2 strokeClassification:(long long)a3 principalLines:(struct { struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x1; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x2; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x3; })a4 principalPoints:(id)a5 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a6;
- (id)initWithStrokes:(id)a0 tokens:(id)a1 points:(const void *)a2 strokePoints:(const void *)a3 locale:(id)a4 strokeClassification:(long long)a5 principalLines:(struct { struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x1; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x2; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x3; })a6 principalPoints:(id)a7 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a8;
- (struct CGPoint { double x0; double x1; })insertionPoint;
- (void)mergeTransformedText:(id)a0;
- (struct { struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x1; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x2; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x3; })principalLines;
- (struct vector<std::vector<CGPoint>, std::allocator<std::vector<CGPoint>>> { void *x0; void *x1; void *x2; })strokePoints;
- (id)tokenDistanceSizes:(BOOL)a0;
- (id)tokenSupportRangeForTokenIndex:(long long)a0 supportStrokes:(id *)a1;

@end
