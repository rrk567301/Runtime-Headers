@class NSString;

@interface Transparency.KTRepairOptions : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ repair;
    void /* unknown type, empty encoding */ expectedPublicKey;
    void /* unknown type, empty encoding */ expectedPublicKeyTS;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
