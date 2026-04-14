@interface Coherence.CRTTStringEncoder : NSObject {
    void /* unknown type, empty encoding */ sequence;
    void /* unknown type, empty encoding */ subsequence;
    void /* unknown type, empty encoding */ encoder;
}

- (void).cxx_destruct;
- (id)init;
- (void)setFromVersion:(id)a0;
- (void)finishSubstring;
- (void)addChildWithId:(unsigned int)a0;
- (void)setWithVersion:(id)a0;
- (void)addAddedById:(id)a0 clock:(unsigned int)a1;
- (void)addRemovedAddedById:(id)a0 clock:(unsigned int)a1;
- (void)setCharWithId:(id)a0 clock:(unsigned int)a1;
- (void)setFromAddedByVersion:(id)a0;
- (BOOL)setStorage:(id)a0 error:(id *)a1;
- (void)setWithAddedByVersion:(id)a0;
- (void)setWithContentOptions:(long long)a0;
- (void)setWithLength:(unsigned int)a0;

@end
