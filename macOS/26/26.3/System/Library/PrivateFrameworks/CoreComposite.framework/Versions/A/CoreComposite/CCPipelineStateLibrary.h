@class NSMutableDictionary, CCContextDeviceGroup;

@interface CCPipelineStateLibrary : NSObject {
    NSMutableDictionary *_pipelines;
    CCContextDeviceGroup *_deviceGroup;
    NSMutableDictionary *_specializedPipelines;
    NSMutableDictionary *_renderPipelines;
    NSMutableDictionary *_specializedRenderPipelines;
}

- (id)description;
- (void).cxx_destruct;

@end
