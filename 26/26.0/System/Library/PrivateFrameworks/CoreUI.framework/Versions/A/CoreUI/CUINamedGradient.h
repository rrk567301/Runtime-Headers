@class NSArray;

@interface CUINamedGradient : CUINamedLookup

@property (readonly, nonatomic) long long gradientType;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } gradientStartPoint;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } gradientEndPoint;
@property (readonly, nonatomic) NSArray *colorStops;
@property (readonly, nonatomic) NSArray *colors;

- (id)mutableCopy;
- (void)dealloc;
- (id)initWithName:(id)a0 usingRenditionKey:(id)a1 fromTheme:(unsigned long long)a2;
- (void)_setColors:(id)a0 andStops:(id)a1;
- (void)_setGradientEndPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_setGradientStartPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)_setGradientType:(long long)a0;
- (BOOL)_updateFromCatalog:(id)a0 displayGamut:(long long)a1 deviceIdiom:(long long)a2 appearanceName:(id)a3;

@end
