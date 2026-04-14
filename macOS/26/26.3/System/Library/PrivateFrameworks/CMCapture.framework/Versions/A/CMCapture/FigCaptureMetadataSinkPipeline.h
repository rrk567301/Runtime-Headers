@class BWSceneClassifierSinkNode, BWMRCNode, NSString, BWMetadataDetectorGatingNode, BWNodeOutput, BWFaceDetectionNode, BWFunnelNode;

@interface FigCaptureMetadataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWMetadataDetectorGatingNode *_metadataGatingNode;
    BWMRCNode *_mrcNode;
    BOOL _mrcSuspended;
    BOOL _mrcConnectionDisabled;
    BWSceneClassifierSinkNode *_sceneClassifierSinkNode;
    BWNodeOutput *_sceneClassifierPipelineUpstreamOutput;
    BWNodeOutput *_smartCameraInferenceOutput;
    BWFaceDetectionNode *_faceDetectionNode;
    NSString *_sourceID;
    int _sourceDeviceType;
    BWFunnelNode *_metadataFunnelNode;
}

+ (void)initialize;

- (void)dealloc;

@end
