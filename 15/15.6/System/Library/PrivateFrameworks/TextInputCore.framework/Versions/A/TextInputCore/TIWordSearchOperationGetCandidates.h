@class NSString, MCAcceptCandidateInput, NSArray, TIWordSearchCandidateResultSet, TIKeyboardCandidate, TIWordSearch, TIMecabraIMLogger, MCKeyboardInput;

@interface TIWordSearchOperationGetCandidates : TIWordSearchOperation

@property (retain, nonatomic) TIWordSearchCandidateResultSet *results;
@property (retain) TIWordSearch *wordSearch;
@property (readonly, nonatomic) NSString *inputString;
@property (readonly, nonatomic) MCKeyboardInput *keyboardInput;
@property (readonly, nonatomic) MCAcceptCandidateInput *lastAcceptCandidateInput;
@property (readonly, nonatomic) id target;
@property (readonly, nonatomic) SEL action;
@property (nonatomic) unsigned long long segmentBreakIndex;
@property (readonly, nonatomic) char predictionEnabled;
@property (readonly, nonatomic) char reanalysisMode;
@property (readonly, nonatomic) unsigned long long autocapitalizationType;
@property (readonly, nonatomic) NSArray *geometryModelData;
@property (readonly, nonatomic) char hardwareKeyboardMode;
@property (readonly, nonatomic) TIMecabraIMLogger *logger;
@property (retain, nonatomic) TIKeyboardCandidate *candidateAfterSegmentBreak;

- (void)dealloc;
- (void).cxx_destruct;
- (void)perform;
- (void)checkForCachedResults;
- (void)completeSearchOnMainThreadWithResults:(id)a0;
- (id)initWithWordSearch:(id)a0 inputString:(id)a1 keyboardInput:(id)a2 segmentBreakIndex:(unsigned long long)a3 predictionEnabled:(char)a4 reanalysisMode:(char)a5 autocapitalizationType:(unsigned long long)a6 target:(id)a7 action:(SEL)a8 geometryModelData:(id)a9 hardwareKeyboardMode:(char)a10 logger:(id)a11;

@end
