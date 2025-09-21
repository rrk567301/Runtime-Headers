@class NSArray, NSEnumerator;

@interface PCObjectZipper : NSObject {
    NSEnumerator *objectEnumerator;
    NSEnumerator *otherEnumerator;
    id object;
    id other;
    id /* block */ objectComparator;
}

@property (readonly, nonatomic) NSArray *objects;
@property (readonly, nonatomic) NSArray *others;

- (void).cxx_destruct;
- (BOOL)hasNextObjectPair;
- (id)initWithObjects:(id)a0 others:(id)a1 comparator:(id /* block */)a2;
- (BOOL)nextObjectPairWithHandler:(id /* block */)a0;

@end
