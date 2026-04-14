@class NSMutableArray;

@interface IMWeakReferenceCollection : NSObject {
    NSMutableArray *_list;
}

- (unsigned long long)count;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (id)init;
- (BOOL)containsObject:(id)a0;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (void)removeObject:(id)a0;

@end
