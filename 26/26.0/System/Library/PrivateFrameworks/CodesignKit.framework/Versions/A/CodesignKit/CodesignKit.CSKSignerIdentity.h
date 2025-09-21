@interface CodesignKit.CSKSignerIdentity : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ certificateChain;
    void /* unknown type, empty encoding */ supportedSignatureAlgorithms;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
