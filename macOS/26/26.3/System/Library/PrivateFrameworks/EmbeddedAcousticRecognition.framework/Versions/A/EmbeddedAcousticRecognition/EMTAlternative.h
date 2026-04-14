@class EMTAlternativeDescription;

@interface EMTAlternative : NSObject <NSCopying>

@property (readonly, nonatomic) EMTAlternativeDescription *alternativeDescription;
@property (readonly, nonatomic) unsigned long long translationPhraseIndex;
@property (readonly, nonatomic) unsigned long long selectionSpanIndex;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDescription:(id)a0 translationPhraseIndex:(unsigned long long)a1 selectionSpanIndex:(unsigned long long)a2;

@end
