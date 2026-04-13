@class NSArray;

@interface DGSpotPatchOperation : DGOperation <NSCopying> {
    unsigned long long _inputActiveSpotIndex;
    NSArray *_inputSpots;
}

+ (id)attributes;
+ (id)inputKeys;
+ (id)outputKeys;
+ (id)_stringsTableName;

- (id)init;
- (void).cxx_destruct;
- (void)setNilValueForKey:(id)a0;
- (id)initWithOperation:(id)a0;
- (id)inputSpots;
- (void)setOperationDefaults;
- (BOOL)needsInputImageWithoutGeometry;
- (void)masterRectChangedFromRect:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a0 toRect:(struct PFIntRect_st { struct PFIntPoint_st { long long x0; long long x1; } x0; struct PFIntSize_st { unsigned long long x0; unsigned long long x1; } x1; })a1;
- (BOOL)isVideoCompatible;
- (BOOL)allowDough;
- (id)processImage:(id)a0 options:(id)a1;
- (id)spotWithCenter:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 softness:(double)a2 opacity:(double)a3 detail:(double)a4 angle:(double)a5;
- (unsigned long long)inputActiveSpotIndex;
- (void)setInputActiveSpotIndex:(unsigned long long)a0;
- (unsigned long long)spotCount;
- (id)spotAtIndex:(unsigned long long)a0;
- (void)setSpot:(id)a0 atIndex:(unsigned long long)a1;
- (void)deleteSpotAtIndex:(unsigned long long)a0;
- (void)addSpot:(id)a0;
- (void)setInputSpots:(id)a0;
- (void)insertObject:(id)a0 inInputSpotsAtIndex:(unsigned long long)a1;
- (void)removeObjectFromInputSpotsAtIndex:(unsigned long long)a0;
- (void)replaceObjectInInputSpotsAtIndex:(unsigned long long)a0 withObject:(id)a1;

@end
