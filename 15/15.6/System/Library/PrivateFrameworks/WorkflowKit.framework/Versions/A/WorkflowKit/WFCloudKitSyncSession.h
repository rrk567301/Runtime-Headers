@interface WFCloudKitSyncSession : NSObject

@property (class, nonatomic, getter=isWalrusEnabled) char walrusEnabled;
@property (class, nonatomic, getter=isWalrusForcedEnabled) char walrusForcedEnabled;
@property (class, nonatomic, getter=isSyncEnabled) char syncEnabled;
@property (class, nonatomic) char zoneWasPurged;
@property (class, nonatomic) char ignoresUserDeletedZoneErrors;
@property (class, nonatomic) char voiceShortcutMigrationDidRun;
@property (class, nonatomic) char voiceShortcutMigrationDidSync;
@property (class, nonatomic) long long defaultShortcutsVersion;
@property (class, readonly, nonatomic) long long currentDefaultShortcutsVersion;
@property (class, readonly, nonatomic) char needsDefaultShortcutUpdate;
@property (class, readonly) long long syncedFlagsHash;
@property (class, nonatomic) long long lastSyncedFlagsHash;

+ (void)initialize;
+ (void)fetchCloudKitSyncFlagsIfNecessaryWithCompletionHandler:(id /* block */)a0;
+ (void)resolveWalrusStatus;

@end
