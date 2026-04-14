@class NSLock, NSMutableDictionary;

@interface ISS_ThreadSafeMutableDictionary : NSMutableDictionary {
    NSMutableDictionary *realDictionary;
    NSLock *lock;
}

- (void)dealloc;
- (id)init;
- (void)finalize;
- (void)setValue:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)objectForKey:(id)a0;
- (id)keyEnumerator;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;

@end
