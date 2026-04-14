@interface MTL4RenderPipelineColorAttachmentDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) long long blendingState;
@property (nonatomic) unsigned long long sourceRGBBlendFactor;
@property (nonatomic) unsigned long long destinationRGBBlendFactor;
@property (nonatomic) unsigned long long rgbBlendOperation;
@property (nonatomic) unsigned long long sourceAlphaBlendFactor;
@property (nonatomic) unsigned long long destinationAlphaBlendFactor;
@property (nonatomic) unsigned long long alphaBlendOperation;
@property (nonatomic) unsigned long long writeMask;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (id)init;

@end
