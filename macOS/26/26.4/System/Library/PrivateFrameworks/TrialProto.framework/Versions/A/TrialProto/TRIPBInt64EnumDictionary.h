@class TRIPBMessage, NSMutableDictionary;

@interface TRIPBInt64EnumDictionary : NSObject <TRIPBDictionaryInternalsProtocol, NSCopying> {
    TRIPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) void /* function */ *validationFunc;

- (void)removeAll;
- (id)initWithValidationFunction:(void /* function */ *)a0 rawValues:(const int *)a1 forKeys:(const long long *)a2 count:(unsigned long long)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)getRawValue:(int *)a0 forKey:(long long)a1;
- (id)initWithDictionary:(id)a0;
- (void)addRawEntriesFromDictionary:(id)a0;
- (void)setTRIPBGenericValue:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a0 forTRIPBGenericValueKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a1;
- (BOOL)isEqual:(id)a0;
- (void)enumerateKeysAndEnumsUsingBlock:(id /* block */)a0;
- (void)enumerateKeysAndRawValuesUsingBlock:(id /* block */)a0;
- (unsigned long long)computeSerializedSizeAsField:(id)a0;
- (void)setRawValue:(int)a0 forKey:(long long)a1;
- (void)setEnum:(int)a0 forKey:(long long)a1;
- (BOOL)getEnum:(int *)a0 forKey:(long long)a1;
- (unsigned long long)hash;
- (id)init;
- (void)enumerateForTextFormat:(id /* block */)a0;
- (id)serializedDataForUnknownValue:(int)a0 forKey:(union { BOOL x0; int x1; long long x2; unsigned int x3; unsigned long long x4; float x5; double x6; id x7; id x8; id x9; int x10; } *)a1 keyDataType:(unsigned char)a2;
- (void)removeEnumForKey:(long long)a0;
- (id)initWithValidationFunction:(void /* function */ *)a0 capacity:(unsigned long long)a1;
- (id)description;
- (id)initWithValidationFunction:(void /* function */ *)a0;
- (void)writeToCodedOutputStream:(id)a0 asField:(id)a1;
- (void)dealloc;

@end
