@class NSString, PHCollection;

@interface PXNavigationListGroupItem : PXNavigationListItem {
    BOOL _group;
    BOOL _draggable;
    BOOL _expandable;
    BOOL _displayInline;
    BOOL _defaultsToExpanded;
    PHCollection *_collection;
    NSString *_collectionIdentifier;
}

+ (id)titleForIdentifier:(id)a0;

- (id)collectionIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)accessibilityIdentifier;
- (id)collection;
- (BOOL)isGroup;
- (void).cxx_destruct;
- (BOOL)isDraggable;
- (BOOL)displayInline;
- (BOOL)isExpandable;
- (BOOL)canRearrangeContent;
- (BOOL)defaultsToExpanded;
- (id)initWithCollectionList:(id)a0;
- (id)initWithIdentifier:(id)a0 defaultsToExpanded:(BOOL)a1;
- (id)initWithIdentifier:(id)a0 displayInline:(BOOL)a1;

@end
