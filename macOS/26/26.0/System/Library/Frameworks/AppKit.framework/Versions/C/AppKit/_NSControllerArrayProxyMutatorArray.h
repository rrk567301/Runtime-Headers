@class NSString, NSObjectController;

@interface _NSControllerArrayProxyMutatorArray : NSMutableArray {
    NSObjectController *_controller;
    NSString *_keyPath;
}

- (void)insertObject:(id)a0 atIndex:(unsigned long long)a1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (void)removeObjectAtIndex:(unsigned long long)a0;
- (void)addObject:(id)a0;
- (void)replaceObjectAtIndex:(unsigned long long)a0 withObject:(id)a1;
- (void)removeLastObject;
- (void)getObjects:(id *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)_referenceArray;
- (void)_performMutatorOperation:(long long)a0 object:(id)a1 index:(unsigned long long)a2;
- (id)initWithController:(id)a0 keyPath:(id)a1;

@end
