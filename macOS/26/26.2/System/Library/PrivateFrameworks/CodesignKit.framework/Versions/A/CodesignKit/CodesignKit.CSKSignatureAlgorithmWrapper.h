@interface CodesignKit.CSKSignatureAlgorithmWrapper : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ algorithm;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;

@end
