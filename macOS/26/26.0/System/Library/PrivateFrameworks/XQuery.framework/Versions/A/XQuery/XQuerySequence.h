@class NSMutableArray;

@interface XQuerySequence : NSMutableArray {
    NSMutableArray *_array;
    id _value;
}

+ (id)sequence;
+ (id)sequenceWithItem:(id)a0;

- (void)finalize;
- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)dealloc;
- (unsigned long long)count;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (id)init;
- (void)addObject:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeLastObject;
- (id)objectAtIndex:(unsigned long long)a0;

@end
