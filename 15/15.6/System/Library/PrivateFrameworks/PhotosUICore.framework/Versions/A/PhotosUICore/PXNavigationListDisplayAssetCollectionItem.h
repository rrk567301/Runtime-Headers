@protocol PXDisplayAssetCollection;

@interface PXNavigationListDisplayAssetCollectionItem : PXNavigationListItem {
    char _renamable;
    char _deletable;
}

@property (nonatomic, getter=isReorderable) char reorderable;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> collection;
@property (nonatomic) long long indentationLevel;
@property (nonatomic) unsigned long long lockState;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (char)isDeletable;
- (id)representedObject;
- (char)isDraggable;
- (char)isRenamable;
- (id)glyphImageName;
- (id)initWithIdentifier:(id)a0 title:(id)a1 displayAssetCollection:(id)a2 itemCount:(long long)a3 containerIdentifier:(id)a4;

@end
