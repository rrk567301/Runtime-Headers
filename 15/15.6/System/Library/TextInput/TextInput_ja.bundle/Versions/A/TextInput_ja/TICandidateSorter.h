@interface TICandidateSorter : NSObject

@property struct __IDXIndex { } *index;
@property struct __CFDictionary { } *radicalToSortPosition;
@property (nonatomic) char liveConversionEnabled;

- (void)dealloc;
- (id)init;
- (char)hasCandidatesFromCandidates:(id)a0 inputString:(id)a1 sortedBy:(unsigned long long)a2 omittingEmoji:(char)a3;
- (id)candidatesFromCandidates:(id)a0 inputString:(id)a1 sortedBy:(unsigned long long)a2 omittingEmoji:(char)a3;
- (id)candidatesSortedByDefaultFromCandidates:(id)a0 omittingEmoji:(char)a1;
- (id)candidatesSortedByEmojiFromCandidates:(id)a0;
- (id)candidatesSortedByRadicalFromCandidates:(id)a0;
- (id)candidatesSortedByYomiFromCandidates:(id)a0 inputString:(id)a1;
- (char)getInfoForCharacter:(id)a0 strokeCount:(unsigned long long *)a1 radicals:(id *)a2 yomis:(id *)a3;
- (char)hasCandidatesSortedByEmojiCategoryFromCandidates:(id)a0;
- (char)hasCandidatesSortedByFacemarkCategoryFromCandidates:(id)a0;
- (char)hasCandidatesSortedByRadicalFromCandidates:(id)a0;
- (char)hasCandidatesSortedByYomiFromCandidates:(id)a0 inputString:(id)a1;

@end
