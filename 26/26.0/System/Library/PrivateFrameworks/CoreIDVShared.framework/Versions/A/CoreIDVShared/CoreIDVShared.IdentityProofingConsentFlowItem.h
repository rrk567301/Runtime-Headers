@interface CoreIDVShared.IdentityProofingConsentFlowItem : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ passive;
    void /* unknown type, empty encoding */ inlineStepUp;
    void /* unknown type, empty encoding */ legacy;
    void /* unknown type, empty encoding */ pushNotificationStepUp;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
