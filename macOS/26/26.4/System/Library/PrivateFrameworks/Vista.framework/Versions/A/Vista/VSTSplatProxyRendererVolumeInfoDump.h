@class VSTSplatVolumeDataDump, VSTProxyRendererTextureBoundsDump;

@interface VSTSplatProxyRendererVolumeInfoDump : VSTSplatVersionDump {
    struct shared_ptr<vst::splat::VolumeData> { struct VolumeData *__ptr_; struct __shared_weak_count *__cntrl_; } _volumeDataPtr;
}

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } volumeToWorld;
@property (retain, nonatomic) VSTSplatVolumeDataDump *volumeData;
@property (retain, nonatomic) VSTProxyRendererTextureBoundsDump *customColorTextureBounds;
@property (retain, nonatomic) VSTProxyRendererTextureBoundsDump *customDepthTextureBounds;
@property (retain, nonatomic) VSTProxyRendererTextureBoundsDump *customGridDepthTextureBounds;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)metadata;
- (id).cxx_construct;
- (id)initWithCoder:(id)a0;
- (struct shared_ptr<vst::splat::VolumeData> { struct VolumeData *x0; struct __shared_weak_count *x1; })makeVolumeDataWithDevice:(id)a0;

@end
