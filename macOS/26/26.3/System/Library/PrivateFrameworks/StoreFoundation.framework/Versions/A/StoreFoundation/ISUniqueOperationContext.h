@class NSMutableSet, NSMutableDictionary;

@interface ISUniqueOperationContext : NSObject {
    NSMutableSet *_operations;
    NSMutableDictionary *_uniqueOperations;
}

- (void)removeOperation:(id)a0;
- (id)uniqueOperationForKey:(id)a0;
- (BOOL)containsOperation:(id)a0;
- (void)addOperation:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)setUniqueOperation:(id)a0 forKey:(id)a1;
- (unsigned long long)countOfOperations;
- (void)dealloc;

@end
