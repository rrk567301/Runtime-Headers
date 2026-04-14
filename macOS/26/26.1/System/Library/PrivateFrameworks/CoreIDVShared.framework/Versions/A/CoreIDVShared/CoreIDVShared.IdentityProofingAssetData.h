@interface CoreIDVShared.IdentityProofingAssetData : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ twoX;
    void /* unknown type, empty encoding */ threeX;
    void /* unknown type, empty encoding */ assetID;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
