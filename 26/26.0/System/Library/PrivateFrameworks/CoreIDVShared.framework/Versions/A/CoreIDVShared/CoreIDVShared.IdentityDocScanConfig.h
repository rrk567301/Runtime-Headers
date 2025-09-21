@interface CoreIDVShared.IdentityDocScanConfig : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ pdf417ParsingConfigs;
    void /* unknown type, empty encoding */ requiresPDF417;
    void /* unknown type, empty encoding */ requiresAAMVACompliant;
    void /* unknown type, empty encoding */ requiresStateMatch;
    void /* unknown type, empty encoding */ issuerIdentificationNumber;
    void /* unknown type, empty encoding */ crTimeout;
    void /* unknown type, empty encoding */ crManualDelay;
    void /* unknown type, empty encoding */ maxRetakeCount;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
