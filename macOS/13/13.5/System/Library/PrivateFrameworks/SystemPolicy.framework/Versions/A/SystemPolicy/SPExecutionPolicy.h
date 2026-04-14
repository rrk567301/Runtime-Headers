@class NSXPCConnection, NSLock, NSXPCInterface;

@interface SPExecutionPolicy : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
    NSLock *_lock;
    id /* block */ _progressBlock;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)connection;
- (BOOL)addGatekeeperUserIntent:(id)a0 error:(id *)a1;
- (void)performGatekeeperPreflight:(id)a0 withPreflightOptions:(unsigned long long)a1 withResult:(id /* block */)a2;
- (id)progressBlock;
- (BOOL)setProgressHandler:(id /* block */)a0;
- (BOOL)addBlockedSoftwareOverride:(id)a0 error:(id *)a1;
- (id)blockedExecutionPolicyItems;
- (void)doGatekeeperProgressUpdate:(long long)a0 withTotal:(long long)a1;
- (BOOL)getBlockedSoftwareOverride:(id)a0 error:(id *)a1;
- (BOOL)isBlockedSoftware:(id)a0 error:(id *)a1;
- (id)legacyExecutionHistory;
- (id /* block */)myProgressHandler;
- (BOOL)notifyInstalledContent:(id)a0 withInstallationType:(unsigned long long)a1 error:(id *)a2;
- (id)performGatekeeperScan:(id)a0 withScanOptions:(unsigned long long)a1 withProgressHandler:(id /* block */)a2 error:(id *)a3;
- (BOOL)setBlockedSoftwareOverride:(id)a0 isEnabled:(BOOL)a1 error:(id *)a2;

@end
