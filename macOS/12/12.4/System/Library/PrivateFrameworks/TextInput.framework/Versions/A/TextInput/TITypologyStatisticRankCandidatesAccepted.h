@class NSMutableDictionary;

@interface TITypologyStatisticRankCandidatesAccepted : TITypologyStatisticCurrentAutocorrections

@property (readonly, nonatomic) NSMutableDictionary *histogram;
@property (readonly, nonatomic) long long lengthOfSelectedCandidates;
@property (readonly, nonatomic) long long lengthOfSelectedPredictions;

- (id)init;
- (void).cxx_destruct;
- (void)visitRecordKeyboardInput:(id)a0;
- (id)structuredReport;
- (void)addLengthOfSelectedCandidate:(id)a0;
- (void)addLengthOfSelectedPrediction:(id)a0;
- (BOOL)isCandidatePrediction:(id)a0;
- (void)countSelectedPrediction:(id)a0 withRank:(unsigned long long)a1;
- (void)countSelectedAutocorrection:(id)a0;
- (unsigned long long)rankOfCandidate:(id)a0;
- (void)countSelectedCandidate:(id)a0 withRank:(unsigned long long)a1;
- (void)countSelectedInputStringToRejectAutocorrection;
- (void)countSelectedInputString;
- (void)rankAndCountSelectedCandidate:(id)a0;

@end
