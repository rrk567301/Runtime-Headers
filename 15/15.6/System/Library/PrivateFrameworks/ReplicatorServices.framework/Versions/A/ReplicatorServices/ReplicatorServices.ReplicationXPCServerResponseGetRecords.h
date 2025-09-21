@interface ReplicatorServices.ReplicationXPCServerResponseGetRecords : NSObject <BSXPCSecureCoding> {
    void /* unknown type, empty encoding */ records;
    void /* unknown type, empty encoding */ failedRecordIDs;
}

+ (char)supportsBSXPCSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (char)supportsBSXPCSecureCoding;

@end
