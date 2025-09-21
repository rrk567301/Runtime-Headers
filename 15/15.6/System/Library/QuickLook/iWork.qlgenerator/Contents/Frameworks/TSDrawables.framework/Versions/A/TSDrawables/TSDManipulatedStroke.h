@class TSDVaryWidthPathManipulation;

@interface TSDManipulatedStroke : TSDSmartStroke

@property (retain, nonatomic) TSDVaryWidthPathManipulation *pathManipulation;
@property (nonatomic) unsigned int randomSeed;

+ (Class)mutableClass;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)strokeLineEnd:(id)a0;
- (char)canApplyToShapeRenderable;
- (char)drawsOutsideStrokeBounds;
- (id)initWithArchive:(const void *)a0 unarchiver:(id)a1;
- (id)initWithName:(id)a0 color:(id)a1 width:(double)a2 cap:(int)a3 join:(int)a4 pattern:(id)a5 miterLimit:(double)a6;
- (struct CGPath { } *)manipulatePath:(struct CGPath { } *)a0 withLineWidth:(double)a1;
- (void)p_setupDoodlesManipulation;
- (void)paintPath:(struct CGPath { } *)a0 wantsInteriorStroke:(char)a1 inContext:(struct CGContext { } *)a2 useFastDrawing:(char)a3 parameterized:(char)a4 shouldReverseDrawOrder:(char)a5;
- (struct CGPath { } *)pathToStrokeFromCGPath:(struct CGPath { } *)a0;
- (char)prefersToApplyToShapeRenderableDuringManipulation;
- (double)renderedWidth;
- (void)seedRandom;
- (struct CGPath { } *)strokedPath:(struct CGPath { } *)a0 withLineWidth:(double)a1 insideStroke:(char)a2;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;

@end
