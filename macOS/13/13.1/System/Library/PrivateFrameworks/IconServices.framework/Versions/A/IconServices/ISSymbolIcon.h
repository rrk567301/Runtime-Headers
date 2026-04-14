@class ISGraphicIconConfiguration, NSString, ISGraphicSymbolDescriptor, ISImageCache;

@interface ISSymbolIcon : ISIcon

@property (readonly) ISImageCache *imageCache;
@property (readonly) NSString *symbolName;
@property (readonly, copy, nonatomic) ISGraphicIconConfiguration *config;
@property (readonly) ISGraphicSymbolDescriptor *graphicSymbolDescriptor;

- (id)description;
- (void).cxx_destruct;
- (id)symbol;
- (id)initWithSymbolName:(id)a0;
- (id)_generateImageWithDescriptor:(id)a0;
- (id)imageForImageDescriptor:(id)a0;
- (void)getImageForImageDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)_prepareImagesForImageDescriptors:(id)a0;
- (id)initWithSymbolName:(id)a0 configuration:(id)a1;
- (id)_specUpdatedDescriptorForDescriptor:(id)a0;

@end
