@class TRIPBMessage;

@interface TRIPBBoolFloatDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying> {
    TRIPBMessage *_autocreator;
    float _values[2];
    char _valueSet[2];
}

@property (readonly, nonatomic) unsigned long long count;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)addEntriesFromDictionary:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithDictionary:(id)a0;
- (void)setFloat:(float)a0 forKey:(char)a1;
- (void)removeAll;
- (unsigned long long)computeSerializedSizeAsField:(id)a0;
- (void)enumerateForTextFormat:(id /* block */)a0;
- (void)enumerateKeysAndFloatsUsingBlock:(id /* block */)a0;
- (char)getFloat:(float *)a0 forKey:(char)a1;
- (id)initWithFloats:(const float *)a0 forKeys:(const char *)a1 count:(unsigned long long)a2;
- (void)removeFloatForKey:(char)a0;
- (void)setTRIPBGenericValue:(union { char x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a0 forTRIPBGenericValueKey:(union { char x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a1;
- (void)writeToCodedOutputStream:(id)a0 asField:(id)a1;

@end
