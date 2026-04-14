@protocol IASImageGenerationCreationAnalyzerTestDelegateProtocol;

@interface IASImageGenerationCreationSessionManager : IASMultiSourceSessionManager

@property (weak, nonatomic) id<IASImageGenerationCreationAnalyzerTestDelegateProtocol> testDelegate;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)didAction:(id)a0;
- (void)didSessionBeginWithSessionMetadata:(id)a0;
- (void)didSessionEndWithSessionMetadata:(id)a0;
- (void)handleImageGenerationChannelSignal:(id)a0;
- (id)initWithQueue:(id)a0 serverDelegate:(id)a1 testingDelegate:(id)a2 eventHandler:(id /* block */)a3;
- (void)propagateTestDelegateForAnalyzer:(id)a0;

@end
