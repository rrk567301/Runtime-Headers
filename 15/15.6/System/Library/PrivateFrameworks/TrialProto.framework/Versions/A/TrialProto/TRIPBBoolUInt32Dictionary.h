@class TRIPBMessage;

@interface TRIPBBoolUInt32Dictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying> {
    TRIPBMessage *_autocreator;
    unsigned int _values[2];
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
- (void)removeAll;
- (unsigned long long)computeSerializedSizeAsField:(id)a0;
- (void)enumerateForTextFormat:(id /* block */)a0;
- (void)enumerateKeysAndUInt32sUsingBlock:(id /* block */)a0;
- (char)getUInt32:(unsigned int *)a0 forKey:(char)a1;
- (id)initWithUInt32s:(const unsigned int *)a0 forKeys:(const char *)a1 count:(unsigned long long)a2;
- (void)removeUInt32ForKey:(char)a0;
- (void)setTRIPBGenericValue:(union { char x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a0 forTRIPBGenericValueKey:(union { char x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a1;
- (void)setUInt32:(unsigned int)a0 forKey:(char)a1;
- (void)writeToCodedOutputStream:(id)a0 asField:(id)a1;

@end
