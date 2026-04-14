@class NSTouchBarItem;

@interface NSTouchBarItemTreeItemNode : NSTouchBarItemTreeNode

@property (readonly) NSTouchBarItem *item;

+ (id)nodeForItem:(id)a0;

- (id)itemIdentifier;
- (id)initWithItem:(id)a0;
- (id)description;
- (void)dealloc;
- (id)initWithNode:(id)a0 children:(id)a1;

@end
