@class BWSceneClassifierSinkNode, BWMRCNode, NSString, BWMetadataDetectorGatingNode, BWNodeOutput, BWFaceDetectionNode;

@interface FigCaptureMetadataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWMetadataDetectorGatingNode *_metadataGatingNode;
    BWMRCNode *_mrcNode;
    char _mrcSuspended;
    char _mrcConnectionDisabled;
    BWSceneClassifierSinkNode *_sceneClassifierSinkNode;
    BWNodeOutput *_sceneClassifierPipelineUpstreamOutput;
    BWNodeOutput *_smartCameraInferenceOutput;
    BWFaceDetectionNode *_faceDetectionNode;
    NSString *_sourceID;
    int _sourceDeviceType;
}

+ (void)initialize;

- (void)dealloc;

@end
