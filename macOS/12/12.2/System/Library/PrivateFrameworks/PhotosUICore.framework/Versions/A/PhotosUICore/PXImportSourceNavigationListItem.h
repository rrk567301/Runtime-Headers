@class PHPhotoLibrary, NSImage, PHImportSource;

@interface PXImportSourceNavigationListItem : PXNavigationListItem

@property (readonly, nonatomic) PHImportSource *importSource;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSImage *image;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isRemovable;
- (id)representedObject;
- (id)glyphImageName;
- (id)initWithImportSource:(id)a0 photoLibrary:(id)a1;
- (id)initWithIdentifier:(id)a0 title:(id)a1 itemCount:(long long)a2;

@end
