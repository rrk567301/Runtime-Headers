@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NURenderPipelineRegistry : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_registry;
}

+ (id)sharedRegistry;

- (void)_registerRenderPipeline:(id)a0 forIdentifier:(id)a1;
- (id)_renderPipelineForIdentifier:(id)a0;
- (id)init;
- (id)renderPipelineForIdentifier:(id)a0;
- (id)description;
- (void)registerRenderPipeline:(id)a0 forIdentifier:(id)a1;
- (void).cxx_destruct;

@end
