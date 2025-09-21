@class NSMutableDictionary;

@interface FPOneToManyWeakMap : NSObject {
    NSMutableDictionary *_backingDictionary;
}

- (id)removeObject:(id)a0;
- (id)init;
- (void)addObject:(id)a0 forKey:(id)a1;
- (void)removeObjectsForKey:(id)a0;
- (void).cxx_destruct;
- (id)anyObjectForKey:(id)a0;

@end
