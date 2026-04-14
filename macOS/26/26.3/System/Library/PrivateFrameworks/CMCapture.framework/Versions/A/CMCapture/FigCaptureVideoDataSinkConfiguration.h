@class NSArray, FigCaptureTrie;

@interface FigCaptureVideoDataSinkConfiguration : FigCaptureSinkConfiguration {
    NSArray *_requestedBufferAttachments;
    FigCaptureTrie *_requestedBufferAttachmentsTrie;
}

@property (nonatomic) BOOL discardsLateVideoFrames;
@property (nonatomic) BOOL optimizedForPreview;
@property (nonatomic) BOOL sceneStabilityMetadataEnabled;
@property (retain, nonatomic) NSArray *requestedBufferAttachments;
@property (readonly, nonatomic) FigCaptureTrie *requestedBufferAttachmentsTrie;
@property (nonatomic) BOOL cinematicFramingSupported;
@property (nonatomic) BOOL cinematicFramingEnabled;
@property (nonatomic) BOOL temporalFilterLowLightBandingMitigationEnabled;
@property (nonatomic) BOOL preparesCellularRadioForNetworkConnection;
@property (nonatomic) BOOL preservesDynamicHDRMetadata;
@property (nonatomic) BOOL panoRecordingInProgress;
@property (nonatomic) BOOL ringLightEnabled;

- (int)sinkType;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyXPCEncoding;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
