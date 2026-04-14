@class NSMutableArray;

@interface XQuerySequence : NSMutableArray {
    NSMutableArray *_array;
    id _value;
}

+ (id)sequence;
+ (id)sequenceWithItem:(id)a0;

- (void)finalize;
- (void)dealloc;
- (id)init;
- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)a0;
- (void)addObject:(id)a0;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeLastObject;

@end
