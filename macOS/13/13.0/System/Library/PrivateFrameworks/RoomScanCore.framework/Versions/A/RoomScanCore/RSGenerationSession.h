@class RSOfflineFloorPlanGenerator, RSGenerationConfiguration, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface RSGenerationSession : NSObject {
    NSObject<OS_dispatch_semaphore> *_generationSemaphore;
    NSObject<OS_dispatch_queue> *_queue;
    RSOfflineFloorPlanGenerator *_fpGenerator;
    RSGenerationConfiguration *_configuration;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)setLiveDumpEnable:(BOOL)a0;
- (id)getDebugInfo;
- (void)updateFloorPlanGeneratorWithConfiguration:(id)a0;
- (id)processWithKeyframes:(id)a0 initialAsset:(id)a1;
- (id)processWithKeyframes:(id)a0 initialAsset:(id)a1 error:(id *)a2;
- (void)processWithKeyframes:(id)a0 initialAsset:(id)a1 completionHandler:(id /* block */)a2;
- (void)processWithKeyframes:(id)a0 initialAsset:(id)a1 completionHandlerWithError:(id /* block */)a2;
- (id)standardizeFloorPlan:(id)a0;

@end
