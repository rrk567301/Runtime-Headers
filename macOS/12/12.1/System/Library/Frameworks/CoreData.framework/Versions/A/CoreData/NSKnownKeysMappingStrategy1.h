@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy {
    int _cd_rc;
    int _reserved64;
    void *_table;
    unsigned long long _length;
    id _reserved1;
    id *_keys;
}

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (void)initialize;
+ (id)alloc;
+ (BOOL)supportsSecureCoding;
+ (Class)classForKeyedUnarchiver;
+ (BOOL)accessInstanceVariablesDirectly;

- (id)retain;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)_tryRetain;
- (BOOL)_isDeallocating;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (unsigned long long)length;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)allKeys;
- (unsigned long long)indexForKey:(id)a0;
- (id *)keys;
- (unsigned long long)fastIndexForKnownKey:(id)a0;
- (id)initForKeys:(id *)a0 count:(unsigned long long)a1;
- (id)initForKeys:(id)a0;

@end
