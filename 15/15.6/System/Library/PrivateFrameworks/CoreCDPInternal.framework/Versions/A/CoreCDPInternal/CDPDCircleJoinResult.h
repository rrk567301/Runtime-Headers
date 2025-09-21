@interface CDPDCircleJoinResult : NSObject

@property char didJoin;
@property char needsBackupRecovery;
@property char hasPeersForRemoteApproval;
@property char hasPeersWithCDPBackupRecords;
@property char requiresEscrowRecordsFetch;
@property char requiresInitialSync;
@property unsigned long long remotePeeriCKState;
@property unsigned long long circleStatus;

@end
