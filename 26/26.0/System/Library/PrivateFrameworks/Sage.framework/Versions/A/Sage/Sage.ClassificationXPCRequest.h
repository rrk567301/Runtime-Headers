@interface Sage.ClassificationXPCRequest : Sage.XPCValue {
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ requestInfo;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
