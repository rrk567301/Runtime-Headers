@class NSMutableDictionary;

@interface FPOneToManyWeakMap : NSObject {
    NSMutableDictionary *_backingDictionary;
}

- (id)init;
- (void)removeObjectsForKey:(id)a0;
- (void)addObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)removeObject:(id)a0;
- (id)anyObjectForKey:(id)a0;

@end
