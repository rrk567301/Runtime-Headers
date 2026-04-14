@interface CoreIDVShared.IdentityProofingNFCConfig : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ minimumReadTimeThreshold;
    void /* unknown type, empty encoding */ readRetryInterval;
    void /* unknown type, empty encoding */ readyCheckEnabled;
    void /* unknown type, empty encoding */ isChipIntegrityCheckFailureTerminal;
    void /* unknown type, empty encoding */ isDeviceCrossCheckEnabled;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;

@end
