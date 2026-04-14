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
@property (nonatomic) BOOL preparesCellularRadioForNetworkConnection;
@property (nonatomic) BOOL preservesDynamicHDRMetadata;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithXPCEncoding:(id)a0;
- (int)sinkType;
- (id)copyXPCEncoding;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
