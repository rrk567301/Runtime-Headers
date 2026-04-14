@class NSMutableDictionary;

@interface FPOneToManyWeakMap : NSObject {
    NSMutableDictionary *_backingDictionary;
}

- (id)removeObject:(id)a0;
- (void).cxx_destruct;
- (void)removeObjectsForKey:(id)a0;
- (void)addObject:(id)a0 forKey:(id)a1;
- (id)init;
- (id)anyObjectForKey:(id)a0;

@end
