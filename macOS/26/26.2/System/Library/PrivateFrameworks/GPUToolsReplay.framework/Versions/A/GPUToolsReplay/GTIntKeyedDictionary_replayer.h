@interface GTIntKeyedDictionary_replayer : NSObject <NSSecureCoding> {
    void *_private;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)setObject:(id)a0 forKey:(id)a1;
- (unsigned long long)count;
- (id)initWithCoder:(id)a0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;
- (id)allKeys;
- (void)removeObjectForKey:(id)a0;
- (id)objectForKey:(id)a0;
- (id)init;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)dealloc;
- (void)removeAllObjects;
- (id)initWithIntKeyedDictionary:(id)a0;
- (id)objectForIntKey:(long long)a0;
- (void)removeObjectForIntKey:(long long)a0;
- (void)setObject:(id)a0 forIntKey:(long long)a1;

@end
