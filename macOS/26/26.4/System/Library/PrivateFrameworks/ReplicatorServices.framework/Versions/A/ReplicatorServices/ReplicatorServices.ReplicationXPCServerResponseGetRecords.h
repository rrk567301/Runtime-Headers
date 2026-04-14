@interface ReplicatorServices.ReplicationXPCServerResponseGetRecords : NSObject <BSXPCSecureCoding> {
    void /* unknown type, empty encoding */ records;
    void /* unknown type, empty encoding */ failedRecordIDs;
}

+ (BOOL)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id)initWithBSXPCCoder:(id)a0;
- (id)init;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)supportsBSXPCSecureCoding;

@end
