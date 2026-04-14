@class ISImageCache, NSUUID;

@interface ISConcreteIcon : ISIcon <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) ISImageCache *imageCache;
@property (readonly) NSUUID *digest;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)symbol;
- (id)imageForDescriptor:(id)a0;
- (void)resolve;
- (id)imageForImageDescriptor:(id)a0;
- (void)getImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)_prepareImagesForImageDescriptors:(id)a0;
- (id)_imageForSymbolImageDescriptor:(id)a0;
- (double)_aspectRatio;
- (id)initWithDigest:(id)a0;
- (id)makeResourceProvider;
- (id)makeSymbolResourceProvider;
- (BOOL)isEqualToIcon:(id)a0;
- (id)_fallbackKey;
- (id)_imageFromStoreForDescriptor:(id)a0;
- (unsigned long long)assessValidationToken:(id)a0;
- (id)_placeholderImageWithImageDescriptor:(id)a0 markAsPlaceholder:(BOOL)a1;
- (id)_cachedImageForDescriptor:(id)a0;
- (id)generateImageWithDescriptor:(id)a0;
- (void)generateImageWithDescriptor:(id)a0 completion:(id /* block */)a1;

@end
