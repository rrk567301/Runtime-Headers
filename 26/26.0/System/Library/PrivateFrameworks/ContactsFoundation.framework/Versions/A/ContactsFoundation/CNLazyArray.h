@class NSArray, NSMutableArray;
@protocol _CNLazyArrayOperation;

@interface CNLazyArray : NSObject <NSFastEnumeration>

@property (retain) id<_CNLazyArrayOperation> operationChain;
@property (readonly) NSMutableArray *output;
@property (readonly) NSArray *allObjects;
@property (readonly) id firstObject;
@property (readonly) id lastObject;

- (id)initWithEnumerator:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id /* block */)none;
- (id /* block */)map;
- (id /* block */)filter;
- (id)init;
- (id)initWithSource:(id)a0;
- (id /* block */)contains;
- (id)initWithArray:(id)a0;
- (id /* block */)reduce;
- (id)distinct;
- (void).cxx_destruct;
- (id /* block */)take;
- (id /* block */)all;
- (id /* block */)any;
- (void)consumeToIndex:(unsigned long long)a0;
- (id /* block */)flatMap;
- (id /* block */)compactMap;
- (void)consumeAllObjects;
- (BOOL)consumeNextObject;
- (id /* block */)doOnNext;
- (id)initWithFastEnumeration:(id)a0;
- (id)initWithInitialState:(id)a0 condition:(id /* block */)a1 nextState:(id /* block */)a2 resultSelector:(id /* block */)a3;
- (id /* block */)skip;
- (id /* block */)skipLast;
- (id /* block */)takeLast;

@end
