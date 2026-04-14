@class BWMRCNode, NSString, BWMetadataDetectorGatingNode, BWFaceDetectionNode;

@interface FigCaptureMetadataSinkPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWMetadataDetectorGatingNode *_metadataGatingNode;
    BWMRCNode *_mrcNode;
    BOOL _mrcSuspended;
    BOOL _mrcConnectionDisabled;
    BWFaceDetectionNode *_faceDetectionNode;
    NSString *_sourceID;
    int _sourceDeviceType;
}

+ (void)initialize;

- (void)dealloc;

@end
