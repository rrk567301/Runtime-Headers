@class NSArray;

@interface ABWidthLimitingStackView : NSStackView {
    NSArray *_constraints;
}

- (void)updateConstraints;
- (void).cxx_destruct;
- (void)enumerateEachPairOfViews:(id)a0 withBlock:(id /* block */)a1;
- (id)layoutLine:(id)a0;
- (id)layoutLines:(id)a0;

@end
