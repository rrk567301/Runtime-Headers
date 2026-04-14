@class NSMutableSet, NSMutableDictionary;

@interface ISUniqueOperationContext : NSObject {
    NSMutableSet *_operations;
    NSMutableDictionary *_uniqueOperations;
}

- (id)uniqueOperationForKey:(id)a0;
- (void)addOperation:(id)a0;
- (BOOL)containsOperation:(id)a0;
- (void)setUniqueOperation:(id)a0 forKey:(id)a1;
- (unsigned long long)countOfOperations;
- (void).cxx_destruct;
- (void)removeOperation:(id)a0;
- (id)init;
- (void)dealloc;

@end
