@class ISImageCache, NSArray, NSString;

@interface ISLayeredIcon : ISIcon

@property (retain) ISImageCache *imageCache;
@property unsigned long long bundlePlatform;
@property (retain) NSArray *layerGroups;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSArray *imageLayers;
@property (readonly) NSString *typeIdentifier;
@property (readonly) NSArray *iconLayers;

- (id)_init;
- (void)_prepareImagesForImageDescriptors:(id)a0;
- (void)getImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;
- (id)initWithBundleIdentifier:(id)a0 imageLayers:(id)a1;
- (id)_generateImageWithDescriptor:(id)a0;
- (id)imageForImageDescriptor:(id)a0;
- (id)initWithTypeIdentifier:(id)a0 layerGroups:(id)a1;
- (void).cxx_destruct;
- (id)initWithTypeIdentifier:(id)a0 iconLayers:(id)a1;
- (long long)_IS_cuiShadowStyleFromStyle:(long long)a0;
- (void)_tweakCopiedImageDescriptorsIfNecessary:(id)a0;
- (id)baseStackForDescriptor:(id)a0;
- (id)iconStackForDescriptor:(id)a0;

@end
