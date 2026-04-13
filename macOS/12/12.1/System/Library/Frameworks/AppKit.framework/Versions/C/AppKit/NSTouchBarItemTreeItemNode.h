@class NSTouchBarItem;

@interface NSTouchBarItemTreeItemNode : NSTouchBarItemTreeNode

@property (readonly) NSTouchBarItem *item;

+ (id)nodeForItem:(id)a0;

- (void)dealloc;
- (id)description;
- (id)itemIdentifier;
- (id)initWithNode:(id)a0 children:(id)a1;
- (id)initWithItem:(id)a0;

@end
