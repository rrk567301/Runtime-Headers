@class NSMutableArray, _UIDebugLogNode;

@interface _UIDebugLogStack : NSObject {
    NSMutableArray *_stack;
}

@property (readonly, nonatomic) _UIDebugLogNode *rootNode;

- (void).cxx_destruct;
- (void)addMessage:(id)a0;
- (id)init;
- (id)popNode;
- (void)pushNode:(id)a0;
- (id)_topNode;
- (void)performWithPushedNode:(id)a0 block:(id /* block */)a1;

@end
