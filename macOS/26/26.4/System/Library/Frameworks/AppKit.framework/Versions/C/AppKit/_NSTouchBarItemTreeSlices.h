@class NSTouchBarItemTreeNode;

@interface _NSTouchBarItemTreeSlices : NSObject {
    NSTouchBarItemTreeNode *_leftNode;
    NSTouchBarItemTreeNode *_rightNode;
}

@property (readonly) NSTouchBarItemTreeNode *leftNode;
@property (readonly) NSTouchBarItemTreeNode *rightNode;

- (id)init;
- (void)dealloc;
- (id)initWithLeftNode:(id)a0 rightNode:(id)a1;

@end
