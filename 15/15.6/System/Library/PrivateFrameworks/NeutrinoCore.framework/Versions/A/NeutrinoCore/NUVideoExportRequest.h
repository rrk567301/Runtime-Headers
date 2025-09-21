@class NSArray, NSProgress, NSDictionary, NUColorSpace;

@interface NUVideoExportRequest : NUExportRequest

@property (retain) NSProgress *progress;
@property (copy) NSDictionary *outputSettings;
@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (copy) NSArray *metadata;
@property (nonatomic) char bypassOutputSettingsIfNoComposition;
@property (nonatomic) char requireHardwareEncoder;
@property (nonatomic) char applyOrientationAsMetadata;
@property (nonatomic) char includeCinematicVideoTracks;
@property (nonatomic) char includeSemanticStyleTracks;
@property (nonatomic) char computeDigest;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)submit:(id /* block */)a0;
- (id)initWithComposition:(id)a0;
- (long long)mediaComponentType;
- (id)newRenderJob;
- (void)submitWithProgress:(id)a0 completion:(id /* block */)a1;

@end
