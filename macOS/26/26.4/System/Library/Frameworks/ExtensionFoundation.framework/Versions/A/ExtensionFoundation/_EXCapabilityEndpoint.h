@interface _EXCapabilityEndpoint : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ _inner;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)makeXPCConnectionWithError:(id *)a0;

@end
