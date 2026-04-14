@class ODDLayoutNode;

@interface ODDLayout : NSObject {
    ODDLayoutNode *mRootNode;
}

- (void).cxx_destruct;
- (id)rootNode;
- (id)description;
- (id)init;

@end
