@interface ReplicatorServices.MigrationXPCServerResponseGetRecords : NSObject <BSXPCSecureCoding> {
    void /* unknown type, empty encoding */ records;
}

+ (char)supportsBSXPCSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (char)supportsBSXPCSecureCoding;

@end
