@class NSString, NSMutableString, TIConvertedCandidate, NSMutableArray;

@interface TIConversionHistory : NSObject

@property (nonatomic) char invalid;
@property (retain, nonatomic) NSMutableArray *convertedCandidates;
@property (retain, nonatomic) NSMutableArray *mutableConvertedCandidateRefs;
@property (retain, nonatomic) NSMutableString *mutableConvertedCandidateText;
@property (nonatomic) unsigned long long revertCount;
@property (nonatomic) char inputChangedSinceLastConversion;
@property (readonly, nonatomic) NSString *convertedCandidateText;
@property (readonly, nonatomic) unsigned long long convertedLength;
@property (readonly, nonatomic) TIConvertedCandidate *lastConvertedCandidate;

- (id)init;
- (char)isValid;
- (void).cxx_destruct;
- (void)invalidate;
- (void)clear;
- (void)didRevertLastConvertedCandidate;
- (void)addCandidate:(id)a0 candidateRef:(id)a1 replacedAmbiguousPinyinSyllables:(id)a2 replacementUnambiguousPinyinSyllables:(id)a3 convertedInput:(id)a4;
- (char)shouldRevertConvertedCandidateOnDeletionFromMarkedText:(id)a0;

@end
