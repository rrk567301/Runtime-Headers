@interface APJSONArchiver : NSCoder {
    id _container;
}

+ (id)JSONObjectWithObject:(id)a0;

- (BOOL)allowsKeyedCoding;
- (id)object;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (id)init;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (void)encodeBytes:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (void).cxx_destruct;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)_addClassToContainer:(Class)a0;
- (void)_addValueToContainer:(id)a0 forKey:(id)a1;
- (BOOL)_containerIsArray;
- (id)_valueForNumber:(id)a0;
- (id)initWithArray;
- (id)initWithDictionary;
- (id)_JSONObjectWithObject:(id)a0;

@end
