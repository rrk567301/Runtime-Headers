@class NSString;

@interface GFXAAMD_MotionEstimationPipeline : NSObject <MTLMotionEstimationPipeline>

@property (readonly, nonatomic) unsigned long long textureWidth;
@property (readonly, nonatomic) unsigned long long textureHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDescriptor:(id)a0;

@end
