@class CHRemotePowerLogger, CHFastPathCharacterPersonalizerInterface, CHSynthesisStyleInventoryStatus, CHSynthesisStyleInventory;
@protocol CHSynthesizingText, CHSynthesizingTextInternal;

@interface CHSynthesisRequestConcreteHandler : NSObject {
    id<CHSynthesizingText, CHSynthesizingTextInternal> _textSynthesizer;
    CHFastPathCharacterPersonalizerInterface *_fastPathCharacterPersonalizer;
    CHSynthesisStyleInventory *_styleInventory;
    CHRemotePowerLogger *_modelPowerLogger;
    id /* block */ _styleComputeBlock;
}

@property (readonly, nonatomic) BOOL isReadyForCharacterInventorySynthesis;
@property (readonly, nonatomic) BOOL hasStyleInventory;
@property (readonly, nonatomic) double lastInventoryCharacterStyleTimeStamp;
@property (readonly, nonatomic) CHSynthesisStyleInventoryStatus *inventoryStatus;
@property (readonly, nonatomic) BOOL hasPersonalizationAvailable;

- (void).cxx_destruct;
- (void)unsafeCleanupFastPathCharacters;
- (id)unsafeSynthesisChunkingRequest:(id)a0;
- (id)_queueForRequest:(id)a0 outIsSynchronizedSynthesisQueue:(BOOL *)a1;
- (void)_updateStylePredictionsSingleBatch:(long long)a0;
- (void)addToHolderPersonalizedCharacterWithId:(unsigned long long)a0;
- (void)createPersonalizationCandidatesForAll:(BOOL)a0;
- (id)diffusionModelHashes;
- (void)enumeratePersonalizedCandidatesWithBlock:(id /* block */)a0;
- (void)handleInventoryRequest:(id)a0 reply:(id /* block */)a1;
- (void)handleSynthesisRequest:(id)a0 reply:(id /* block */)a1;
- (id)initWithStyleComputeBlock:(id /* block */)a0;
- (BOOL)inventoryContainsSampleMatchingRequest:(id)a0;
- (id)processSynthesisRequest:(id)a0 isSynchronized:(BOOL)a1 error:(id *)a2;
- (id)resultByAppendingInventoryContents;
- (void)saveStyleInventoryIfNeeded;
- (void)saveStyleInventoryIfNeededWithMinimumDelay:(double)a0;
- (long long)styleScriptForSynthesizerSupportedStyle:(long long)a0;
- (void)unsafeCheckInStyleInventory;
- (void)unsafeCheckOutStyleInventory;
- (void)unsafeCheckOutTextSynthesizer;
- (void)unsafeClearStyleInventory;
- (void)unsafeEvictStyleInventory;
- (void)unsafeEvictTextSynthesizer;
- (void)updateInventoryStylePredictionsWithCompletion:(id /* block */)a0;

@end
