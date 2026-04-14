@class _EARVoiceCommandDebugInfo, _EARSpeechRecognition, _EARAudioAnalytics, _EARLatticeMitigatorResult, NSArray, NSNumber, _EARPerformanceMarkers;

@interface _EARSpeechRecognitionResultPackage : NSObject <NSCopying>

@property (nonatomic) BOOL isFinal;
@property (readonly, nonatomic) BOOL hasNonEmptyToken;
@property (nonatomic) BOOL firstResultAfterResume;
@property (nonatomic) BOOL recognitionPaused;
@property (nonatomic) BOOL isComplete;
@property (nonatomic) struct vector<double, std::allocator<double>> { double *__begin_; double *__end_; struct { double *__cap_; } ; } resultCosts;
@property (copy, nonatomic) NSNumber *utteranceStartSamples;
@property (readonly, nonatomic) long long utteranceStartMilliseconds;
@property (readonly, copy, nonatomic) NSNumber *utteranceLengthSamples;
@property (readonly, copy, nonatomic) NSNumber *utteranceEndSamples;
@property (readonly, copy, nonatomic) _EARSpeechRecognition *recognition;
@property (readonly, copy, nonatomic) _EARSpeechRecognition *preITNRecognition;
@property (readonly, copy, nonatomic) _EARSpeechRecognition *unrepairedRecognition;
@property (readonly, nonatomic) BOOL recognitionIsFormatted;
@property (readonly, copy, nonatomic) _EARAudioAnalytics *audioAnalytics;
@property (readonly, nonatomic) double utteranceStart;
@property (readonly, copy, nonatomic) _EARLatticeMitigatorResult *latticeMitigatorResult;
@property (readonly, copy, nonatomic) NSArray *correctPartialResultIndexList;
@property (readonly, copy, nonatomic) NSArray *nBestVoiceCommandInterpretations;
@property (readonly, copy, nonatomic) NSArray *preITNNBestVoiceCommandInterpretations;
@property (readonly, copy, nonatomic) NSNumber *endOfSentenceLikelihood;
@property (readonly, nonatomic) long long numTokensExcludingTriggerPhrase;
@property (readonly, copy, nonatomic) _EARVoiceCommandDebugInfo *voiceCommandDebugInfo;
@property (readonly, copy, nonatomic) _EARPerformanceMarkers *performanceMarkers;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)nBestResults;
- (id)_initWithRecognition:(id)a0 preITNRecognition:(id)a1 unrepairedRecognition:(id)a2 recognitionIsFormatted:(BOOL)a3 isFinal:(BOOL)a4;
- (id)_initWithRecognition:(id)a0 preITNRecognition:(id)a1 unrepairedRecognition:(id)a2 recognitionIsFormatted:(BOOL)a3 isFinal:(BOOL)a4 audioAnalytics:(id)a5;
- (id)_initWithRecognition:(id)a0 preITNRecognition:(id)a1 unrepairedRecognition:(id)a2 recognitionIsFormatted:(BOOL)a3 isFinal:(BOOL)a4 audioAnalytics:(id)a5 utteranceStartMilliseconds:(long long)a6;
- (id)_initWithRecognition:(id)a0 preITNRecognition:(id)a1 unrepairedRecognition:(id)a2 recognitionIsFormatted:(BOOL)a3 isFinal:(BOOL)a4 audioAnalytics:(id)a5 utteranceStartMilliseconds:(long long)a6 latticeMitigatorResult:(id)a7;
- (id)_initWithRecognition:(id)a0 preITNRecognition:(id)a1 unrepairedRecognition:(id)a2 recognitionIsFormatted:(BOOL)a3 isFinal:(BOOL)a4 audioAnalytics:(id)a5 utteranceStartMilliseconds:(long long)a6 latticeMitigatorResult:(id)a7 nBestVoiceCommandInterpretations:(id)a8 preITNNBestVoiceCommandInterpretations:(id)a9 recognitionPaused:(BOOL)a10;
- (id)_initWithRecognition:(id)a0 preITNRecognition:(id)a1 unrepairedRecognition:(id)a2 recognitionIsFormatted:(BOOL)a3 isFinal:(BOOL)a4 audioAnalytics:(id)a5 utteranceStartMilliseconds:(long long)a6 latticeMitigatorResult:(id)a7 nBestVoiceCommandInterpretations:(id)a8 preITNNBestVoiceCommandInterpretations:(id)a9 recognitionPaused:(BOOL)a10 firstResultAfterResume:(BOOL)a11 endOfSentenceLikelihood:(id)a12;
- (id)_initWithRecognition:(id)a0 preITNRecognition:(id)a1 unrepairedRecognition:(id)a2 recognitionIsFormatted:(BOOL)a3 isFinal:(BOOL)a4 audioAnalytics:(id)a5 utteranceStartMilliseconds:(long long)a6 latticeMitigatorResult:(id)a7 nBestVoiceCommandInterpretations:(id)a8 preITNNBestVoiceCommandInterpretations:(id)a9 recognitionPaused:(BOOL)a10 firstResultAfterResume:(BOOL)a11 endOfSentenceLikelihood:(id)a12 numTokensExcludingTriggerPhrase:(long long)a13 voiceCommandDebugInfo:(id)a14 performanceMarkers:(id)a15;
- (id)_initWithRecognition:(id)a0 preITNRecognition:(id)a1 unrepairedRecognition:(id)a2 recognitionIsFormatted:(BOOL)a3 isFinal:(BOOL)a4 audioAnalytics:(id)a5 utteranceStartMilliseconds:(long long)a6 utteranceStartSamples:(id)a7 latticeMitigatorResult:(id)a8 nBestVoiceCommandInterpretations:(id)a9 preITNNBestVoiceCommandInterpretations:(id)a10 recognitionPaused:(BOOL)a11 firstResultAfterResume:(BOOL)a12 endOfSentenceLikelihood:(id)a13 numTokensExcludingTriggerPhrase:(long long)a14 voiceCommandDebugInfo:(id)a15 performanceMarkers:(id)a16 isComplete:(BOOL)a17 resultCosts:(const void *)a18;
- (void)setCorrectPartialResultIndexList:(id)a0;
- (void)setCorrectPartialResultIndexList:(const void *)a0 oneBestFinalResult:(const void *)a1 partialResultIndexOffset:(int)a2;

@end
