@class NSArray;

@interface CIMMecabraCandidate : CIMCandidate

@property (readonly) void *mecabraCandidate;
@property (getter=isCompositionCandidate) char compositionCandidate;
@property (readonly) NSArray *segmentedReading;
@property (readonly) NSArray *segmentedSurface;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (id)description;
- (char)isEmojiCandidate;
- (id)stringIdentifier;
- (char)isPrefixMatched;
- (char)isBilingualCandidate;
- (char)isCompletionCandidate;
- (char)isExtensionCandidate;
- (char)isFacemarkCandidate;
- (id)initWithMecabraCandidate:(void *)a0;
- (id)displayReading;
- (id)fuzzyReading;
- (char)isFuzzyCandidate;
- (char)isLearningDictionaryCandidate;
- (char)isPredictionCandidate;
- (char)isUserWordCandidate;
- (char)isWubiConvertedByPinyin;
- (id)segmentedAnalysisString;
- (id)segmentedStringWithString:(id)a0 lengths:(id)a1;

@end
