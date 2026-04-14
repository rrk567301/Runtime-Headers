@class PHAssetCollection, NSString;

@interface PXNavigationListAssetCollectionItem : PXNavigationListItem {
    NSString *_collectionIdentifier;
}

@property (readonly, nonatomic) PHAssetCollection *collection;
@property (nonatomic) unsigned long long lockState;

- (id)accessibilityIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)collectionIdentifier;
- (BOOL)isDeletable;
- (id)representedObject;
- (BOOL)isDraggable;
- (BOOL)isRenamable;
- (id)accessoryGlyphImageName;
- (id)accessoryTitle;
- (id)glyphImageName;
- (id)initWithAssetCollection:(id)a0 accessoryTitle:(id)a1 reorderable:(BOOL)a2 topLevelIdentifier:(id)a3;
- (BOOL)wantsKeyAssetImage;

@end
