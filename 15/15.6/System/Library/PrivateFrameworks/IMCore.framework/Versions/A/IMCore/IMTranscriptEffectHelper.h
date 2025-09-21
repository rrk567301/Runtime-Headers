@interface IMTranscriptEffectHelper : NSObject

+ (char)isFeatureEnabled;
+ (void)setFeatureEnabled:(char)a0;
+ (char)effectIdentifierIsImpactEffect:(id)a0;
+ (id)replayStringMap;
+ (id)allEffectIdentifiers;
+ (char)effectIdentifierIsFullScreenMoment:(id)a0;
+ (id)findIdentifierByMathcingPartialSufix:(id)a0;
+ (char)identifierIsEffectIdentifier:(id)a0;
+ (id)identifierNameMap;
+ (id)nameForEffectIdentifier:(id)a0;
+ (id)replayStringForEffectIdentifier:(id)a0;
+ (id)sendWithEffectStringMap;
+ (id)sendWithStringForEffectIdentifier:(id)a0;
+ (char)shouldShowReplayButtonForEffectIdentifier:(id)a0;

@end
