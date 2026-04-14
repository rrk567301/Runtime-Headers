@class ISImageCache, NSArray;

@interface ISImageBagIcon : ISIcon {
    NSArray *_decorations;
}

@property (retain) ISImageCache *imageCache;
@property (readonly) NSArray *images;

- (id)makeResourceProvider;
- (id)_generateImageWithDescriptor:(id)a0;
- (id)decorations;
- (id)initWithImageBag:(id)a0;
- (id)_remoteGenerateImageWithDescriptor:(id)a0;
- (void)_prepareImagesForImageDescriptors:(id)a0;
- (void).cxx_destruct;
- (id)initWithImages:(id)a0 decorations:(id)a1;
- (id)imageForImageDescriptor:(id)a0;
- (id)initWithImages:(id)a0;
- (void)getImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;

@end
