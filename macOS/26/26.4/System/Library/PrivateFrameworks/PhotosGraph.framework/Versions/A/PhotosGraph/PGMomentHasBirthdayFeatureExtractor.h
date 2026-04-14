@class NSString, NSArray;

@interface PGMomentHasBirthdayFeatureExtractor : PGFeatureExtractor {
    void /* unknown type, empty encoding */ personNodesByMomentNode;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *featureNames;
@property (nonatomic, readonly) long long featureLength;

- (void).cxx_destruct;
- (id)init;
- (id)floatVectorWithEntity:(id)a0 error:(id *)a1;

@end
