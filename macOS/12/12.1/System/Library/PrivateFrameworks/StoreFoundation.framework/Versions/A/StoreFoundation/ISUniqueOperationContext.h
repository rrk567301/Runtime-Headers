@class NSMutableSet, NSMutableDictionary;

@interface ISUniqueOperationContext : NSObject {
    NSMutableSet *_operations;
    NSMutableDictionary *_uniqueOperations;
}

- (void)dealloc;
- (id)init;
- (void)addOperation:(id)a0;
- (void).cxx_destruct;
- (void)removeOperation:(id)a0;
- (unsigned long long)countOfOperations;
- (id)uniqueOperationForKey:(id)a0;
- (void)setUniqueOperation:(id)a0 forKey:(id)a1;
- (BOOL)containsOperation:(id)a0;

@end
