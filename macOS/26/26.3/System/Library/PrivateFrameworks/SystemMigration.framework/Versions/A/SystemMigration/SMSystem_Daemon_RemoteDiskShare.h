@interface SMSystem_Daemon_RemoteDiskShare : SMSystem_Daemon_RemoteTMDiskShare

- (id)accessibilityDescription;
- (id)initWithURL:(id)a0;
- (unsigned long long)systemType;
- (id)modelIcon;
- (BOOL)mountNetAuth:(BOOL)a0;
- (id)volumeIcon;

@end
