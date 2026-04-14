@interface CodesignKit.CSKSignatureAlgorithmWrapper : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ algorithm;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
