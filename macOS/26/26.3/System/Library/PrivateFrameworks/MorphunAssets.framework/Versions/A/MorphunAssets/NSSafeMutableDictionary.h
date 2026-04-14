@class NSLock, NSMutableDictionary;

@interface NSSafeMutableDictionary : NSMutableDictionary {
    NSMutableDictionary *_storage;
    NSLock *_lock;
}

- (unsigned long long)count;
- (id)objectForKey:(id)a0;
- (id)init;
- (id)keyEnumerator;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)a0;

@end
