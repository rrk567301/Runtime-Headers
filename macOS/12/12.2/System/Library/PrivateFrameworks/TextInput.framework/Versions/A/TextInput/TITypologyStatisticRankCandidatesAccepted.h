@class NSMutableDictionary;

@interface TITypologyStatisticRankCandidatesAccepted : TITypologyStatisticCurrentAutocorrections

@property (readonly, nonatomic) NSMutableDictionary *histogram;
@property (readonly, nonatomic) long long lengthOfSelectedCandidates;
@property (readonly, nonatomic) long long lengthOfSelectedPredictions;

- (id)init;
- (void).cxx_destruct;
- (id)structuredReport;
- (void)visitRecordKeyboardInput:(id)a0;
- (unsigned long long)rankOfCandidate:(id)a0;
- (void)addLengthOfSelectedCandidate:(id)a0;
- (void)addLengthOfSelectedPrediction:(id)a0;
- (void)countSelectedAutocorrection:(id)a0;
- (void)countSelectedInputString;
- (void)countSelectedInputStringToRejectAutocorrection;
- (BOOL)isCandidatePrediction:(id)a0;
- (void)countSelectedPrediction:(id)a0 withRank:(unsigned long long)a1;
- (void)countSelectedCandidate:(id)a0 withRank:(unsigned long long)a1;
- (void)rankAndCountSelectedCandidate:(id)a0;

@end
