@interface NSSymbolDrawOffEffect : NSSymbolEffect

@property (nonatomic) long long _layerBehavior;
@property (nonatomic) long long _isReversed;

+ (id)effect;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)effectWithByLayer;
- (id)effectWithWholeSymbol;
- (id)_rbOptionsMutable;
- (id)effectWithIndividually;
- (id)effectWithNonReversed;
- (id)effectWithReversed;

@end
