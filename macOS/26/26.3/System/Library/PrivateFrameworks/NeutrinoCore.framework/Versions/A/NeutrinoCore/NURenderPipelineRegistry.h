@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface NURenderPipelineRegistry : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_registry;
}

+ (id)sharedRegistry;

- (id)_renderPipelineForIdentifier:(id)a0;
- (void)_registerRenderPipeline:(id)a0 forIdentifier:(id)a1;
- (id)description;
- (id)init;
- (void)registerRenderPipeline:(id)a0 forIdentifier:(id)a1;
- (id)renderPipelineForIdentifier:(id)a0;
- (void).cxx_destruct;

@end
