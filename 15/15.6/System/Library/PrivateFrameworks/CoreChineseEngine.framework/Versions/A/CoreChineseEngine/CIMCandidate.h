@class NSString, NSArray;

@interface CIMCandidate : IMKCandidate

@property (copy) NSString *surface;
@property (copy) NSString *reading;
@property (copy) NSString *displayReading;
@property (readonly, getter=isExtensionCandidate) char extensionCandidate;
@property (getter=isInlineCandidate) char inlineCandidate;
@property (readonly, getter=isUserWordCandidate) char userWordCandidate;
@property (readonly, getter=isLearningDictionaryCandidate) char learningDictionaryCandidate;
@property (readonly, getter=isEmojiCandidate) char emojiCandidate;
@property (readonly, getter=isCompletionCandidate) char complectionCandidate;
@property (readonly, getter=isCompositionCandidate) char compositionCandidate;
@property (readonly, getter=isPredictionCandidate) char predictionCandidate;
@property (readonly, getter=isFacemarkCandidate) char facemarkCandidate;
@property (readonly, getter=isFuzzyCandidate) char fuzzyCandidate;
@property (readonly) NSString *fuzzyReading;
@property (readonly, getter=isBilingualCandidate) char bilingualCandidate;
@property (readonly, getter=isWubiConvertedByPinyin) char wubiConvertedByPinyin;
@property (readonly, getter=isPrefixMatched) char prefixMatched;
@property unsigned long long scriptType;
@property char usesPointerAsUniqueKey;
@property (copy, nonatomic) NSArray *supplementalItemIdentifiers;
@property (nonatomic) unsigned short supplementalItemPrefix;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)text;
- (id)axHelpString;
- (id)initWithSurface:(id)a0 reading:(id)a1;
- (id)initWithSurface:(id)a0 reading:(id)a1 displayReading:(id)a2;

@end
