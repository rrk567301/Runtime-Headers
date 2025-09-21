@class NSMutableDictionary;

@interface STRPPropertyListTypeEncoder : NSCoder {
    NSMutableDictionary *_storage;
}

- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (BOOL)allowsKeyedCoding;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (void)encodeFloat:(float)a0 forKey:(id)a1;
- (id)init;
- (void)encodeBytes:(const char *)a0 length:(unsigned long long)a1 forKey:(id)a2;
- (void)encodeConditionalObject:(id)a0 forKey:(id)a1;
- (id)encodeRootObject:(id)a0;
- (void).cxx_destruct;
- (id)_encodeRawObject:(id)a0;

@end
