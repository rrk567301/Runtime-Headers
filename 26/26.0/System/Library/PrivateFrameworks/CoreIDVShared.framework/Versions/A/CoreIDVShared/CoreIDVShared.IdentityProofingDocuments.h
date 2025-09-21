@interface CoreIDVShared.IdentityProofingDocuments : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ frontID;
    void /* unknown type, empty encoding */ backID;
    void /* unknown type, empty encoding */ selfie;
    void /* unknown type, empty encoding */ liveness;
    void /* unknown type, empty encoding */ nfc;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
