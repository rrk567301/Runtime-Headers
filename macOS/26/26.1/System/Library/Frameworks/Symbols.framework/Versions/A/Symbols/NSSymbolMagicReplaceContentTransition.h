@class NSSymbolReplaceContentTransition;

@interface NSSymbolMagicReplaceContentTransition : NSSymbolContentTransition

@property (retain, nonatomic) NSSymbolReplaceContentTransition *_fallback;

+ (id)transition;
+ (id)transitionWithFallback:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_rbOptionsMutable;

@end
