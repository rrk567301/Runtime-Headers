@class NSString;

@interface CloudSubscriptionFeatures.CloudFeatureMetadata : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ homeID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
