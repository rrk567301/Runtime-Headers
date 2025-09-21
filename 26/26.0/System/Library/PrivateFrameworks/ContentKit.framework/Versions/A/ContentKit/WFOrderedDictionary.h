@class NSOrderedSet, NSDictionary;

@interface WFOrderedDictionary : NSDictionary

@property (readonly, nonatomic) NSOrderedSet *keys;
@property (readonly, nonatomic) NSDictionary *dictionary;

+ (BOOL)supportsSecureCoding;

- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)classForCoder;
- (unsigned long long)count;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)keyEnumerator;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithQueryItems:(id)a0;

@end
