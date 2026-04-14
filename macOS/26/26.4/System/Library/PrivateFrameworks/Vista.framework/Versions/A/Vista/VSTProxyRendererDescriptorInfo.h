@class NSArray, VSTProxyRendererProxyMeshOptions, VSTProxyRendererResolutionOptions, VSTProxyRendererVolumeBounds;

@interface VSTProxyRendererDescriptorInfo : NSObject

@property (retain, nonatomic) NSArray *views;
@property (retain, nonatomic) VSTProxyRendererResolutionOptions *resolutionOptions;
@property (retain, nonatomic) VSTProxyRendererVolumeBounds *volumeBounds;
@property (retain, nonatomic) VSTProxyRendererProxyMeshOptions *proxyMeshOptions;

- (void).cxx_destruct;
- (id)init;

@end
