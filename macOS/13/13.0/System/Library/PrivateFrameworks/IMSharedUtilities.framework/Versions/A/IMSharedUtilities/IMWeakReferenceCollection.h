@class NSMutableArray;

@interface IMWeakReferenceCollection : NSObject {
    NSMutableArray *_list;
}

- (id)init;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;

@end
