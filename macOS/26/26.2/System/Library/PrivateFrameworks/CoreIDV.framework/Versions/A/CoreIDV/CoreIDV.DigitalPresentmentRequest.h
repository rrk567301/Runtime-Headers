@interface CoreIDV.DigitalPresentmentRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ compoundDescriptor;
    void /* unknown type, empty encoding */ nonce;
    void /* unknown type, empty encoding */ merchantID;
    void /* unknown type, empty encoding */ usageDescriptionKey;
    void /* unknown type, empty encoding */ applicationIdentifierOverride;
    void /* unknown type, empty encoding */ merchantNameOverride;
    void /* unknown type, empty encoding */ merchantPrivacyPolicyOverride;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
