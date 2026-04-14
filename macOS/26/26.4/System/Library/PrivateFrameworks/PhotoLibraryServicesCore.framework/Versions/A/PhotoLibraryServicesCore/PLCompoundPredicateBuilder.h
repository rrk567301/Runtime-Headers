@class NSMutableArray;

@interface PLCompoundPredicateBuilder : NSObject {
    NSMutableArray *_subpredicates;
}

- (void).cxx_destruct;
- (void)addPredicate:(id)a0;
- (id)init;
- (id)buildAndPredicate;
- (id)buildAndPredicateOrNil;
- (id)_joinSubpredicatesWithNilOnEmpty:(BOOL)a0 block:(id /* block */)a1;
- (id)buildOrPredicate;
- (id)buildOrPredicateOrNil;

@end
