@interface ReplicatorServices.ReplicationXPCServerParametersExtendedAttribute : NSObject <BSXPCSecureCoding> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ data;
}

+ (char)supportsBSXPCSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (char)supportsBSXPCSecureCoding;

@end
