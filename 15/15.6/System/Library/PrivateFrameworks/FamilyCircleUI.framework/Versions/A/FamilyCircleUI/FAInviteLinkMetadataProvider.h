@class FAInviteContext;

@interface FAInviteLinkMetadataProvider : NSObject {
    FAInviteContext *_context;
}

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (id)_imageNamed:(id)a0;
- (id)_defaultImage;
- (id)_defaultIcon;
- (id)_colorForString:(id)a0;
- (void)fetchImageFromURL:(id)a0 completion:(id /* block */)a1;
- (id)linkMetadataWithImage:(id)a0 icon:(id)a1;
- (void)loadImageWithURL:(id)a0 enableTextOverlay:(char)a1 completion:(id /* block */)a2;
- (void)loadMetatadataWithCompletion:(id /* block */)a0;

@end
