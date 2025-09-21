@protocol NSObject;

@interface _GKNSPredicateRule : GKNSPredicateRule {
    id<NSObject> _fact;
    float _grade;
    char _asserting;
}

- (void).cxx_destruct;
- (id)initWithPredicate:(id)a0 fact:(id)a1 grade:(float)a2 asserting:(char)a3;
- (void)performActionWithSystem:(id)a0;

@end
