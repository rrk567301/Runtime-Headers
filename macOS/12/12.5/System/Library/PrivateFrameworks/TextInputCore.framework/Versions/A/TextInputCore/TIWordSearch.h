@class NSCache, TIWordSearchOperationGetCandidates, TIMecabraEnvironment, TIInputMode, NSString, TIMecabraWrapper;

@interface TIWordSearch : NSObject <TIKeyboardActivityObserving> {
    id _userDictionaryObserver;
    id _dictionaryUpdateObserver;
}

@property (retain) TIWordSearchOperationGetCandidates *operation;
@property (readonly, nonatomic) int mecabraLanguage;
@property (retain) TIMecabraWrapper *mecabraWrapper;
@property (retain, nonatomic) NSCache *candidatesCache;
@property BOOL autoCorrects;
@property BOOL shouldLearnAcceptedCandidate;
@property (readonly) TIInputMode *inputMode;
@property (retain, nonatomic) TIMecabraEnvironment *mecabraEnvironment;
@property (readonly) struct __Mecabra { } *mecabra;
@property (nonatomic) BOOL disablePersonalData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedOperationQueue;
+ (id)recipientRecords;
+ (id)mecabraLearningDictionaryDirectory;
+ (id)configureUserDictionaryObserver:(id)a0 previousObserver:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancel;
- (BOOL)isCancelled;
- (void)clearCache;
- (void)contactStoreDidChange:(id)a0;
- (void)flushDynamicData;
- (int)mecabraInputMethodType;
- (void)lastAcceptedCandidateCorrected;
- (void)declareEndOfSentence;
- (void)revertInlineCandidate;
- (void)adjustEnvironmentOnAction:(long long)a0;
- (void)saveLearningDictionary;
- (void)resetMecabraEnvironment;
- (void)performOperationAsync:(id)a0 withBackgroundActivityAssertion:(BOOL)a1;
- (void)setLanguageModelAdaptationContextWithClientIdentifier:(id)a0 recipientIdentifier:(id)a1;
- (void)setMecabraTextContentType:(int)a0;
- (void)clearLeftDocumentContext;
- (void)setLeftDocumentContext:(id)a0 rightDocumentContext:(id)a1;
- (void)keyboardActivityDidTransition:(id)a0;
- (void)handleMemoryPressureLevel:(unsigned long long)a0 excessMemoryInBytes:(unsigned long long)a1;
- (void)releaseBackgroundActivityAssertion;
- (void)completeOperationsInQueue;
- (unsigned long long)mecabraCreationOptions;
- (id)mecabraCreationOptionsDictionary;
- (void)updateMecabraState;
- (id)initTIWordSearchWithInputMode:(id)a0 mecabraWrapper:(id)a1;
- (void)dynamicDictionariesRemoved:(id)a0;
- (void)clearObservers;
- (id)candidatesCacheKeyForOperation:(id)a0;
- (id)uncachedCandidatesForOperation:(id)a0;
- (void)_addFacemarkCandidatesToResultSet:(id)a0 forInput:(id)a1;
- (void)performOperationAsync:(id)a0;
- (void)endInputSession;
- (void)setDebuggingLogEnabled:(BOOL)a0;
- (void)clearLearningDictionary;
- (id)initTIWordSearchWithInputMode:(id)a0;
- (id)candidatesForOperation:(id)a0;
- (id)cachedCandidatesForOperation:(id)a0;
- (BOOL)addFacemarkCandidatesToResultSet:(id)a0 forInput:(id)a1;
- (void)performAccept:(void *)a0 isPartial:(BOOL)a1;
- (void)resetPreviousWord;
- (void)setLanguageModelAdaptationContext:(id)a0;
- (void)updateUserWordEntries;
- (void)updateDictionaryPaths;
- (void)adaptOfflineToParagraph:(id)a0 adaptationContext:(id)a1 timeStamp:(double)a2;
- (void)commitSurface:(id)a0;
- (void)commitPunctuationSurface:(id)a0;

@end
