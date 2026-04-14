@class BWPhotoManifest;

@interface BWStillImageProcessingSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BWPhotoManifest *photoManifest;
@property (readonly, nonatomic) int expectedClientImageCount;
@property (readonly, nonatomic) BOOL processIntelligentDistortionCorrection;
@property (readonly, nonatomic) BOOL provideDemosaicedRaw;
@property (nonatomic) BOOL optimizedProcessingForZoomFOVEnabled;
@property (nonatomic) BOOL optimizedProcessingWithCropAndDownscaleEnabled;
@property (nonatomic) BOOL documentScanning;

- (id)initWithPhotoManifest:(id)a0 processIntelligentDistortionCorrection:(BOOL)a1;
- (void)cannotProcessDepthPhotos;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
