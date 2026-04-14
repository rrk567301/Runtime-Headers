@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NURenderPipelineRegistry : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_registry;
}

+ (id)sharedRegistry;

- (id)renderPipelineForIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_renderPipelineForIdentifier:(id)a0;
- (void)registerRenderPipeline:(id)a0 forIdentifier:(id)a1;
- (void)_registerRenderPipeline:(id)a0 forIdentifier:(id)a1;
- (id)init;

@end
