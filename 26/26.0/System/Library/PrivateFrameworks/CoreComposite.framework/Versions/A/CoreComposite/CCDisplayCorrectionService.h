@class CCDisplayCameraData, CCDisplayDepthDescriptor, CCDisplayMeshDescriptor, CCContextDeviceGroup, CCDisplayDistortionData, CCDisplayMeshData, CCDisplayDistortionDescriptor, CCDisplayDepthData, CCMultiviewTextureData, CCDisplayCorrectionServiceDescriptor, CCMattingCoefficientsData, CCDisplayCameraDescriptor, CCDisplayCorrectionData, CCDisplayCorrectionPipeline, CCDisplayReprojectedDepthDescriptor, CCMattingCoefficientsDescriptor, CCDisplayCorrectionDebugData, CCDisplayReprojectedDepthData;

@interface CCDisplayCorrectionService : CCService {
    CCDisplayCorrectionPipeline *_pipeline;
    struct CCDisplayCorrectionSharedPipelineState { CCContextDeviceGroup *deviceGroup; long long frameCount; CCDisplayCorrectionServiceDescriptor *serviceDescriptor; struct CCDisplayCorrectionFlags { BOOL computeDepthPreBlur; BOOL computeDepthPostBlur; BOOL mattingInitialized; BOOL computeMatting; BOOL depthAvailable; BOOL lateLatchingEnabled; BOOL zoomEnabled; BOOL enablePrototypingFeatures; } flags; struct CCDisplayCorrectionCyclopeanData { CCDisplayCorrectionData *runtimeSettings; CCMultiviewTextureData *virtualContentMask; } cyclopeanLaneData; struct CCDisplayCorrectionStereoData { CCDisplayCameraData *camera[2]; CCDisplayDistortionData *distortion; CCDisplayDepthData *depth; CCDisplayReprojectedDepthData *reprojectedDepth; CCDisplayMeshData *mesh[2]; CCDisplayCameraData *s3; CCDisplayCameraData *s4; CCDisplayCorrectionDebugData *debug; CCMattingCoefficientsData *mattingCoefficients; } stereoLaneData[2]; struct CCDisplayCorrectionStereoDescriptors { CCDisplayDepthDescriptor *depth; CCDisplayReprojectedDepthDescriptor *reprojectedDepth; CCDisplayMeshDescriptor *mesh[2]; CCDisplayCameraDescriptor *camera[2]; CCDisplayDistortionDescriptor *distortion; CCMattingCoefficientsDescriptor *mattingCoefficients; } stereoDescriptors[2]; } _frame;
}

+ (id)new;

- (BOOL)setDescriptor:(id)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)releaseBuffers;
- (void)addAllocations:(id)a0;
- (BOOL)buildWithDeviceGroup:(id)a0;
- (BOOL)reallocateBuffersWithDeviceGroup:(id)a0;
- (void)removeAllocations:(id)a0;
- (BOOL)updateLanes:(id)a0;

@end
