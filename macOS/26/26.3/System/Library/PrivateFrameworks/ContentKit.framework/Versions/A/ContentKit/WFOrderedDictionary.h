@class NSOrderedSet, NSDictionary;

@interface WFOrderedDictionary : NSDictionary

@property (readonly, nonatomic) NSOrderedSet *keys;
@property (readonly, nonatomic) NSDictionary *dictionary;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)count;
- (id)allKeys;
- (id)objectForKey:(id)a0;
- (id)init;
- (id)keyEnumerator;
- (id)initWithObjects:(const id *)a0 forKeys:(const id *)a1 count:(unsigned long long)a2;
- (Class)classForCoder;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithQueryItems:(id)a0;

@end
