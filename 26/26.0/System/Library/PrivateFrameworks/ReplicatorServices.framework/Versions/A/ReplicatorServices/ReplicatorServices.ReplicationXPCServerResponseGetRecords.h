@interface ReplicatorServices.ReplicationXPCServerResponseGetRecords : NSObject <BSXPCSecureCoding> {
    void /* unknown type, empty encoding */ records;
    void /* unknown type, empty encoding */ failedRecordIDs;
}

+ (BOOL)supportsBSXPCSecureCoding;

- (void)encodeWithBSXPCCoder:(id)a0;
- (id)init;
- (id)initWithBSXPCCoder:(id)a0;
- (BOOL)supportsBSXPCSecureCoding;
- (void).cxx_destruct;

@end
