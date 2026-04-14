@interface _EXCapabilityEndpoint : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ inner;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (id)makeXPCConnectionWithError:(id *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
