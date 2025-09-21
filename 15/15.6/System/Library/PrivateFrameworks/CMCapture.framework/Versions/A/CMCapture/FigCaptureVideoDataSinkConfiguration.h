@class NSArray, FigCaptureTrie;

@interface FigCaptureVideoDataSinkConfiguration : FigCaptureSinkConfiguration {
    NSArray *_requestedBufferAttachments;
    FigCaptureTrie *_requestedBufferAttachmentsTrie;
}

@property (nonatomic) char discardsLateVideoFrames;
@property (nonatomic) char optimizedForPreview;
@property (nonatomic) char sceneStabilityMetadataEnabled;
@property (retain, nonatomic) NSArray *requestedBufferAttachments;
@property (readonly, nonatomic) FigCaptureTrie *requestedBufferAttachmentsTrie;
@property (nonatomic) char cinematicFramingEnabled;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (int)sinkType;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;

@end
