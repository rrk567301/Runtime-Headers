@class NSString, NSArray;

@interface CHTokenizedTextResult : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSArray *_tokenColumns;
    long long _recognizerGenerationIdentifier;
    long long _precedingLineBreaks;
    long long _changeableCount;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long tokenColumnCount;
@property (readonly, nonatomic) long long changeableTokenColumnCount;
@property (readonly, copy, nonatomic) NSString *trailingSeparator;
@property (readonly, copy, nonatomic) NSArray *transcriptionPaths;
@property (readonly, copy, nonatomic) NSArray *transcriptionPathScores;
@property (readonly, copy, nonatomic) NSString *topTranscription;
@property (readonly, copy, nonatomic) NSString *rawTranscription;
@property (readonly, nonatomic) NSString *recognizerDebugDescription;

+ (id)tokenizedTextResultWithString:(id)a0 strokeIndexes:(id)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 trailingSeparator:(id)a3 recognizerGenerationIdentifier:(long long)a4;
+ (id)extendedToken:(id)a0 withStrokeIndexSet:(id)a1 alignmentScore:(double)a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
+ (long long)mergeTokenRow:(id)a0 intoUniqueRows:(id)a1;
+ (struct pair<double, double> { double x0; double x1; })_scoreMeanAndStdForToken:(id)a0 forLocale:(id)a1;
+ (long long)_characterCountInToken:(id)a0 filteringCharacterSet:(id)a1 filteredCharacterCount:(long long *)a2;
+ (BOOL)areTokenRowsEquivalent:(id)a0 otherRow:(id)a1;
+ (id)_originalRowFromRow:(id)a0;
+ (id)tokenizedTextResultFromResults:(id)a0 shouldPerformStrictFiltering:(BOOL)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)transcriptionWithPath:(id)a0 columnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 filterLowConfidence:(BOOL)a2 excludeGibberish:(BOOL)a3 rejectionRate:(double *)a4 tokenProcessingBlock:(id /* block */)a5;
- (id)initWithTokenColumns:(id)a0 transcriptionPaths:(id)a1 scores:(id)a2 recognizerGenerationIdentifier:(long long)a3;
- (id)tokenColumns;
- (id)tokensInTranscriptionPath:(id)a0 atColumnIndex:(long long)a1;
- (long long)recognizerGenerationIdentifier;
- (id)initWithBestPathTokens:(id)a0 pathProbabilities:(id)a1 trailingSeparator:(id)a2 recognizerGenerationIdentifier:(long long)a3;
- (id)tokenizedResultWithFilteredPaths:(double)a0;
- (id)legacyTextRecognitionResults;
- (id)transcriptionWithPath:(id)a0 columnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 filterLowConfidence:(BOOL)a2;
- (id)tokenRowsAtColumnIndex:(long long)a0;
- (id)tokenAtLocation:(struct { long long x0; long long x1; long long x2; })a0;
- (id)precedingSeparatorForToken:(id)a0;
- (id)initWithTokenColumns:(id)a0 transcriptionPaths:(id)a1 scores:(id)a2 trailingSeparator:(id)a3 recognizerGenerationIdentifier:(long long)a4 changeableColumnCount:(long long)a5;
- (id)initWithTokenColumns:(id)a0 transcriptionPaths:(id)a1 scores:(id)a2 trailingSeparator:(id)a3 recognizerGenerationIdentifier:(long long)a4;
- (id)initWithBestPathTokens:(id)a0 pathProbabilities:(id)a1 trailingSeparator:(id)a2 recognizerGenerationIdentifier:(long long)a3 changeableColumnCount:(long long)a4;
- (id)_rawPath;
- (BOOL)shouldFilterOutStringForToken:(id)a0 isGibberish:(BOOL *)a1;
- (void)enumerateTokensInTranscriptionPath:(id)a0 columnRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 tokenProcessingBlock:(id /* block */)a2;
- (BOOL)_isGibberishToken:(id)a0;
- (long long)precedingLineBreaks;
- (void)enumerateTokensInTopTranscriptionPathWithBlock:(id /* block */)a0;
- (double)_rawLanguageFitnessForTranscriptionPath:(id)a0 locale:(id)a1 recognitionMode:(int)a2;
- (double)_normalizedLanguageFitness:(double)a0;
- (double)_averageTokenRecognitionScoreInTranscriptionPath:(id)a0;
- (id)_legacyTextRecognitionResultForTranscriptionIndex:(long long)a0;
- (BOOL)isEqualToTokenizedTextResult:(id)a0;
- (id)precedingSeparatorForTopTranscriptionPath;
- (id)precedingSeparatorForRawTranscriptionPath;
- (id)strokeIndexesForColumnsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)tokensFromTopTranscriptionWithCharacterRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct { double x0; double x1; })languageFitnessForLocale:(id)a0 recognitionMode:(int)a1;
- (id)phraseCaseCorrectedResultWithHistory:(id)a0 phraseLexicon:(struct _LXLexicon { } *)a1 maxPhraseLength:(long long)a2;

@end
