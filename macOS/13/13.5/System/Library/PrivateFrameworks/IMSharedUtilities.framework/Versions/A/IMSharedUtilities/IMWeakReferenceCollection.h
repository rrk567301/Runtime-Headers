@class NSMutableArray;

@interface IMWeakReferenceCollection : NSObject {
    NSMutableArray *_list;
}

- (id)init;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (unsigned long long)count;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)removeObject:(id)a0;

@end
