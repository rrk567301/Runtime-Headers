@class MLMultiArray, NSString;

@interface SNFeaturePrint : NSObject <SNResult, NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ impl;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } timeRange;
@property (nonatomic) long long featurePrintType;
@property (nonatomic, retain) MLMultiArray *featureVector;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

+ (id)cosineSimilarityBetweenOneFeatureVector:(id)a0 andAnotherFeatureVector:(id)a1 error:(id *)a2;
+ (id)cosineSimilarityBetweenOneFloat32Array:(float *)a0 andAnotherFloat32Array:(float *)a1 length:(long long)a2 error:(id *)a3;

- (id)copyWithZone:(void *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithFeaturePrintType:(long long)a0 featureVector:(id)a1;

@end
