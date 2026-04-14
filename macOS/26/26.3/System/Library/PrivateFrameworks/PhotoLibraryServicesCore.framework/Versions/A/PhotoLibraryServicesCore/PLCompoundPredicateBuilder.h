@class NSMutableArray;

@interface PLCompoundPredicateBuilder : NSObject {
    NSMutableArray *_subpredicates;
}

- (id)init;
- (void)addPredicate:(id)a0;
- (void).cxx_destruct;
- (id)buildAndPredicate;
- (id)buildAndPredicateOrNil;
- (id)_joinSubpredicatesWithNilOnEmpty:(BOOL)a0 block:(id /* block */)a1;
- (id)buildOrPredicate;
- (id)buildOrPredicateOrNil;

@end
