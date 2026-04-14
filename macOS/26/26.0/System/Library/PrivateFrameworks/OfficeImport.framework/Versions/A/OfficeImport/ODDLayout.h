@class ODDLayoutNode;

@interface ODDLayout : NSObject {
    ODDLayoutNode *mRootNode;
}

- (id)rootNode;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
