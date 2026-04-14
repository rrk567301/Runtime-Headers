@class PHCollectionList, NSString;

@interface PXNavigationListCollectionListItem : PXNavigationListItem {
    NSString *_collectionIdentifier;
}

@property (readonly, nonatomic) PHCollectionList *collection;

- (id)collectionIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isDeletable;
- (id)representedObject;
- (BOOL)isDraggable;
- (BOOL)isRenamable;
- (BOOL)isExpandable;
- (BOOL)canRearrangeContent;
- (id)glyphImageName;
- (id)initWithCollectionList:(id)a0 accessoryTitle:(id)a1 reorderable:(BOOL)a2 topLevelIdentifier:(id)a3;

@end
