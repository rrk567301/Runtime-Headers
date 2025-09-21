@class NSString;

@interface CloudFeature : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ featureID;
    void /* unknown type, empty encoding */ canUse;
    void /* unknown type, empty encoding */ limit;
    void /* unknown type, empty encoding */ accessToken;
    void /* unknown type, empty encoding */ ttl;
}

@property (class, nonatomic, readonly) char supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
