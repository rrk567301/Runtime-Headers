@class NSLock, NSMutableDictionary;

@interface NSSafeMutableDictionary : NSMutableDictionary {
    NSMutableDictionary *_storage;
    NSLock *_lock;
}

- (id)objectForKey:(id)a0;
- (unsigned long long)count;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (id)keyEnumerator;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;

@end
