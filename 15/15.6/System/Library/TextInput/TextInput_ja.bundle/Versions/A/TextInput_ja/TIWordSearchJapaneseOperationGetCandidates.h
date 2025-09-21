@class NSString;

@interface TIWordSearchJapaneseOperationGetCandidates : TIWordSearchOperationGetCandidates

@property (copy, nonatomic) NSString *previousCacheKey;
@property (readonly, nonatomic) NSString *contextString;
@property (nonatomic) char flickUsed;
@property (nonatomic) char phraseBoundarySet;
@property (nonatomic) char allowIncompleteRomaji;
@property (nonatomic) char referenceMode;
@property (nonatomic) char singlePhrase;

- (void).cxx_destruct;
- (id)results;
- (void)checkForCachedResultsIfNeeded;
- (id)initWithWordSearch:(id)a0 inputString:(id)a1 keyboardInput:(id)a2 contextString:(id)a3 segmentBreakIndex:(unsigned long long)a4 predictionEnabled:(char)a5 reanalysisMode:(char)a6 autocapitalizationType:(unsigned long long)a7 target:(id)a8 action:(SEL)a9 geometryModelData:(id)a10 flickUsed:(char)a11 phraseBoundarySet:(char)a12 hardwareKeyboardMode:(char)a13 logger:(id)a14;

@end
