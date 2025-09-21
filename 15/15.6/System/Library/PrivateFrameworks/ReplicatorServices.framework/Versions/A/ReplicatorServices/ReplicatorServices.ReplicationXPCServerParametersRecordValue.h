@interface ReplicatorServices.ReplicationXPCServerParametersRecordValue : NSObject <BSXPCSecureCoding> {
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ fileHandle;
    void /* unknown type, empty encoding */ extendedAttributes;
}

+ (char)supportsBSXPCSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (char)supportsBSXPCSecureCoding;

@end
