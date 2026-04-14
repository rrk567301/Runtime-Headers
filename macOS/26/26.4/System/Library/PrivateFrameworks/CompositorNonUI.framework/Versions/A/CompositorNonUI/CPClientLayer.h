@class NSString, CP_OBJECT_cp_layer_renderer;

@interface CPClientLayer : NSObject <WBClientLayer>

@property (weak) CP_OBJECT_cp_layer_renderer *layer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)stageChainlink:(id)a0 blockRendering:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)stageRecorderSwapchain:(id)a0 completionHandler:(id /* block */)a1;

@end
