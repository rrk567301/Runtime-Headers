@class TRIPBMessage, NSMutableDictionary;

@interface TRIPBUInt32EnumDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying> {
    TRIPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) void /* function */ *validationFunc;

- (id)serializedDataForUnknownValue:(int)a0 forKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a1 keyDataType:(unsigned char)a2;
- (void)setRawValue:(int)a0 forKey:(unsigned int)a1;
- (BOOL)getRawValue:(int *)a0 forKey:(unsigned int)a1;
- (void)removeAll;
- (unsigned long long)computeSerializedSizeAsField:(id)a0;
- (id)initWithValidationFunction:(void /* function */ *)a0;
- (void)addRawEntriesFromDictionary:(id)a0;
- (id)description;
- (id)init;
- (void)enumerateKeysAndRawValuesUsingBlock:(id /* block */)a0;
- (id)initWithValidationFunction:(void /* function */ *)a0 capacity:(unsigned long long)a1;
- (void)setTRIPBGenericValue:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a0 forTRIPBGenericValueKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a1;
- (BOOL)getEnum:(int *)a0 forKey:(unsigned int)a1;
- (void)enumerateKeysAndEnumsUsingBlock:(id /* block */)a0;
- (void)writeToCodedOutputStream:(id)a0 asField:(id)a1;
- (id)initWithDictionary:(id)a0;
- (void)dealloc;
- (void)enumerateForTextFormat:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)setEnum:(int)a0 forKey:(unsigned int)a1;
- (id)initWithValidationFunction:(void /* function */ *)a0 rawValues:(const int *)a1 forKeys:(const unsigned int *)a2 count:(unsigned long long)a3;
- (void)removeEnumForKey:(unsigned int)a0;

@end
