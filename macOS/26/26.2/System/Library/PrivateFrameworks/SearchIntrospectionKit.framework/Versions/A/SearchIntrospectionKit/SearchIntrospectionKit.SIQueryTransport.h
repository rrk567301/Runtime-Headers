@interface SearchIntrospectionKit.SIQueryTransport : NSObject <BSXPCSecureCoding> {
    void /* unknown type, empty encoding */ queryClient;
    void /* unknown type, empty encoding */ queryData;
    void /* unknown type, empty encoding */ queryIdentifier;
    void /* unknown type, empty encoding */ timeout;
}

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)a0;
- (id)init;

@end
