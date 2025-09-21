@interface CoreIDVShared.IdentityProofingLivenessVideoURL : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ fileHandle;
    void /* unknown type, empty encoding */ auxiliaryURL;
    void /* unknown type, empty encoding */ auxiliaryFileHandle;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
