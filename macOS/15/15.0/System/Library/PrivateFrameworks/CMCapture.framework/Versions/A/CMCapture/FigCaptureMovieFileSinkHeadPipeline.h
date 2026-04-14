@class BWIrisStagingNode, NSString, NSMutableArray, NSArray, BWSceneClassifierSinkNode, BWAudioConverterNode, BWFileCoordinatorNode, BWNodeOutput, BWVideoOrientationMetadataNode, BWPhotoDecompressorNode, BWVideoDefringingNode;
@protocol BWSemanticStyleSceneObserver, BWMRCSceneObserver;

@interface FigCaptureMovieFileSinkHeadPipeline : FigCapturePipeline {
    BWSceneClassifierSinkNode *_sceneClassifierSinkNode;
    BWAudioConverterNode *_audioConverterNode;
    BWAudioConverterNode *_cinematicAudioConverterNode;
    BWNodeOutput *_sceneClassifierPipelineUpstreamOutput;
    int _sourceDeviceType;
}

@property (nonatomic, setter=setMRCSceneObserver:) id<BWMRCSceneObserver> mrcSceneObserver;
@property (nonatomic) id<BWSemanticStyleSceneObserver> semanticStyleSceneObserver;
@property (readonly, nonatomic) NSString *videoConnectionID;
@property (readonly, nonatomic) NSString *videoSourceID;
@property (readonly, nonatomic) int videoSourceDeviceType;
@property (readonly, nonatomic) BWIrisStagingNode *irisStagingNode;
@property (readonly, nonatomic) BWFileCoordinatorNode *fileCoordinatorNode;
@property (readonly, nonatomic) BWVideoOrientationMetadataNode *videoOrientationMetadataNode;
@property (readonly, nonatomic) BWPhotoDecompressorNode *irisIntermediateJPEGPhotoDecompressorNode;
@property (readonly, nonatomic) BWVideoDefringingNode *videoDefringingNode;
@property (readonly, nonatomic) BWNodeOutput *videoOutput;
@property (readonly, nonatomic) BWNodeOutput *audioOutput;
@property (readonly, nonatomic) BWNodeOutput *cinematicAudioOutput;
@property (readonly, nonatomic) NSMutableArray *metadataOutputs;
@property (readonly, nonatomic) NSArray *indexesOfDetectedObjectsInMetadataOutputs;
@property (readonly, nonatomic) int indexOfVideoOrientationInMetadataOutputs;
@property (readonly, nonatomic) NSMutableArray *inferenceConnections;
@property (nonatomic) BOOL sceneClassifierSuspended;

- (void)dealloc;
- (id)initWithConfiguration:(id)a0 videoSourceCaptureOutput:(id)a1 audioSourceCaptureOutput:(id)a2 audioSourceCinematicAudioCaptureOutput:(id)a3 detectedObjectBoxedMetadataOutputs:(id)a4 objectDetectionSourceOutput:(id)a5 metadataSourcePipelineOutputs:(id)a6 graph:(id)a7 parentPipeline:(id)a8 inferenceScheduler:(id)a9 captureDevice:(id)a10 audioSourceDelegate:(id)a11 fileCoordinatorStatusDelegate:(id)a12 irisRequestDelegate:(id)a13 masterClock:(struct OpaqueCMClock { } *)a14 workgroup:(id)a15 videoGreenGhostMitigationEnabled:(BOOL)a16;

@end
