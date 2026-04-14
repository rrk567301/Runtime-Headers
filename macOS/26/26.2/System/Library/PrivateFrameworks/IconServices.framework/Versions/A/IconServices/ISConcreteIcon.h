@class ISImageCache, NSUUID;

@interface ISConcreteIcon : ISCodableIcon <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) ISImageCache *imageCache;
@property (readonly) NSUUID *digest;

- (id)makeResourceProvider;
- (id)_fallbackKey;
- (id)symbol;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)imageForDescriptor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)makeSymbolResourceProvider;
- (void)_prepareImagesForImageDescriptors:(id)a0;
- (void).cxx_destruct;
- (id)imageForImageDescriptor:(id)a0;
- (void)resolve;
- (double)_aspectRatio;
- (void)getImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;
- (id)_imageForSymbolImageDescriptor:(id)a0;
- (id)initWithDigest:(id)a0;
- (id)_cachedImageForDescriptor:(id)a0;
- (id)_imageFromStoreForDescriptor:(id)a0;
- (id)_placeholderImageForError:(id)a0 descriptor:(id)a1;
- (unsigned long long)assessValidationToken:(id)a0;
- (id)generateImageWithDescriptor:(id)a0;
- (void)generateImageWithDescriptor:(id)a0 completion:(id /* block */)a1;
- (BOOL)isEqualToIcon:(id)a0;

@end
