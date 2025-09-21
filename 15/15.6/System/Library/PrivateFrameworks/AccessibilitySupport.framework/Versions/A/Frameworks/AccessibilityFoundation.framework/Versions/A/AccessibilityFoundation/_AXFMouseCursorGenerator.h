@class _AXFMouseCursorGeneratorStyleInfo, NSMutableArray;

@interface _AXFMouseCursorGenerator : NSObject

@property (retain, nonatomic) NSMutableArray *_layers;
@property (retain, nonatomic) _AXFMouseCursorGeneratorStyleInfo *_style;
@property (nonatomic) struct CGPoint { double x; double y; } _baseHotspot;
@property (nonatomic) char _shouldSwapColors;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } _baseSize;

+ (id)_nameForCursor:(int)a0;
+ (id)_assetURLsForCursor:(int)a0;
+ (id)_baseAssetNameForCursor:(int)a0;
+ (struct CGPoint { double x0; double x1; })_hotspotForCursor:(int)a0;
+ (id)_pathForAssetName:(id)a0;
+ (char)_shouldSwapColorsForCursor:(int)a0;
+ (id)generatorForCursor:(int)a0;
+ (id)generatorForCursor:(int)a0 style:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)addLayer:(id)a0;
- (id)layers;
- (id)_scales;
- (int)_registerWithName:(id)a0 connection:(unsigned int)a1 isGlobal:(char)a2 setActive:(char)a3 seed:(unsigned int *)a4;
- (struct CGImage { } *)createImageForScale:(double)a0;

@end
