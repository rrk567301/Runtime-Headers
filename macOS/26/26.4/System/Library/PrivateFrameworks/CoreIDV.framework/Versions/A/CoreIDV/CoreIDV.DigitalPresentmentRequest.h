@interface CoreIDV.DigitalPresentmentRequest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ compoundDescriptor;
    void /* unknown type, empty encoding */ nonce;
    void /* unknown type, empty encoding */ merchantID;
    void /* unknown type, empty encoding */ usageDescriptionKey;
    void /* unknown type, empty encoding */ applicationIdentifierOverride;
    void /* unknown type, empty encoding */ merchantOverrideParameters;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
