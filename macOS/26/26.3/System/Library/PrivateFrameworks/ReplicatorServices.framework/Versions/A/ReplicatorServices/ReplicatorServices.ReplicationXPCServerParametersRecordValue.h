@interface ReplicatorServices.ReplicationXPCServerParametersRecordValue : NSObject <BSXPCSecureCoding> {
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ fileHandle;
    void /* unknown type, empty encoding */ extendedAttributes;
}

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (id)init;
- (BOOL)supportsBSXPCSecureCoding;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;

@end
