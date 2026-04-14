@class NSArray, NSMutableArray;
@protocol _CNLazyArrayOperation;

@interface CNLazyArray : NSObject <NSFastEnumeration>

@property (retain) id<_CNLazyArrayOperation> operationChain;
@property (readonly) NSMutableArray *output;
@property (readonly) NSArray *allObjects;
@property (readonly) id firstObject;
@property (readonly) id lastObject;

- (id)init;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithArray:(id)a0;
- (void).cxx_destruct;
- (id /* block */)filter;
- (id)initWithSource:(id)a0;
- (id /* block */)map;
- (id /* block */)take;
- (id /* block */)any;
- (id)distinct;
- (id)initWithEnumerator:(id)a0;
- (id)initWithFastEnumeration:(id)a0;
- (id)initWithInitialState:(id)a0 condition:(id /* block */)a1 nextState:(id /* block */)a2 resultSelector:(id /* block */)a3;
- (id /* block */)reduce;
- (id /* block */)compactMap;
- (id /* block */)flatMap;
- (id /* block */)all;
- (id /* block */)none;
- (id /* block */)contains;
- (id /* block */)skip;
- (id /* block */)skipLast;
- (id /* block */)takeLast;
- (id /* block */)doOnNext;
- (void)consumeToIndex:(unsigned long long)a0;
- (void)consumeAllObjects;
- (BOOL)consumeNextObject;

@end
