@class NSMutableArray;

@interface XQuerySequence : NSMutableArray {
    NSMutableArray *_array;
    id _value;
}

+ (id)sequence;
+ (id)sequenceWithItem:(id)a0;

- (void)finalize;
- (unsigned long long)count;
- (id)init;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)addObject:(id)a0;
- (void)removeLastObject;
- (void)dealloc;
- (id)objectAtIndex:(unsigned long long)a0;

@end
