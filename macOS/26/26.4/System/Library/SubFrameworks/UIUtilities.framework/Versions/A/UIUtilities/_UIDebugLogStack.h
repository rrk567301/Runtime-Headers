@class NSMutableArray, _UIDebugLogNode;

@interface _UIDebugLogStack : NSObject {
    NSMutableArray *_stack;
}

@property (readonly, nonatomic) _UIDebugLogNode *rootNode;

- (void)addMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)popNode;
- (void)pushNode:(id)a0;
- (id)_topNode;
- (void)performWithPushedNode:(id)a0 block:(id /* block */)a1;

@end
