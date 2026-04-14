@class NSString;

@interface SNModelFeatureConnection : NSObject <NSCopying, NSSecureCoding> {
    void /* unknown type, empty encoding */ impl;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *sourceFeatureName;
@property (nonatomic, copy) NSString *destinationFeatureName;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSourceFeatureName:(id)a0 destinationFeatureName:(id)a1;

@end
