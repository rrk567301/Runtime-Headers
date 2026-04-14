@class NSString, MLModel;

@interface SNComposedDetector : NSObject <NSCopying, NSSecureCoding> {
    NSString *_featureExtractorType;
    MLModel *_detectorHeadModel;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
