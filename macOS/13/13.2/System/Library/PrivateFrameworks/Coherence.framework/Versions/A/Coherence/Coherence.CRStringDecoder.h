@interface Coherence.CRStringDecoder : NSObject <CRStringDecoderProtocol> {
    void /* unknown type, empty encoding */ encoded;
    void /* unknown type, empty encoding */ subsequence;
    void /* unknown type, empty encoding */ decoder;
}

- (id)init;
- (void).cxx_destruct;
- (long long)substringCount;
- (id)storageWithError:(id *)a0;
- (id)versionWithError:(id *)a0;
- (id)addedByVersionWithError:(id *)a0;
- (id)fromVersionWithError:(id *)a0;
- (id)fromAddedByVersionWithError:(id *)a0;
- (void)decodeSubstring:(long long)a0;
- (id)substringCharReplicaWithError:(id *)a0;
- (unsigned int)substringCharClock;
- (long long)substringAddedByCount;
- (id)substringAddedByReplica:(long long)a0 withError:(id *)a1;
- (unsigned int)substringAddedByCounter:(long long)a0;
- (long long)substringRemovedAddedByCount;
- (id)substringRemovedAddedByReplica:(long long)a0 withError:(id *)a1;
- (unsigned int)substringRemovedAddedByCounter:(long long)a0;
- (unsigned int)substringLength;
- (long long)substringContentOptions;
- (long long)substringChildCount;
- (unsigned int)substringChild:(long long)a0;

@end
