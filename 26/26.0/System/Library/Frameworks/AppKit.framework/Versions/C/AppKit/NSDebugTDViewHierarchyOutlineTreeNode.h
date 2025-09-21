@class NSString, NSDebugTDViewHierarchyItem, NSMutableArray;

@interface NSDebugTDViewHierarchyOutlineTreeNode : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableArray *children;
@property (weak, nonatomic) NSDebugTDViewHierarchyOutlineTreeNode *parent;
@property (retain, nonatomic) NSDebugTDViewHierarchyItem *item;
@property (readonly, nonatomic) BOOL isWindow;
@property (readonly, nonatomic) BOOL isTextItem;
@property (readonly, nonatomic) BOOL usesTextKit1;
@property (readonly, nonatomic) BOOL usesTextKit2;

- (id)init;
- (void).cxx_destruct;
- (void)addChild:(id)a0;
- (void)addChildren:(id)a0;
- (id)initWindowWithTitle:(id)a0;
- (id)initWithViewHierarchyItem:(id)a0;
- (BOOL)isLeaf;

@end
