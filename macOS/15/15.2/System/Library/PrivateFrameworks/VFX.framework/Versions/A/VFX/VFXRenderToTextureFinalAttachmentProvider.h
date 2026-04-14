@class NSString, VFXDrawableDescriptor;
@protocol MTLTexture;

@interface VFXRenderToTextureFinalAttachmentProvider : NSObject <VFXTextureAttachmentProvider> {
    id<MTLTexture> _texture;
    unsigned long long _finalAttachementIdentifier;
    VFXDrawableDescriptor *_drawableDescriptor;
}

@property (readonly, retain, nonatomic) VFXDrawableDescriptor *drawableDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithTexture:(id)a0;
- (id)textureForAttachment:(id)a0 withDescriptor:(id)a1;

@end
