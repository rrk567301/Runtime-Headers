@interface NBObjCBloomFilterReader : NSObject {
    void /* unknown type, empty encoding */ bloomFilterReader;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithData:(id)a0 hashFunctionCount:(long long)a1;
- (BOOL)maybeContainsString:(id)a0;

@end
