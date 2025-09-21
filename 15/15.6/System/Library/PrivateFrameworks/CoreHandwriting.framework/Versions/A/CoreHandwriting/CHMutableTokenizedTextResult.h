@class NSArray;

@interface CHMutableTokenizedTextResult : CHTokenizedTextResult

@property (copy, nonatomic) NSArray *tokenColumns;
@property (nonatomic) long long changeableTokenColumnCount;
@property (nonatomic) int baseWritingDirection;
@property (nonatomic) long long recognizerGenerationIdentifier;
@property (nonatomic) long long precedingLineBreaks;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBaseWritingDirection:(int)a0;
- (void)remapAllStrokeIndexesWithArray:(id)a0;
- (void)adjustColumns;
- (void)appendTokenColumns:(id)a0;
- (void)applyCharacterConverter:(id)a0;
- (void)filterCandidatesWithOutOfPattern:(char)a0 duplicateTokenIDs:(char)a1 keepOutOfLexiconAlternatives:(char)a2 keepAlternativeLengths:(char)a3 keepSubstrings:(char)a4 shouldKeepOriginalSpelling:(char)a5;
- (void)offsetAllStrokeIndexesBy:(long long)a0;
- (void)prependTokenColumns:(id)a0 prefixTopPath:(id)a1;
- (void)remapAllStrokeIndexesWithIndexSet:(id)a0;
- (void)setChangeableTokenColumnCount:(long long)a0;
- (void)setPrecedingLineBreaks:(long long)a0;
- (void)setRecognizerGenerationIdentifier:(long long)a0;
- (void)setTokenColumns:(id)a0;
- (void)setTranscriptionPaths:(id)a0 scores:(id)a1;
- (void)trimTokensToTranscriptionPathCount:(long long)a0;

@end
