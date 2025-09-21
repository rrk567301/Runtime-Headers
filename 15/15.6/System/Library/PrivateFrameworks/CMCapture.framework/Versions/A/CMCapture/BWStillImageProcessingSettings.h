@class BWPhotoManifest;

@interface BWStillImageProcessingSettings : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) BWPhotoManifest *photoManifest;
@property (readonly, nonatomic) int expectedClientImageCount;
@property (readonly, nonatomic) char processIntelligentDistortionCorrection;
@property (readonly, nonatomic) char provideDemosaicedRaw;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPhotoManifest:(id)a0 processIntelligentDistortionCorrection:(char)a1;

@end
