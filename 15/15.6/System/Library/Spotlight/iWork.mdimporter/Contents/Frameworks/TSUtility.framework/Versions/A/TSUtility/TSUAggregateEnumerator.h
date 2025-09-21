@class NSMutableArray;

@interface TSUAggregateEnumerator : NSEnumerator

@property (retain, nonatomic) NSMutableArray *objects;

+ (id)aggregateEnumeratorWithObjects:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (id)initWithObjects:(id)a0;
- (id)nextObject;
- (id)initWithFirstObject:(id)a0 argumentList:(struct __va_list_tag { unsigned int x0; unsigned int x1; void *x2; void *x3; }[1])a1;

@end
