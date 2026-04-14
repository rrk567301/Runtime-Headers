@interface PGMomentIngestCLIPFeatureVectorExtractor : NSObject {
    void /* unknown type, empty encoding */ ingestMomentContainer;
}

+ (id)decodeEncodedCLIPFeatureVector:(id)a0 withError:(id *)a1;
+ (id)encodeCLIPFeatureVector:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (id)extractCLIPFeatureVectorWithError:(id *)a0;
- (id)initWithIngestMomentContainer:(id)a0;

@end
