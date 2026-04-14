@class NSLock, NSMutableDictionary;

@interface ISS_ThreadSafeMutableDictionary : NSMutableDictionary {
    NSMutableDictionary *realDictionary;
    NSLock *lock;
}

- (void)dealloc;
- (void)finalize;
- (id)init;
- (unsigned long long)count;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)keyEnumerator;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setValue:(id)a0 forKey:(id)a1;

@end
