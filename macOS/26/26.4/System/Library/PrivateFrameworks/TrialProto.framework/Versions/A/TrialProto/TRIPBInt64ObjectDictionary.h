@class TRIPBMessage, NSMutableDictionary;

@interface TRIPBInt64ObjectDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying> {
    TRIPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) unsigned long long count;

- (void)removeAll;
- (BOOL)isInitialized;
- (id)objectForKey:(long long)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (void)setTRIPBGenericValue:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a0 forTRIPBGenericValueKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a1;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)a0;
- (void)removeObjectForKey:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)computeSerializedSizeAsField:(id)a0;
- (id)initWithObjects:(const id *)a0 forKeys:(const long long *)a1 count:(unsigned long long)a2;
- (unsigned long long)hash;
- (void)setObject:(id)a0 forKey:(long long)a1;
- (id)init;
- (void)enumerateForTextFormat:(id /* block */)a0;
- (id)description;
- (void)writeToCodedOutputStream:(id)a0 asField:(id)a1;
- (void)dealloc;
- (id)deepCopyWithZone:(struct _NSZone { } *)a0;

@end
