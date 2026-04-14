@interface _GKBlockRule : GKRule {
    id /* block */ _predicate;
    id /* block */ _action;
}

- (void).cxx_destruct;
- (id)initWithPredicate:(id /* block */)a0 action:(id /* block */)a1;
- (BOOL)evaluatePredicateWithSystem:(id)a0;
- (void)performActionWithSystem:(id)a0;

@end
