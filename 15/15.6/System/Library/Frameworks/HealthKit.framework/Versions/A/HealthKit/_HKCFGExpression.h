@interface _HKCFGExpression : NSObject

@property (nonatomic) char isPrivate;

- (id)_label;
- (unsigned long long)_minimumLength;
- (void)_tryNodesWithContext:(id)a0 solutionTest:(id /* block */)a1;

@end
