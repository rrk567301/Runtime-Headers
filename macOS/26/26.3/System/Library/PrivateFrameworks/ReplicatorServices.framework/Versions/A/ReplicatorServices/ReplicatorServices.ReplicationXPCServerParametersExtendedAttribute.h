@interface ReplicatorServices.ReplicationXPCServerParametersExtendedAttribute : NSObject <BSXPCSecureCoding> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ data;
}

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (id)init;
- (BOOL)supportsBSXPCSecureCoding;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;

@end
