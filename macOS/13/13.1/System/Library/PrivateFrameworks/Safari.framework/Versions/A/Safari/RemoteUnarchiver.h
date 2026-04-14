@class NSString, SafariSandboxBrokerConnection;

@interface RemoteUnarchiver : WBSDownloadFileUnarchiver {
    SafariSandboxBrokerConnection *_connection;
    unsigned long long _fileType;
    NSString *_uuid;
}

- (void).cxx_destruct;
- (void)unarchive;
- (BOOL)canInterruptUnarchiving;
- (void)interruptUnarchiving;
- (id)initWithSourcePath:(id)a0 fileType:(unsigned long long)a1;

@end
