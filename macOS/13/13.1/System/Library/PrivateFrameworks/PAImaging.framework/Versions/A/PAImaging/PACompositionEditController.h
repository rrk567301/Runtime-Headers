@class NSString, NSMutableDictionary, NSUUID, DGDescription, PLEditSource;

@interface PACompositionEditController : PICompositionController <PICompositionControllerDelegate, NSCopying> {
    DGDescription *_renderDescription;
    PLEditSource *_editSource;
    NSUUID *_genericAdjustmentUUID;
    BOOL _conversionTestingEnabled;
}

@property (nonatomic) struct PFIntSize_st { unsigned long long width; unsigned long long height; } inputSize;
@property long long pipelineVersion;
@property (retain) NSMutableDictionary *autoSettingsStorage;
@property (nonatomic, getter=isInteractive) BOOL interactive;
@property long long orientation;
@property (retain) PLEditSource *editSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_conversionTestingEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addOperation:(id)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (id)operations;
- (unsigned long long)operationCount;
- (id)composition;
- (void)setComposition:(id)a0;
- (void)applyOrientation:(long long)a0;
- (void)_setOperations:(id)a0;
- (void)compositionController:(id)a0 didAddAdjustment:(id)a1;
- (void)compositionController:(id)a0 didRemoveAdjustment:(id)a1;
- (void)compositionController:(id)a0 didUpdateAdjustment:(id)a1;
- (void)compositionController:(id)a0 didUpdateAdjustments:(id)a1;
- (id)operationWithUUID:(id)a0;
- (id)initWithComposition:(id)a0 editSource:(id)a1;
- (id)_initWithComposition:(id)a0 editSource:(id)a1 inputSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a2;
- (id)_initWithComposition:(id)a0 editSource:(id)a1;
- (void)setComposition:(id)a0 editSource:(id)a1;
- (id)initWithOperations:(id)a0 editSource:(id)a1 orientation:(long long)a2 pipelineVersion:(long long)a3;
- (id)initWithRenderDescription:(id)a0 editSource:(id)a1;
- (id)renderDescription;
- (void)setRenderDescription:(id)a0;
- (void)setRenderDescription:(id)a0 editSource:(id)a1;
- (BOOL)hasOperationWithUUID:(id)a0;
- (id)operationIdentifierWithUUID:(id)a0;
- (unsigned long long)countOfOperationsWithIdentifier:(id)a0;
- (id)firstOperationUUIDWithIdentifier:(id)a0;
- (id)firstOperationUUIDWithIdentifier:(id)a0 createIfNeeded:(id /* block */)a1;
- (void)replaceOperationWithUUID:(id)a0 withOperation:(id)a1;
- (void)removeOperationWithUUID:(id)a0;
- (void)removeOperationsPassingTest:(id /* block */)a0;
- (id)addOperationWithIdentifier:(id)a0;
- (void)addPresetAdjustmentStack:(id)a0 replaceCurrentAdjustments:(BOOL)a1;
- (BOOL)canUseRAWReduceNoiseOperation;
- (void)handleNotification:(id)a0 forObserver:(id)a1;
- (id)_genericAdjustmentUUID;
- (void)notifyVideoComplementVisibilityChanged:(BOOL)a0;
- (void)inputSize:(id)a0 completion:(id /* block */)a1;
- (struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })inputSizeSync;
- (BOOL)isRAWInput;
- (id)_adjustmentForOperation:(id)a0;
- (id)_operationForAdjustment:(id)a0;
- (id)_operationIdentifierForAdjustmentIdentifier:(id)a0;
- (id)_compositionKeyForOperationIdentifier:(id)a0;
- (id)_operationIdentifierForUUID:(id)a0;
- (id)_operationUUIDForIdentifier:(id)a0;
- (id)_adjustmentForOperationUUID:(id)a0;
- (void)_addEffectOperation:(id)a0;
- (void)_setRenderDescription:(id)a0;
- (void)_setComposition:(id)a0;
- (BOOL)_hasAdjustmentForKey:(id)a0;
- (void)_invalidateRenderDescription;
- (id)_newGeometryRequest;
- (void)_updateImagePropertiesForCompositionSync:(id)a0;
- (id)_rawCompositionController;
- (void)_postObserverNotification:(id)a0;
- (id)init_TEST_WithOperations:(id)a0 inputSize:(struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })a1 orientation:(long long)a2 pipelineVersion:(long long)a3;
- (id)init_TEST_WithRenderDescription:(id)a0;

@end
