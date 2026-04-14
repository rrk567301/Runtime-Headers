@class NSMutableOrderedSet, PFSQLiteColumn;

@interface PFSQLitePredicateBuilder : NSObject {
    NSMutableOrderedSet *_predicates;
}

@property (readonly, nonatomic) PFSQLiteColumn *lastColumn;

+ (id)builder;

- (id)like:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)buildAndPredicate;
- (id)buildOrPredicate;
- (id)andGreaterThan:(id)a0;
- (id)andEqualTo:(id)a0;
- (id)andGreaterThanOrEqualTo:(id)a0;
- (id)andLessThan:(id)a0;
- (id)andLessThanOrEqualTo:(id)a0;
- (id)andNotEqualTo:(id)a0;
- (id)andPredicate:(id /* block */)a0;
- (id)inValues:(id)a0;
- (id)notInValues:(id)a0;
- (id)orPredicate:(id /* block */)a0;
- (id)whereColumn:(id)a0 equalTo:(id)a1;
- (id)whereColumn:(id)a0 greaterThan:(id)a1;
- (id)whereColumn:(id)a0 greaterThanOrEqualTo:(id)a1;
- (id)whereColumn:(id)a0 inValues:(id)a1;
- (id)whereColumn:(id)a0 lessThan:(id)a1;
- (id)whereColumn:(id)a0 lessThanOrEqualTo:(id)a1;
- (id)whereColumn:(id)a0 like:(id)a1;
- (id)whereColumn:(id)a0 notEqualTo:(id)a1;
- (id)whereColumn:(id)a0 notInValues:(id)a1;

@end
