@class NSMutableArray;

@interface PLCompoundPredicateBuilder : NSObject {
    NSMutableArray *_subpredicates;
}

- (void)addPredicate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)buildAndPredicate;
- (id)buildAndPredicateOrNil;
- (id)_joinSubpredicatesWithNilOnEmpty:(BOOL)a0 block:(id /* block */)a1;
- (id)buildOrPredicate;
- (id)buildOrPredicateOrNil;

@end
