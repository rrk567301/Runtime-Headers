@class NSArray, DGMutableBrushStroke, NSString;

@interface RKRetouchBrushStroke : NSObject <DGOperationCoding, NSCopying, NSMutableCopying>

@property (readonly, nonatomic) int mode;
@property (readonly, nonatomic) BOOL hasSource;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } sourceOffset;
@property (readonly, nonatomic) BOOL repairEdges;
@property (readonly, nonatomic) BOOL edgeDetectionPerformed;
@property (readonly, nonatomic) NSArray *detectedEdges;
@property (readonly, nonatomic) BOOL closed;
@property (readonly, nonatomic) float radius;
@property (readonly, nonatomic) float softness;
@property (readonly, nonatomic) float opacity;
@property (readonly, nonatomic) unsigned long long pointCount;
@property (readonly, nonatomic) struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; } extent;
@property (readonly, nonatomic) struct PFIntRect_st { struct PFIntPoint_st { long long x; long long y; } origin; struct PFIntSize_st { unsigned long long width; unsigned long long height; } size; } clipRect;
@property (readonly, nonatomic) DGMutableBrushStroke *brushStroke;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)retouchShouldCreateMLStrokes;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)setOpacity:(float)a0;
- (void)setClosed:(BOOL)a0;
- (void)setExtent:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0;
- (struct { struct CGPoint { double x0; double x1; } x0; float x1; })pointAtIndex:(unsigned long long)a0;
- (void)setHasSource:(BOOL)a0;
- (void)setSourceOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)_appendPoint:(struct { struct CGPoint { double x0; double x1; } x0; float x1; })a0;
- (id)_copyDataFromPointArray:(id)a0;
- (unsigned long long)_detectedEdgeCount;
- (void)_offsetPoints:(struct CGPoint { double x0; double x1; })a0;
- (id)ciImageOfScale:(double)a0 tile:(BOOL)a1;
- (id)initWithMode:(int)a0 hasSource:(BOOL)a1 sourceOffset:(struct CGPoint { double x0; double x1; })a2 repairEdges:(BOOL)a3 radius:(float)a4 softness:(float)a5 opacity:(float)a6 clipRect:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a7;
- (void)rasterizeToMask:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 maskPtr:(char *)a1 maskPtrRowBytes:(long long)a2 close:(BOOL)a3 startIndex:(long long)a4 lastStampedIndex:(long long *)a5;
- (void)rasterizeToMaskWithProcessor:(id)a0 ROI:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a1 maskPtr:(char *)a2 maskPtrRowBytes:(long long)a3 close:(BOOL)a4 startIndex:(long long)a5 lastStampedIndex:(long long *)a6;
- (void)setDetectedEdges:(id)a0;
- (void)setEdgeDetectionPerformed:(BOOL)a0;
- (BOOL)strokeIsEqual:(id)a0;

@end
