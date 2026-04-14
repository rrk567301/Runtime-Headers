@class NSMutableDictionary;

@interface PKFeatureFailureCollection : NSObject <NSSecureCoding> {
    NSMutableDictionary *_failuresByFeature;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithArray:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)errorForFeature:(unsigned long long)a0;

@end
