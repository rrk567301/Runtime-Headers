@interface ReplicatorServices.ReplicationXPCServerParametersRecordValue : NSObject <BSXPCSecureCoding> {
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ fileHandle;
    void /* unknown type, empty encoding */ extendedAttributes;
}

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)a0;
- (id)init;
- (id)initWithBSXPCCoder:(id)a0;
- (BOOL)supportsBSXPCSecureCoding;
- (void).cxx_destruct;

@end
