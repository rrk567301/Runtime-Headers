@class NSArray, NSPointerArray;

@interface CNWeakArray : NSObject <NSFastEnumeration> {
    NSPointerArray *_storage;
}

@property (readonly) long long count;
@property (readonly) NSArray *allObjects;

- (void)compact;
- (void)removeObject:(id)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)init;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (void)setArray:(id)a0;

@end
