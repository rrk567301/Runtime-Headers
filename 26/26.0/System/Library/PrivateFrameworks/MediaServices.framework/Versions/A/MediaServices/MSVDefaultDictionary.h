@class NSMutableDictionary;

@interface MSVDefaultDictionary : NSMutableDictionary {
    NSMutableDictionary *_storage;
}

@property (copy, nonatomic) id /* block */ defaultValue;

+ (id)dictionaryWithCapacity:(unsigned long long)a0 defaultValue:(id /* block */)a1;
+ (id)dictionaryWithDefaultValue:(id /* block */)a0;
+ (id)dictionaryWithDictionary:(id)a0 defaultValue:(id /* block */)a1;

- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKeyedSubscript:(id)a0;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)count;
- (id)init;
- (void)removeObjectForKey:(id)a0;
- (id)keyEnumerator;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)initWithCapacity:(unsigned long long)a0 defaultValue:(id /* block */)a1;
- (id)initWithDefaultValue:(id /* block */)a0;
- (id)initWithDictionary:(id)a0 defaultValue:(id /* block */)a1;

@end
