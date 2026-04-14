@class NSString;

@interface CKFieldFeature : NSObject <CKFeatureProtocol, NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ _wrapped;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *value;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithName:(id)a0 value:(id)a1;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
