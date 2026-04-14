@class _UIDebugLogNodeTreeStyle, NSMutableArray;

@interface _UIDebugLogNode : _UIDebugLogMessage {
    NSMutableArray *_childMessages;
}

@property (retain, nonatomic) _UIDebugLogNodeTreeStyle *treeStyle;
@property (readonly, nonatomic) BOOL hasMessages;

+ (id)rootNode;

- (void)addMessage:(id)a0;
- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)_isNode;
- (void)__genericAppendChildDescription:(id)a0 withPrefix:(id)a1 inheritedTreeStyle:(id)a2 recursionSelector:(SEL)a3 appendHandler:(id /* block */)a4;
- (void)_appendChildDescription:(id)a0 withPrefix:(id)a1 inheritedTreeStyle:(id)a2;

@end
