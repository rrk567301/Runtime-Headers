@class BWPhotoManifest;

@interface BWStillImageProcessingSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BWPhotoManifest *photoManifest;
@property (readonly, nonatomic) int expectedClientImageCount;
@property (readonly, nonatomic) BOOL processIntelligentDistortionCorrection;
@property (readonly, nonatomic) BOOL provideDemosaicedRaw;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPhotoManifest:(id)a0 processIntelligentDistortionCorrection:(BOOL)a1;

@end
