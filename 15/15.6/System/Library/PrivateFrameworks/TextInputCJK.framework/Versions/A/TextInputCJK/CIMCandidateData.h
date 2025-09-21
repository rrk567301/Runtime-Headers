@class NSArray, NSMutableDictionary, TIInputMode;

@interface CIMCandidateData : NSObject

@property (readonly, nonatomic) TIInputMode *inputMode;
@property (nonatomic) int sortingMethod;
@property (retain, nonatomic) NSArray *storedCandidates;
@property (retain, nonatomic) NSMutableDictionary *candidateInfoCache;

+ (char)shouldShowZhuyinSortingMethod;
+ (id)sortTitleFromSortingMethod:(int)a0;

- (id)init;
- (void).cxx_destruct;
- (void)clearCache;
- (id)initWithInputMode:(id)a0;
- (void)setCandidates:(id)a0;
- (void)addCharacter:(id)a0 groupLabel:(id)a1 dictionary:(id)a2 isSecondary:(char)a3;
- (id)candidatesSortedByPinyinOrZhuyin:(id)a0 simplified:(char)a1 zhuyin:(char)a2;
- (void)sortCharactersByStrokeCount:(id)a0 wordPropertiesDictionary:(id)a1;
- (id)candidateGroupsFromDictionary:(id)a0 sortedKeys:(id)a1;
- (id)candidatesSortedByEmoji:(id)a0;
- (id)candidatesSortedByFrequency:(id)a0 omittingEmoji:(char)a1;
- (id)candidatesSortedByMethod:(int)a0 omittingEmoji:(char)a1;
- (id)candidatesSortedByRadical:(id)a0 simplified:(char)a1 collationLocale:(id)a2;
- (id)candidatesSortedByStrokes:(id)a0 simplified:(char)a1;
- (id)candidatesSortedByWubi:(id)a0 omittingEmoji:(char)a1;
- (id)wordPropertyDictionaryForCandidates:(id)a0 isSimplified:(char)a1;

@end
