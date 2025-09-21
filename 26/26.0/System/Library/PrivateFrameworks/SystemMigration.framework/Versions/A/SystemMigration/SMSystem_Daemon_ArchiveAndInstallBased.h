@class SKDisk;

@interface SMSystem_Daemon_ArchiveAndInstallBased : SMSystem_Daemon

@property (retain) SKDisk *skDisk;

- (id)primaryIdentifier;
- (id)accessibilityDescription;
- (void).cxx_destruct;
- (id)displayIcon;
- (unsigned long long)systemType;
- (double)estimatedTransferRate;
- (void)fixUpSlashUsersDirectoryLocation;
- (id)initWithPath:(id)a0 onVolume:(id)a1;

@end
