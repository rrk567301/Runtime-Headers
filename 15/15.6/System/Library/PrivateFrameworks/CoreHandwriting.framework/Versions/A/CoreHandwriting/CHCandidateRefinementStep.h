@interface CHCandidateRefinementStep : CHPostprocessingStepModifyingOriginalTokens {
    char _shouldKeepOutOfPatternCandidates;
    char _shouldKeepDuplicateTokenIDs;
    char _shouldKeepOutOfLexiconAlternatives;
    char _shouldKeepAlternativeLengths;
    char _shouldKeepSubstrings;
    char _shouldKeepOriginalSpelling;
}

- (id)initWithShouldKeepOutOfPatternCandidates:(char)a0 shouldKeepDuplicateTokenIDs:(char)a1 shouldKeepOutOfLexiconAlternatives:(char)a2 shouldKeepAlternativeLengths:(char)a3 shouldKeepSubstrings:(char)a4 shouldKeepOriginalSpelling:(char)a5;
- (id)process:(id)a0 options:(id)a1;

@end
