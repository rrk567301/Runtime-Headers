@class NSDictionary, NSMutableArray;

@interface CUINamedIconLayerStack : CUINamedLookup

@property (retain, nonatomic) NSMutableArray *layers;
@property (readonly) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) NSDictionary *renderingProperties;

+ (id)_createLayers:(id)a0 fromTheme:(unsigned long long)a1 baseRendition:(id)a2 withBlock:(id /* block */)a3;

- (id)mutableCopy;
- (void)dealloc;
- (id)dataRepresentationWithError:(id *)a0;
- (void)_addLayer:(id)a0;
- (void)_processIconGroups:(id)a0 layers:(id)a1 forName:(id)a2 andScale:(double)a3 layerIdentifier:(int *)a4 error:(id *)a5;
- (void)_removeLayerAtIndex:(unsigned long long)a0;
- (BOOL)_updateFromCatalog:(id)a0 displayGamut:(long long)a1 deviceIdiom:(long long)a2 appearanceName:(id)a3;
- (BOOL)_updateLayers:(id)a0 fromCatalog:(id)a1 displayGamut:(long long)a2 deviceIdiom:(long long)a3 appearanceName:(id)a4;
- (id)iconLayerStackByAppendingLayerImages:(id)a0;
- (id)iconLayerStackByAppendingLayers:(id)a0;
- (id)initWithName:(id)a0 usingRenditionKey:(id)a1 fromTheme:(unsigned long long)a2 resolvingWithBlock:(id /* block */)a3;

@end
