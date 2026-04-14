@class BWPhotoManifest;

@interface BWStillImageProcessingSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BWPhotoManifest *photoManifest;
@property (readonly, nonatomic) int expectedClientImageCount;
@property (readonly, nonatomic) BOOL processIntelligentDistortionCorrection;
@property (readonly, nonatomic) BOOL provideDemosaicedRaw;
@property (nonatomic) BOOL optimizedProcessingForZoomFOVEnabled;
@property (nonatomic) BOOL documentScanning;

- (void)cannotProcessDepthPhotos;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithPhotoManifest:(id)a0 processIntelligentDistortionCorrection:(BOOL)a1;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
