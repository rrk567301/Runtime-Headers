@interface IMSharedUtilities.DictionaryCoder : NSCoder {
    void /* unknown type, empty encoding */ logger;
    void /* unknown type, empty encoding */ dicts;
    void /* unknown type, empty encoding */ arrays;
    void /* unknown type, empty encoding */ key;
}

@property (nonatomic, readonly) BOOL allowsKeyedCoding;

- (void)encodeInt64:(long long)a0 forKey:(id)a1;
- (void)encodeInt:(int)a0 forKey:(id)a1;
- (void)encodeBool:(BOOL)a0 forKey:(id)a1;
- (void)encodeInteger:(long long)a0 forKey:(id)a1;
- (void)encodeDouble:(double)a0 forKey:(id)a1;
- (void)encodeObject:(id)a0 forKey:(id)a1;
- (void)encodeInt32:(int)a0 forKey:(id)a1;
- (id)init;
- (void)encodeBytes:(const char *)a0 length:(long long)a1 forKey:(id)a2;
- (void).cxx_destruct;

@end
