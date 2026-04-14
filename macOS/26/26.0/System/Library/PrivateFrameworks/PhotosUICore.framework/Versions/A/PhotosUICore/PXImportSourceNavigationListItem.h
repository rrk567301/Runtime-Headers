@class PHPhotoLibrary, NSImage, PHImportSource;

@interface PXImportSourceNavigationListItem : PXNavigationListItem

@property (readonly, nonatomic) PHImportSource *importSource;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) NSImage *image;

+ (id)identifierForImportSource:(id)a0;

- (BOOL)isRemovable;
- (id)fileURL;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)representedObject;
- (id)accessoryGlyphImageName;
- (id)glyphImageName;
- (id)initWithIdentifier:(id)a0 title:(id)a1 accessoryTitle:(id)a2 reorderable:(BOOL)a3 topLevelIdentifier:(id)a4;
- (id)initWithImportSource:(id)a0 photoLibrary:(id)a1;

@end
