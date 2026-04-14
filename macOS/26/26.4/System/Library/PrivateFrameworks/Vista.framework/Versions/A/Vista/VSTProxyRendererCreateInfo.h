@class VSTProxyRendererCreateOptions;
@protocol MTLDevice;

@interface VSTProxyRendererCreateInfo : NSObject

@property (retain, nonatomic) id<MTLDevice> device;
@property (nonatomic) long long primitive;
@property (nonatomic) long long technique;
@property (nonatomic) long long colorMode;
@property (nonatomic) long long depthMode;
@property (nonatomic) long long depthQuality;
@property (nonatomic) long long layout;
@property (nonatomic) unsigned long long shOrder;
@property (nonatomic) unsigned long long colorPixelFormat;
@property (nonatomic) unsigned long long depthPixelFormat;
@property (nonatomic) unsigned long long gridDepthPixelFormat;
@property (nonatomic) unsigned long long numViews;
@property (nonatomic) unsigned long long maxNumVolumes;
@property (retain, nonatomic) VSTProxyRendererCreateOptions *options;

- (void).cxx_destruct;
- (id)init;

@end
