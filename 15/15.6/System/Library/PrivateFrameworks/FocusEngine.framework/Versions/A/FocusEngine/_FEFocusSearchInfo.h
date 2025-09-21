@interface _FEFocusSearchInfo : NSObject

@property (copy, nonatomic) id /* block */ evaluator;
@property (nonatomic) char treatFocusableItemAsLeaf;
@property (nonatomic) char forceFocusToLeaveContainer;

+ (id)defaultInfo;

- (void).cxx_destruct;
- (id)initWithFocusEvaluator:(id /* block */)a0;
- (char)shouldIncludeFocusItem:(id)a0;

@end
