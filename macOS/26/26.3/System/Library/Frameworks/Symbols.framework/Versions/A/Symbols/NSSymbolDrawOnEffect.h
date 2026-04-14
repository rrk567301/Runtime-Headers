@interface NSSymbolDrawOnEffect : NSSymbolEffect

@property (nonatomic) long long _layerBehavior;

+ (id)effect;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)effectWithByLayer;
- (id)effectWithWholeSymbol;
- (id)_rbOptionsMutable;
- (id)effectWithIndividually;

@end
