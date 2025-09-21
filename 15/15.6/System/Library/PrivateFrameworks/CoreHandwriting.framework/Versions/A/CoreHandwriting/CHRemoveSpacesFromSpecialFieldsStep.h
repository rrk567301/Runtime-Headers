@class CHPatternNetwork;

@interface CHRemoveSpacesFromSpecialFieldsStep : CHPostprocessingStepModifyingOriginalTokens {
    char _capitalizationToSplit;
    char _convertToLowercase;
    CHPatternNetwork *_patternFST;
    long long _patternType;
}

- (void).cxx_destruct;
- (id)initWithPatternFst:(id)a0 patternType:(long long)a1 capitalizationToSplit:(char)a2 convertToLowercase:(char)a3;
- (id)process:(id)a0 options:(id)a1;

@end
