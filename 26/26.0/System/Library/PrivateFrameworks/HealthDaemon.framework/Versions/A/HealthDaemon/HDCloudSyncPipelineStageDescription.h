@class NSString;

@interface HDCloudSyncPipelineStageDescription : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ _accountInfo;
    void /* unknown type, empty encoding */ _descriptions;
}

@property (nonatomic, readonly) NSString *description;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionForLogs;
- (id)mergeWithDescription:(id)a0;
- (id)serializedPrettyPrinted:(BOOL)a0 error:(id *)a1;
- (id)setAccountInfoPartition:(id)a0 hasValidCredentials:(BOOL)a1 accountStatus:(id)a2 encryptionStatus:(id)a3;

@end
