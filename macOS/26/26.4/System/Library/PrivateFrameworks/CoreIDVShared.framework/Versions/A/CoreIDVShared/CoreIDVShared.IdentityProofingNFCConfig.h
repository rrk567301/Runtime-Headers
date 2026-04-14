@interface CoreIDVShared.IdentityProofingNFCConfig : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ minimumReadTimeThreshold;
    void /* unknown type, empty encoding */ readRetryInterval;
    void /* unknown type, empty encoding */ readyCheckEnabled;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
