@class NSMutableArray;

@interface IMWeakReferenceCollection : NSObject {
    NSMutableArray *_list;
}

- (BOOL)containsObject:(id)a0;
- (void)enumerateObjectsUsingBlock:(id /* block */)a0;
- (void)addObject:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)count;
- (void)removeObject:(id)a0;

@end
