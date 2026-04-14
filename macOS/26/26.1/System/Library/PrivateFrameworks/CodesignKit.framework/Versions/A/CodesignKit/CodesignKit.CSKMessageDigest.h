@interface CodesignKit.CSKMessageDigest : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ digest;
    void /* unknown type, empty encoding */ algorithm;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
