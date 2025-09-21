@class NSDictionary, NSMutableArray, NSMutableDictionary;

@interface BMDSLJSONCoder : NSCoder {
    NSMutableArray *_stack;
    NSMutableDictionary *_currentDictionary;
    char _allowSecureCodingObjects;
    char _allowKeyModifications;
}

@property (copy, nonatomic) NSDictionary *userInfo;

+ (char)hasNativeSupportForClass:(Class)a0;

- (id)init;
- (void).cxx_destruct;
- (char)allowsKeyedCoding;
- (long long)decodeInt64ForKey:(id)a0;
- (void)encodeBool:(char)a0 forKey:(id)a1;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (char)decodeBoolForKey:(id)a0;
- (double)decodeDoubleForKey:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (int)decodeIntForKey:(id)a0;
- (long long)decodeIntegerForKey:(id)a0;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (id)initWithOptions:(unsigned long long)a0;
- (float)decodeFloatForKey:(id)a0;
- (id)decodeObjectForKey:(id)a0;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (void)push:(id)a0;
- (id)pop;
- (char)_jsonDecodeArray:(inout id *)a0 forKey:(inout id *)a1;
- (char)_jsonDecodeDictionary:(id *)a0 asClass:(Class)a1;
- (char)_jsonDecodeDictionary:(inout id *)a0 forKey:(inout id *)a1;
- (char)_jsonDecodeObject:(id *)a0 encodingDescriptor:(id)a1;
- (char)_jsonDecodeObject:(id *)a0 forKey:(id *)a1;
- (char)_jsonEncodeArray:(id *)a0 forKey:(id *)a1;
- (char)_jsonEncodeDictionary:(id *)a0 forKey:(id *)a1;
- (char)_jsonEncodeObject:(id *)a0 forKey:(id *)a1;
- (id)buildKeyFromClass:(Class)a0 originalKey:(id)a1;
- (id)buildKeyFromEncodingDescriptor:(id)a0 originalKey:(id)a1;
- (Class)classFromEncodingDescriptor:(id)a0;
- (id)decodeRootObjectFromData:(id)a0;
- (id)encodeDataFromRootObject:(id)a0;
- (id)encodingCompatibleObjectFromRootObject:(id)a0;
- (id)encodingDescriptorFromKey:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })encodingDescriptorRangeInKey:(id)a0;
- (id)keyWithoutEncodingDescriptor:(id)a0;

@end
