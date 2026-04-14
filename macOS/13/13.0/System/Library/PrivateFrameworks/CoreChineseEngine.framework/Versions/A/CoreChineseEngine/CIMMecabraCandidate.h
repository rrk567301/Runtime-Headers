@class NSArray;

@interface CIMMecabraCandidate : CIMCandidate

@property (readonly) void *mecabraCandidate;
@property (getter=isCompositionCandidate) BOOL compositionCandidate;
@property (readonly) NSArray *segmentedReading;
@property (readonly) NSArray *segmentedSurface;

- (void)dealloc;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEmojiCandidate;
- (id)stringIdentifier;
- (BOOL)isExtensionCandidate;
- (BOOL)isCompletionCandidate;
- (BOOL)isFacemarkCandidate;
- (BOOL)isBilingualCandidate;
- (BOOL)isPrefixMatched;
- (id)initWithMecabraCandidate:(void *)a0;
- (BOOL)isWubiConvertedByPinyin;
- (BOOL)isUserWordCandidate;
- (BOOL)isLearningDictionaryCandidate;
- (id)displayReading;
- (BOOL)isPredictionCandidate;
- (BOOL)isFuzzyCandidate;
- (id)fuzzyReading;
- (id)segmentedStringWithString:(id)a0 lengths:(id)a1;
- (id)segmentedAnalysisString;

@end
