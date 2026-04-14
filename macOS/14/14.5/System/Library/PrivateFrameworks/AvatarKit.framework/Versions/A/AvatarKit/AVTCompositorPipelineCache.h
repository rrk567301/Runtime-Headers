@class NSMutableDictionary;
@protocol MTLLibrary;

@interface AVTCompositorPipelineCache : NSObject {
    id<MTLLibrary> _library;
    NSMutableDictionary *_pipelines;
}

+ (id)pipelineForPropertyName:(id)a0 device:(id)a1;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0;
- (id)pipelineForPropertyName:(id)a0;

@end
