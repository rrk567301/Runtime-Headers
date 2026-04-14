@class NSMutableArray;

@interface PLCompoundPredicateBuilder : NSObject {
    NSMutableArray *_subpredicates;
}

- (id)init;
- (void).cxx_destruct;
- (void)addSubpredicate:(id)a0;
- (id)buildAndCompoundPredicate;
- (id)_joinSubpredicatesWithBlock:(id /* block */)a0;
- (id)buildOrCompoundPredicate;

@end
