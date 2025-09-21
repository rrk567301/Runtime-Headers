@class NSDictionary;

@interface SCROutputPunctuationExpansion : NSObject

@property (class, readonly) SCROutputPunctuationExpansion *shared;

@property (retain, nonatomic) NSDictionary *customPunctuationTableRules;
@property (retain, nonatomic) NSDictionary *customPunctuationTableReplacements;

- (void)setupObservers;
- (void).cxx_destruct;
- (void)_addPrefixAndSuffixToString:(id)a0;
- (id)_createSubstitutionStringForPunctuationString:(id)a0 punctuationTable:(id)a1 stringsFileName:(id)a2 verbosityLevel:(long long)a3 locale:(id)a4;
- (id)_newActionFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ofAction:(id)a1;
- (float)_pitchBaseDeltaForAction:(id)a0 outputManager:(id)a1;
- (void)_punctuationGroupsChanged:(id)a0;
- (id)_replacementStringForSubstitutionString:(id)a0 repeatCount:(unsigned long long)a1 speakWithCount:(BOOL)a2 pitchBaseDelta:(float)a3;
- (id)_spokenStringForIndentationResult:(id)a0 stringsFileName:(id)a1 domainIdentifier:(id)a2 pitchBaseDelta:(float)a3 punctuationSettings:(id)a4;
- (id)_spokenStringForPunctuationResult:(id)a0 stringsFileName:(id)a1 domainIdentifier:(id)a2 pitchBaseDelta:(float)a3 punctuationSettings:(id)a4 locale:(id)a5;
- (id)_spokenStringForUnalignedIndentation:(id)a0 stringsFileName:(id)a1 domainIdentifier:(id)a2 pitchBaseDelta:(float)a3 punctuationSettings:(id)a4;
- (id)_spokenStringForWhitespaceResult:(id)a0 pitchBaseDelta:(float)a1;
- (void)_updateCustomPunctuationTables;
- (BOOL)makeSubstitutionsInActions:(id)a0 stringsFileName:(id)a1 indexes:(id)a2 punctuationSettings:(id)a3;
- (id)mergedPunctuationTableForVerboseness:(long long)a0;
- (int)substitutionActionForPunctuationString:(id)a0 punctuationTable:(id)a1;

@end
