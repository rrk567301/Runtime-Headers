@class NSString;
@protocol PXDisplayCollectionList;

@interface PXNavigationListDisplayCollectionListItem : PXNavigationListItem {
    char _renamable;
    char _deletable;
    char _expandable;
    NSString *_glyphImageName;
    NSString *_accessoryGlyphImageName;
}

@property (nonatomic, getter=isDraggable) char draggable;
@property (nonatomic, getter=isReorderable) char reorderable;
@property (readonly, nonatomic) id<PXDisplayCollectionList> collection;
@property (nonatomic) long long indentationLevel;
@property (nonatomic, getter=isExpanded) char expanded;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (char)isDeletable;
- (id)representedObject;
- (char)isRenamable;
- (char)isExpandable;
- (id)accessoryGlyphImageName;
- (id)glyphImageName;
- (id)initWithIdentifier:(id)a0 displayCollectionList:(id)a1 title:(id)a2 itemCount:(long long)a3 containerIdentifier:(id)a4;

@end
