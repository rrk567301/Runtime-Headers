@interface ReplicatorServices.ReplicationXPCServerParametersExtendedAttribute : NSObject <BSXPCSecureCoding> {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ data;
}

+ (BOOL)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)a0;
- (id)init;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)supportsBSXPCSecureCoding;

@end
