@interface GTIntKeyedDictionary_replayer : NSObject <NSSecureCoding> {
    void *_private;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned long long)count;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)dealloc;
- (void)removeAllObjects;
- (void)encodeWithCoder:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (id)initWithIntKeyedDictionary:(id)a0;
- (id)objectForIntKey:(long long)a0;
- (void)removeObjectForIntKey:(long long)a0;
- (void)setObject:(id)a0 forIntKey:(long long)a1;

@end
