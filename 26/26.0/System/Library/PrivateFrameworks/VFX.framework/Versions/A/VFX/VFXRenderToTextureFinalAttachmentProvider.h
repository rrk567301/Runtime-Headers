@class NSString, VFXTextureAttachmentDescriptor;
@protocol MTLTexture;

@interface VFXRenderToTextureFinalAttachmentProvider : NSObject <VFXTextureAttachmentProvider> {
    id<MTLTexture> _texture;
    unsigned long long _finalAttachementIdentifier;
    VFXTextureAttachmentDescriptor *_drawableDescriptor;
}

@property (nonatomic) BOOL shouldLoad;
@property (readonly, retain, nonatomic) VFXTextureAttachmentDescriptor *finalColorDescriptor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)initWithTexture:(id)a0;
- (unsigned long long)loadActionForAttachment:(id)a0;
- (id)textureForAttachment:(id)a0 withDescriptor:(id)a1;

@end
