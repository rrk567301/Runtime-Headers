@class NSString, NSArray, DGDescription, NUPriority, NSObject, PAAutoCalculatorEntry, NSMutableArray, PACompositionEditController;
@protocol OS_dispatch_queue;

@interface PAAutoCalculatorContext : NSObject <PAAutoCalculatorContext> {
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _completionHandler;
    PACompositionEditController *_compositionProvider;
    PACompositionEditController *_descriptionEditController;
    NSString *_assetTypeName;
    NSMutableArray *_pendingAutoCalculators;
    PAAutoCalculatorEntry *_currentAutoCalculator;
    NSArray *_faces;
    BOOL _dirty;
    BOOL _canceled;
}

@property (retain) NUPriority *priority;
@property (readonly) DGDescription *renderDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)completionBlockForAutoCalculator:(id)a0;
+ (id /* block */)smartToneCompletionBlock;
+ (id /* block */)smartColorCompletionBlock;
+ (id /* block */)apertureRedEyeCompletionBlock;
+ (id /* block */)levelsRGBCompletionBlock;
+ (id /* block */)levelsLuminanceCompletionBlock;
+ (id /* block */)smartBWCompletionBlock;
+ (id /* block */)whiteBalanceCompletionBlock;
+ (id)controlPointsFromDictionaries:(id)a0;
+ (id /* block */)curvesCompletionBlock;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)_complete:(BOOL)a0;
- (BOOL)dirty;
- (void)_complete;
- (void)fail:(id)a0;
- (void)resolve:(id /* block */)a0;
- (void)autoCalculator:(id)a0 calculatedSettings:(id)a1;
- (id)initWithCompositionProvider:(id)a0;
- (id)_calculatorForIdentifier:(id)a0 autoIdentifier:(id)a1;
- (void)_runAutoCalculator:(id)a0;
- (void)preparePendingAutoCalculators;
- (id /* block */)_qosBlock:(id /* block */)a0;
- (void)addAutoCalculator:(id)a0 operationUUID:(id)a1 operationIdentifier:(id)a2 autoIdentifier:(id)a3;
- (id)operationForAutoCalculator:(id)a0;
- (unsigned long long)_sortOrderForOperationIdentifier:(id)a0 renderPipelineVersion:(unsigned long long)a1;
- (void)_sortAutoCalculators;
- (void)_startNextAutoCalculator;
- (void)_completeCurrentAutoCalculator;

@end
