@class NSTouchBarItem;

@interface NSTouchBarItemTreeItemNode : NSTouchBarItemTreeNode

@property (readonly) NSTouchBarItem *item;

+ (id)nodeForItem:(id)a0;

- (id)itemIdentifier;
- (void)dealloc;
- (id)initWithItem:(id)a0;
- (id)description;
- (id)initWithNode:(id)a0 children:(id)a1;

@end
