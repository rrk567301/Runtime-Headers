@interface DDBridgeModelLoader : NSObject

- (void)update:(double)a0;
- (id)init;
- (void)requestCompleted:(id)a0;
- (void)loadModelFrom:(id)a0;
- (void)setCallbacksWithModelUpdatedCallback:(id /* block */)a0 textureUpdatedCallback:(id /* block */)a1 materialUpdatedCallback:(id /* block */)a2;

@end
