@class NSString, MTLTextureDescriptor;

@interface VFXDrawableDescriptor : NSObject

@property (class, readonly, nonatomic) NSString *drawableAttachment;

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) unsigned long long pixelFormat;
@property (readonly, nonatomic) MTLTextureDescriptor *metalDescriptor;

@end
