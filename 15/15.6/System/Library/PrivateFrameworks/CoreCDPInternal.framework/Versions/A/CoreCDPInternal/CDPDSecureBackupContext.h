@class NSString, CDPDevice, CDPDCircleJoinResult;

@interface CDPDSecureBackupContext : NSObject

@property (copy, nonatomic) NSString *localSecret;
@property (nonatomic) unsigned long long localSecretType;
@property (copy, nonatomic) CDPDevice *device;
@property (copy, nonatomic) NSString *recoverySecret;
@property (nonatomic) char silentRecovery;
@property (nonatomic) char octagonCapableRecordsExist;
@property (copy, nonatomic) NSString *recoveryKey;
@property (nonatomic) char usePreviouslyCachedRecoveryKey;
@property (copy, nonatomic) NSString *telemetryDeviceSessionID;
@property (copy, nonatomic) NSString *telemetryFlowID;
@property (nonatomic) char usePreviouslyCachedSecret;
@property (retain, nonatomic) CDPDCircleJoinResult *circleJoinResult;
@property (retain, nonatomic) NSString *preRecordUUID;
@property (nonatomic) char synchronous;
@property (nonatomic) char nonViableRequiresRepair;

- (id)description;
- (void).cxx_destruct;

@end
