@class IOSurface;

@interface VSTVolumeData : NSObject <NSSecureCoding> {
    struct shared_ptr<vst::splat::VolumeData> { struct VolumeData *__ptr_; struct __shared_weak_count *__cntrl_; } _volumeData;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) void *internalVolumeData;
@property (readonly, nonatomic) unsigned long long numSplats;
@property (readonly, nonatomic) unsigned long long supportedSHOrder;
@property (readonly, nonatomic) long long packingMethod;
@property (nonatomic) void /* unknown type, empty encoding */ boxMin;
@property (nonatomic) void /* unknown type, empty encoding */ boxMax;
@property (readonly, nonatomic) IOSurface *splatPositions;
@property (readonly, nonatomic) IOSurface *splatColors;
@property (readonly, nonatomic) IOSurface *splatScales;
@property (readonly, nonatomic) IOSurface *splatRotations;
@property (readonly, nonatomic) IOSurface *splatSHs;
@property (readonly, nonatomic) IOSurface *splatNormals;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (id)initFromPersonaModelOutputInfo:(id)a0;
- (BOOL)dumpToPath:(id)a0;
- (id)initFromBlobInfo:(id)a0;
- (id)initFromCapacityInfo:(id)a0;
- (id)initFromFloatInfo:(id)a0;
- (id)initFromQuantizedInfo:(id)a0;
- (id)initWithInternalVolumeData:(const void *)a0;
- (BOOL)updateFromPersonaModelOutputInfo:(id)a0;

@end
