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

- (unsigned long long)hash;
- (void)cannotProcessDepthPhotos;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)initWithPhotoManifest:(id)a0 processIntelligentDistortionCorrection:(BOOL)a1;
- (BOOL)isEqual:(id)a0;

@end
