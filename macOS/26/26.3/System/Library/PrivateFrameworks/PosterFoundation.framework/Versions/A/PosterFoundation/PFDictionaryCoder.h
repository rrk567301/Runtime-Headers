@class NSMutableDictionary;

@interface PFDictionaryCoder : NSCoder

@property (readonly, nonatomic) NSMutableDictionary *dictionary;

- (double)decodeDoubleForKey:(id)a0;
- (void)encodeObject:(id)a0;
- (BOOL)decodeBoolForKey:(id)a0;
- (float)decodeFloatForKey:(id)a0;
- (id)decodeObjectForKey:(id)a0;
- (long long)decodeIntegerForKey:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (long long)decodeInt64ForKey:(id)a0;
- (int)decodeIntForKey:(id)a0;
- (const char *)decodeBytesForKey:(id)a0 returnedLength:(unsigned long long *)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (id)init;
- (void)encodeValueOfObjCType:(const char *)a0 at:(const void *)a1;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (void)encodeBytes:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (void).cxx_destruct;
- (void)reset;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (void)encodeArrayOfObjCType:(const char *)a0 count:(unsigned long long)a1 at:(const void *)a2;
- (void)encodeConditionalObject:(id)a0 forKey:(id)a1;
- (BOOL)containsValueForKey:(id)a0;
- (id)initWithMutableDictionary:(id)a0;

@end
