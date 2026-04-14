@class NSMutableSet, NSMutableDictionary;

@interface ISUniqueOperationContext : NSObject {
    NSMutableSet *_operations;
    NSMutableDictionary *_uniqueOperations;
}

- (void)addOperation:(id)a0;
- (void)dealloc;
- (void)removeOperation:(id)a0;
- (id)uniqueOperationForKey:(id)a0;
- (void)setUniqueOperation:(id)a0 forKey:(id)a1;
- (id)init;
- (unsigned long long)countOfOperations;
- (void).cxx_destruct;
- (BOOL)containsOperation:(id)a0;

@end
