@class NSArray, ISImageCache, NSString;

@interface ISLayeredIcon : ISConcreteIcon

@property (retain) NSArray *layerGroups;
@property (retain) ISImageCache *imageCache;
@property (readonly) NSString *typeIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)makeResourceProvider;
- (id)_generateImageWithDescriptor:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithTypeIdentifier:(id)a0 layerGroups:(id)a1;
- (BOOL)isEqual:(id)a0;
- (id)imageForDescriptor:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_prepareImagesForImageDescriptors:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)imageForImageDescriptor:(id)a0;
- (void)getImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)_tweakCopiedImageDescriptorsIfNecessary:(id)a0;

@end
