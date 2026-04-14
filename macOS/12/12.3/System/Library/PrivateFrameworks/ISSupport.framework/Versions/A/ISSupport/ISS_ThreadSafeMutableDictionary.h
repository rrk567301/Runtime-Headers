@class NSLock, NSMutableDictionary;

@interface ISS_ThreadSafeMutableDictionary : NSMutableDictionary {
    NSMutableDictionary *realDictionary;
    NSLock *lock;
}

- (void)finalize;
- (void)dealloc;
- (id)init;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;

@end
