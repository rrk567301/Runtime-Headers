@class SKDisk;

@interface SMSystem_Daemon_ArchiveAndInstallBased : SMSystem_Daemon

@property (retain) SKDisk *skDisk;

- (void).cxx_destruct;
- (id)accessibilityDescription;
- (id)primaryIdentifier;
- (unsigned long long)systemType;
- (id)displayIcon;
- (id)initWithPath:(id)a0 onVolume:(id)a1;
- (double)estimatedTransferRate;
- (void)fixUpSlashUsersDirectoryLocation;

@end
