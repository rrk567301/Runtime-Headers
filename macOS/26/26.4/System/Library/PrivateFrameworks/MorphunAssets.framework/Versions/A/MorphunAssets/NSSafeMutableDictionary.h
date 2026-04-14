@class NSLock, NSMutableDictionary;

@interface NSSafeMutableDictionary : NSMutableDictionary {
    NSMutableDictionary *_storage;
    NSLock *_lock;
}

- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)removeAllObjects;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;
- (unsigned long long)count;
- (id)keyEnumerator;

@end
