@interface CoreIDVShared.IdentityProofingLivenessVideoURL : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ url;
    void /* unknown type, empty encoding */ fileHandle;
    void /* unknown type, empty encoding */ auxiliaryURL;
    void /* unknown type, empty encoding */ auxiliaryFileHandle;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
