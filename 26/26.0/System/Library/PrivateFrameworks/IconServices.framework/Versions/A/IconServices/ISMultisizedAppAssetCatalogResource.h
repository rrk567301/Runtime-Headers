@interface ISMultisizedAppAssetCatalogResource : ISIconStackAssetCatalogResource

- (id)imageForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)_compositingDescriptorWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)_lookupForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)iconStackForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
