@interface CoreIDVShared.IdentityProofingConsentFlow : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ manualReviewEnabled;
    void /* unknown type, empty encoding */ manualReviewDisabled;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
