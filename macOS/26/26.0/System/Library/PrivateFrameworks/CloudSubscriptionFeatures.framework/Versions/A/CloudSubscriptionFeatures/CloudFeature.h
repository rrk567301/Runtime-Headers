@class NSString;

@interface CloudFeature : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ featureID;
    void /* unknown type, empty encoding */ canUse;
    void /* unknown type, empty encoding */ limit;
    void /* unknown type, empty encoding */ accessToken;
    void /* unknown type, empty encoding */ ttl;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
