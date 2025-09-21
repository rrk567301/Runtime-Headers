@interface CDMFeatureFlags : NSObject

+ (char)isLogNluEnabled;
+ (char)isUaaPPreferred;
+ (char)globalOverridesAreEnabled;
+ (char)isAmbiguityRefactorEnabled;
+ (char)isCATIEnabled;
+ (char)isCATIMultiTurnEnabled;
+ (char)isCDMClientXPCEnabled;
+ (char)isCbrUnrestrictedByRDEnabled;
+ (char)isCcqrAerCbrEnabled;
+ (char)isContextUpdateEnabled;
+ (char)isContextualSpanMatcherEnabled;
+ (char)isFeatureStoreEnabled;
+ (char)isFeatureStoreEnabledForExternalBuilds;
+ (char)isInterpretationGroupFilteringEnabled;
+ (char)isLVCEnabled;
+ (char)isLighthouseAPIEnabled;
+ (char)isMarrsMentionDetectorEnabled;
+ (char)isMarrsMentionResolverEnabled;
+ (char)isMentionResolverRewriterEnabled;
+ (char)isNLv4ServiceOverridesEnabled;
+ (char)isPSCEnabled;
+ (char)isPhoneticSpanMatchingEnabled;
+ (char)isRepetitionDetectionEnabled;
+ (char)isSSUCacheUpdateOnEveryRequestEnabled;
+ (char)isSSUEnableIndexingEnabled;
+ (char)isSSUEnabled;
+ (char)isShortcutsNLv4FollowupEnabled;
+ (char)isSiriMiniEnabled;
+ (char)isTrieOverridesEnabled;
+ (char)isUaaPEnabled;
+ (char)isUsoEntitySpanEnabled;

@end
