@class NSMutableSet, NSMutableDictionary;

@interface ISUniqueOperationContext : NSObject {
    NSMutableSet *_operations;
    NSMutableDictionary *_uniqueOperations;
}

- (void)removeOperation:(id)a0;
- (id)uniqueOperationForKey:(id)a0;
- (unsigned long long)countOfOperations;
- (void)addOperation:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setUniqueOperation:(id)a0 forKey:(id)a1;
- (BOOL)containsOperation:(id)a0;
- (void)dealloc;

@end
