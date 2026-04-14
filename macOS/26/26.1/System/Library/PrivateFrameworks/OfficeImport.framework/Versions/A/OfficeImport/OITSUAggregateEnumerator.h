@class NSMutableArray;

@interface OITSUAggregateEnumerator : NSEnumerator {
    NSMutableArray *_objects;
}

+ (id)aggregateEnumeratorWithObjects:(id)a0;

- (id)nextObject;
- (id)initWithObjects:(id)a0;
- (void)dealloc;
- (void)addObject:(id)a0;
- (id)init;
- (id)initWithFirstObject:(id)a0 argumentList:(char *)a1;

@end
