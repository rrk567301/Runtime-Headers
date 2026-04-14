@interface CoreIDVShared.IdentityDocument : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ image;
    void /* unknown type, empty encoding */ scanMetrics;
    void /* unknown type, empty encoding */ imageMetrics;
    void /* unknown type, empty encoding */ pdf417Data;
    void /* unknown type, empty encoding */ mrz;
    void /* unknown type, empty encoding */ nfcData;
    void /* unknown type, empty encoding */ nfcHash;
    void /* unknown type, empty encoding */ encryptedNFCData;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
