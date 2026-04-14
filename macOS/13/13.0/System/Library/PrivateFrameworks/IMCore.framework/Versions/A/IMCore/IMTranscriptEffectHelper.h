@interface IMTranscriptEffectHelper : NSObject

+ (BOOL)isFeatureEnabled;
+ (id)allEffectIdentifiers;
+ (BOOL)identifierIsEffectIdentifier:(id)a0;
+ (BOOL)effectIdentifierIsFullScreenMoment:(id)a0;
+ (BOOL)effectIdentifierIsImpactEffect:(id)a0;
+ (id)identifierNameMap;
+ (id)replayStringMap;
+ (id)sendWithEffectStringMap;
+ (id)findIdentifierByMathcingPartialSufix:(id)a0;
+ (id)nameForEffectIdentifier:(id)a0;
+ (id)replayStringForEffectIdentifier:(id)a0;
+ (id)sendWithStringForEffectIdentifier:(id)a0;
+ (BOOL)shouldShowReplayButtonForEffectIdentifier:(id)a0;
+ (void)setFeatureEnabled:(BOOL)a0;

@end
