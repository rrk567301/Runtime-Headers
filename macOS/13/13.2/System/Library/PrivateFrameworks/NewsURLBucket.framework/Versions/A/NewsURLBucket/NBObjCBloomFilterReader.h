@interface NBObjCBloomFilterReader : NSObject {
    void /* unknown type, empty encoding */ bloomFilterReader;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)maybeContainsString:(id)a0;
- (id)initWithData:(id)a0 hashFunctionCount:(long long)a1;

@end
