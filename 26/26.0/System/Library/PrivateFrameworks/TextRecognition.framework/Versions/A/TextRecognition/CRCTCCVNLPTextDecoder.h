@class CRBiDiTransform, CRTextSequenceRecognizerModel, NSOrderedSet, NSMutableSet, NSLocale, CRNeuralRecognizerConfiguration, NSString;

@interface CRCTCCVNLPTextDecoder : NSObject <CRTextDecoding> {
    struct vector<unsigned long, std::allocator<unsigned long>> { unsigned long long *__begin_; unsigned long long *__end_; unsigned long long *__cap_; } _spaceLabels;
    int *_codemapArray;
    unsigned long long _codemapSize;
}

@property (retain, nonatomic) CRTextSequenceRecognizerModel *model;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSMutableSet *subscribedLocales;
@property (nonatomic) BOOL shouldUseLM;
@property (nonatomic) BOOL shouldUseFalsePositiveFiltering;
@property (readonly, nonatomic) BOOL shouldUseModernizedDecoder;
@property (readonly, nonatomic) BOOL shouldReverseActivationMatrix;
@property (readonly, nonatomic) BOOL isLocaleRTL;
@property (readonly, nonatomic) CRBiDiTransform *bidiTransform;
@property (readonly, nonatomic) NSOrderedSet *characterObservations;
@property (retain, nonatomic) CRNeuralRecognizerConfiguration *configuration;
@property (readonly, nonatomic) struct CVNLPTextDecodingPruningPolicy { long long x0; BOOL x1; float x2; unsigned int x3; } pruningPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_adjustBeamSearchResults:(id *)a0 tokens:(id)a1 greedyCandidateString:(id)a2 greedyCandidateTokens:(id)a3 decodingLocale:(id)a4;
+ (id)_cvnlpDecodingResultByRerankingCandidates:(id)a0 decodingLocale:(id)a1;
+ (unsigned long long)_disambiguatedScriptForString:(id)a0;
+ (id)lmSupportedLanguages;

- (void)dealloc;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_buildActivationMatrices:(id)a0;
- (id /* block */)_commitActionBehavior;
- (void)_create2DArraysFromInputArray:(id)a0 classSize:(unsigned long long *)a1 outputArrays:(void *)a2;
- (struct AdditiveCombiningBeamScorer<CoreRecognition::decoder::CombinedBeamState> { void /* function */ **x0; double x1; double x2; struct vector<std::unique_ptr<CoreRecognition::decoder::BaseBeamScorer>, std::allocator<std::unique_ptr<CoreRecognition::decoder::BaseBeamScorer>>> { void *x0; void *x1; void *x2; } x3; })_createBeamScorerWithBundle:(id)a0 beamSearchConfig:(id)a1 lmConfig:(id)a2;
- (id)_cvnlpDecodingResultForActivationMatrix:(id)a0 decodingLocale:(id)a1 beamSearchConfig:(id)a2 lmConfig:(id)a3 error:(id *)a4;
- (id)_cvnlpGreedyModernizedDecodingResultForActivationMatrix:(const void *)a0;
- (id)_cvnlpModernizedDecodingResultForActivationMatrix:(const void *)a0 decodingLocale:(id)a1 beamSearchConfig:(id)a2 lmConfig:(id)a3 error:(id *)a4;
- (BOOL)_decodeSingleFeatureWithInfo:(id)a0 decodingLocale:(id)a1 greedyDecoder:(id)a2 greedyConfig:(id)a3 beamSearchConfig:(id)a4 imageSize:(struct CGSize { double x0; double x1; })a5 useCharacterBoxes:(BOOL)a6 lmConfig:(id)a7 error:(id *)a8;
- (void)_populateTransientResultGreedyDecodingResultsForFeatureInfo:(id)a0;
- (BOOL)_shouldUseCharacterDecodingToken;
- (BOOL)_wordLMShouldFilterCandidate:(id)a0 inLocale:(id)a1 lmConfig:(id)a2;
- (id)initWithConfiguration:(id)a0 model:(id)a1 error:(id *)a2;
- (void)releaseUnusedResources;
- (BOOL)shouldDecodeWithLM;

@end
