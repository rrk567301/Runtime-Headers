@class NSMutableSet, NSMutableDictionary;

@interface ISUniqueOperationContext : NSObject {
    NSMutableSet *_operations;
    NSMutableDictionary *_uniqueOperations;
}

- (void)addOperation:(id)a0;
- (void)removeOperation:(id)a0;
- (void)setUniqueOperation:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void).cxx_destruct;
- (unsigned long long)countOfOperations;
- (id)uniqueOperationForKey:(id)a0;
- (id)init;
- (BOOL)containsOperation:(id)a0;

@end
