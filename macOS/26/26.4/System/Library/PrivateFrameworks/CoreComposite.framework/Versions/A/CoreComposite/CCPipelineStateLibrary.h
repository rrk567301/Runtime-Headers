@class NSMutableDictionary, CCContextDeviceGroup;

@interface CCPipelineStateLibrary : NSObject {
    NSMutableDictionary *_pipelines;
    CCContextDeviceGroup *_deviceGroup;
    NSMutableDictionary *_specializedPipelines;
    NSMutableDictionary *_renderPipelines;
    NSMutableDictionary *_specializedRenderPipelines;
}

- (void).cxx_destruct;
- (id)description;

@end
