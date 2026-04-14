@interface MecabraCandidate : NSObject <NSCopying> {
    void *_rawCandidate;
}

@property (readonly, nonatomic) void *rawCandidate;

+ (id)syntheticCandidateFromWords:(id)a0 withLexicon:(struct Lexicon { void *x0; void *x1; } *)a1 language:(int)a2;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)string;
- (id)analysisString;
- (id)surface;
- (id)category;
- (id)convertedAnalysisString;
- (id)dictionaryReading;
- (id)attributes;
- (id)initWithCandidate:(void *)a0;
- (id)convertedAnalysisStringForFirstSyllable;
- (id)syllabifiedAnalysisString;
- (id)syllabifiedConvertedAnalysisString;
- (id)syllabifiedDictionaryReading;
- (id)syllablesInString:(id)a0 syllableLengths:(id)a1;
- (id)syllablesInAnalysisString;
- (id)syllablesInConvertedAnalysisString;
- (id)syllablesInDictionaryReading;
- (id)words;
- (id)wordReadings;
- (id)wordIDs;

@end
