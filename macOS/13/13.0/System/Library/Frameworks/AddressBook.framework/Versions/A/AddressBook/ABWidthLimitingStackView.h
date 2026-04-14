@class NSArray;

@interface ABWidthLimitingStackView : NSStackView {
    NSArray *_constraints;
}

- (void).cxx_destruct;
- (void)updateConstraints;
- (id)layoutLines:(id)a0;
- (id)layoutLine:(id)a0;
- (void)enumerateEachPairOfViews:(id)a0 withBlock:(id /* block */)a1;

@end
