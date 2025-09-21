@class NSMutableArray;

@interface PLCompoundPredicateBuilder : NSObject {
    NSMutableArray *_subpredicates;
}

- (id)init;
- (void).cxx_destruct;
- (void)addPredicate:(id)a0;
- (id)buildAndPredicate;
- (id)buildAndPredicateOrNil;
- (id)_joinSubpredicatesWithNilOnEmpty:(char)a0 block:(id /* block */)a1;
- (id)buildOrPredicate;
- (id)buildOrPredicateOrNil;

@end
