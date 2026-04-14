@class PHPhotoLibrary;

@interface _PXPhotoLibraryCuratedLibraryAssetsDataSourceManagerConfiguration : PXCuratedLibraryAssetsDataSourceManagerConfiguration {
    PHPhotoLibrary *_photoLibrary;
}

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0;
- (id)photoLibrary;
- (id)configurationForZoomLevel:(long long)a0;

@end
