@class PHCollection;

@interface PXNavigationListGroupItem : PXNavigationListItem {
    char _group;
    char _draggable;
    char _expandable;
    PHCollection *_collection;
}

+ (id)titleForIdentifier:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)collection;
- (char)isGroup;
- (char)isDraggable;
- (char)isExpandable;
- (id)initWithIdentifier:(id)a0 collection:(id)a1;

@end
