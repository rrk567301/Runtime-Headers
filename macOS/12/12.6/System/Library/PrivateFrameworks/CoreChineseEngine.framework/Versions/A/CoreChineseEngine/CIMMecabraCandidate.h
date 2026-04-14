@class NSArray;

@interface CIMMecabraCandidate : CIMCandidate

@property (readonly) void *mecabraCandidate;
@property (getter=isCompositionCandidate) BOOL compositionCandidate;
@property (readonly) NSArray *segmentedReading;
@property (readonly) NSArray *segmentedSurface;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)description;
- (BOOL)isEmojiCandidate;
- (id)stringIdentifier;
- (BOOL)isExtensionCandidate;
- (BOOL)isCompletionCandidate;
- (BOOL)isFacemarkCandidate;
- (BOOL)isBilingualCandidate;
- (BOOL)isPrefixMatched;
- (id)initWithMecabraCandidate:(void *)a0;
- (BOOL)isWubiConvertedByPinyin;
- (BOOL)isLearningDictionaryCandidate;
- (BOOL)isPredictionCandidate;
- (id)displayReading;
- (BOOL)isUserWordCandidate;

@end
