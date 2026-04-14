@class NSMutableDictionary;

@interface PFDictionaryCoder : NSCoder

@property (readonly, nonatomic) NSMutableDictionary *dictionary;

- (long long)decodeIntegerForKey:(id)a0;
- (void)encodeObject:(id)a0;
- (BOOL)decodeBoolForKey:(id)a0;
- (int)decodeIntForKey:(id)a0;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (long long)decodeInt64ForKey:(id)a0;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (double)decodeDoubleForKey:(id)a0;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (id)decodeObjectForKey:(id)a0;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (int)decodeInt32ForKey:(id)a0;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (float)decodeFloatForKey:(id)a0;
- (void)encodeConditionalObject:(id)a0 forKey:(id)a1;
- (void)encodeArrayOfObjCType:(const char *)a0 count:(unsigned long long)a1 at:(const void *)a2;
- (void)encodeValueOfObjCType:(const char *)a0 at:(const void *)a1;
- (void)encodeBytes:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (void)reset;
- (void).cxx_destruct;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (const char *)decodeBytesForKey:(id)a0 returnedLength:(unsigned long long *)a1;
- (BOOL)containsValueForKey:(id)a0;
- (id)init;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (id)initWithMutableDictionary:(id)a0;

@end
