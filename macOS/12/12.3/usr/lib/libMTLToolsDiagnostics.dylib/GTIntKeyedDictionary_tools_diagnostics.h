@interface GTIntKeyedDictionary_tools_diagnostics : NSObject <NSSecureCoding> {
    void *_private;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (id)init;
- (unsigned long long)count;
- (void)removeAllObjects;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)objectForKey:(id)a0;
- (void)removeObjectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (id)allKeys;
- (void)setObject:(id)a0 forIntKey:(long long)a1;
- (void)removeObjectForIntKey:(long long)a0;
- (id)objectForIntKey:(long long)a0;
- (id)initWithIntKeyedDictionary:(id)a0;

@end
