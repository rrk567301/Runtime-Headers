@interface ReplicatorServices.ReplicationXPCServerParametersAddRecords : NSObject <BSXPCSecureCoding> {
    void /* unknown type, empty encoding */ records;
    void /* unknown type, empty encoding */ parameters;
}

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)a0;
- (id)init;
- (id)initWithBSXPCCoder:(id)a0;
- (BOOL)supportsBSXPCSecureCoding;
- (void).cxx_destruct;

@end
