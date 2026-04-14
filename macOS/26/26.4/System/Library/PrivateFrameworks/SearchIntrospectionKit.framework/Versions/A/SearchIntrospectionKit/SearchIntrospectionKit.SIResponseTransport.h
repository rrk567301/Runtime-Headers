@interface SearchIntrospectionKit.SIResponseTransport : NSObject <BSXPCSecureCoding> {
    void /* unknown type, empty encoding */ applicationClient;
    void /* unknown type, empty encoding */ query;
    void /* unknown type, empty encoding */ response;
}

+ (BOOL)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)a0;
- (id)init;
- (void)encodeWithBSXPCCoder:(id)a0;

@end
