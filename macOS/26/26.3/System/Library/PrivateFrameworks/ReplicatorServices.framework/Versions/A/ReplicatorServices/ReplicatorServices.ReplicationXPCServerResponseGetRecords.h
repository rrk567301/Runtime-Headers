@interface ReplicatorServices.ReplicationXPCServerResponseGetRecords : NSObject <BSXPCSecureCoding> {
    void /* unknown type, empty encoding */ records;
    void /* unknown type, empty encoding */ failedRecordIDs;
}

+ (BOOL)supportsBSXPCSecureCoding;

- (id)initWithBSXPCCoder:(id)a0;
- (id)init;
- (BOOL)supportsBSXPCSecureCoding;
- (void)encodeWithBSXPCCoder:(id)a0;
- (void).cxx_destruct;

@end
