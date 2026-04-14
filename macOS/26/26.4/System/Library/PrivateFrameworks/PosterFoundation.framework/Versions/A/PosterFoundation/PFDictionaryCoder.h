@class NSMutableDictionary;

@interface PFDictionaryCoder : NSCoder

@property (readonly, nonatomic) NSMutableDictionary *dictionary;

- (int)decodeIntForKey:(id)a0;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (double)decodeDoubleForKey:(id)a0;
- (id)decodeObjectForKey:(id)a0;
- (float)decodeFloatForKey:(id)a0;
- (long long)decodeIntegerForKey:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (BOOL)decodeBoolForKey:(id)a0;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (long long)decodeInt64ForKey:(id)a0;
- (void)encodeObject:(id)a0;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (void)encodeConditionalObject:(id)a0 forKey:(id)a1;
- (BOOL)containsValueForKey:(id)a0;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (void)reset;
- (void)encodeArrayOfObjCType:(const char *)a0 count:(unsigned long long)a1 at:(const void *)a2;
- (id)init;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (const char *)decodeBytesForKey:(id)a0 returnedLength:(unsigned long long *)a1;
- (void)encodeValueOfObjCType:(const char *)a0 at:(const void *)a1;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeBytes:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (id)initWithMutableDictionary:(id)a0;

@end
