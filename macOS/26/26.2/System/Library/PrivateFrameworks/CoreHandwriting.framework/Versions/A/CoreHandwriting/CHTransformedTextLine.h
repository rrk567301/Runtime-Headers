@class NSArray;

@interface CHTransformedTextLine : CHTransformedTextSegment {
    struct { struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } descender; struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } base; struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } median; struct { struct CGPoint { double x; double y; } start; struct CGPoint { double x; double y; } end; } top; } _principalLines;
    struct BoundingBox { double x_min; double x_max; double y_min; double y_max; } _boundingBox;
    long long _strokeClassification;
}

@property (readonly) NSArray *segments;
@property (nonatomic) BOOL fromCachedTokens;

+ (id)drawingForTransformedTextLines:(id)a0;
+ (id)addNonTextSegmentsAndLines:(id)a0 nontextGroups:(id)a1 outNonTextStrokes:(id *)a2;
+ (void)assignNontextGroups:(id)a0 toTextLines:(id)a1;
+ (id)createTextLineWithStrokes:(id)a0 tokens:(id)a1 locale:(id)a2 classification:(long long)a3 principalLines:(struct { struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x1; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x2; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x3; })a4 principalPoints:(id)a5 shouldCancel:(id /* block */)a6;
+ (id)createTokensFromTranscriptions:(id)a0 strokeIndexes:(id)a1 fullText:(id)a2 locale:(id)a3;
+ (struct { struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x1; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x2; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x3; })derivePrincipalLinesFromPoints:(id)a0 strokes:(id)a1;
+ (unsigned long long)determineTokenProperties:(id)a0 fullText:(id)a1 tokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
+ (id)extractStrokesFromDrawing:(id)a0 classification:(long long)a1;
+ (struct { struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x1; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x2; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x3; })principalLinesFromSegments:(id)a0;
+ (id)textLineCandidate:(id)a0 tokens:(id)a1 locale:(id)a2 strokeClassification:(long long)a3 string:(id)a4 points:(const void *)a5 strokePoints:(const void *)a6 alphaShape:(const void *)a7 initialOrientationEstimate:(double)a8 useAltString:(BOOL)a9 outFitScore:(double *)a10 shouldCancel:(id /* block */)a11;
+ (id)textLineForDrawing:(id)a0 transcriptions:(id)a1 strokeIndexes:(id)a2 fullText:(id)a3 principalLines:(struct { struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x1; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x2; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x3; })a4 locale:(id)a5 strokeClassification:(long long)a6 shouldCancel:(id /* block */)a7;
+ (id)textLineForDrawing:(id)a0 transcriptions:(id)a1 strokeIndexes:(id)a2 fullText:(id)a3 principalPoints:(id)a4 locale:(id)a5 strokeClassification:(long long)a6 shouldCancel:(id /* block */)a7;
+ (id)textLineForReflowableSynthesisResultToken:(id)a0 locale:(id)a1;
+ (id)textLineForStrokes:(id)a0 tokens:(id)a1 locale:(id)a2 strokeClassification:(long long)a3 initialOrientationEstimate:(double)a4 shouldCancel:(id /* block */)a5;
+ (id)textLineForTokens:(id)a0 locale:(id)a1 strokeGroup:(id)a2 strokes:(id)a3 strokeProvider:(id)a4 skipLineOrientationEstimate:(BOOL)a5 useCache:(BOOL)a6 shouldCancel:(id /* block */)a7;
+ (id)textLineForTokensWithPrincipalLines:(id)a0 strokes:(id)a1 locale:(id)a2 strokeClassification:(long long)a3;
+ (id)textLineFromCachedResults:(id)a0 tokens:(id)a1 strokes:(id)a2 estimatedOrientation:(double)a3 locale:(id)a4 strokeClassification:(long long)a5;
+ (id)textLineFromTextResult:(id)a0 principalLineResult:(id)a1 shouldUseRefinablePath:(BOOL)a2 strokeProvider:(id)a3 shouldCancel:(id /* block */)a4;
+ (id)textLinesFromContext:(id)a0 strokeGroupingResult:(id)a1 contextStrokes:(id)a2 initialStrokes:(id)a3 strokeProvider:(id)a4 relatedNonTextStrokes:(id)a5 excludedStrokeTypes:(id)a6 skipLineOrientationEstimate:(BOOL)a7 useCache:(BOOL)a8 progress:(id)a9 shouldCancel:(id /* block */)a10;
+ (BOOL)validateCountMatchTranscriptions:(id)a0 strokeIndexes:(id)a1;

- (id)locale;
- (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct { struct CGPoint *x0; } x2; })points;
- (struct BoundingBox { double x0; double x1; double x2; double x3; })boundingBox;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)string;
- (id)tokens;
- (id)initWithSegments:(id)a0;
- (id)initWithSegment:(id)a0;
- (void)addTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (id)textSize;
- (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct { struct CGPoint *x0; } x2; })filteredPoints:(struct CGSize { double x0; double x1; })a0;
- (id)principalPoints;
- (id)splitIntoTokens;
- (void)_addTextLineSegment:(id)a0;
- (id)addRelatedNontextStrokes:(id)a0 tokenRangesForNonTextStrokes:(id)a1 strokeProvider:(id)a2 groupIndex:(id)a3;
- (void)addSupportStroke:(id)a0;
- (void)addSupportStroke:(id)a0 tokenRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (struct vector<CGPoint, std::allocator<CGPoint>> { struct CGPoint *x0; struct CGPoint *x1; struct { struct CGPoint *x0; } x2; })clippedPoints:(struct CGSize { double x0; double x1; })a0 min:(struct CGPoint { double x0; double x1; })a1 max:(struct CGPoint { double x0; double x1; })a2;
- (id)initWithStrokes:(id)a0 tokens:(id)a1 locale:(id)a2 strokeClassification:(long long)a3 principalLines:(struct { struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x1; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x2; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x3; })a4 principalPoints:(id)a5 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a6;
- (id)initWithStrokes:(id)a0 tokens:(id)a1 points:(const void *)a2 strokePoints:(const void *)a3 locale:(id)a4 strokeClassification:(long long)a5 principalLines:(struct { struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x1; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x2; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x3; })a6 principalPoints:(id)a7 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a8;
- (void)mergeTransformedText:(id)a0;
- (struct { struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x0; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x1; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x2; struct { struct CGPoint { double x0; double x1; } x0; struct CGPoint { double x0; double x1; } x1; } x3; })principalLines;
- (long long)strokeClassification;
- (struct vector<std::vector<CGPoint>, std::allocator<std::vector<CGPoint>>> { void *x0; void *x1; struct { void *x0; } x2; })strokePoints;
- (id)textStrokes;
- (id)tokenDistanceSizes:(BOOL)a0;

@end
