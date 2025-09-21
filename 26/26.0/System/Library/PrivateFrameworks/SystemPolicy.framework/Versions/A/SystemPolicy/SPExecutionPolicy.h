@class SPExecutionPolicyExportedObject, NSXPCConnection, NSXPCInterface, NSLock;

@interface SPExecutionPolicy : NSObject {
    NSXPCInterface *_interface;
    NSXPCConnection *_connection;
    NSLock *_lock;
    id /* block */ _progressBlock;
    SPExecutionPolicyExportedObject *_exportedObject;
}

- (BOOL)setProgressHandler:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (id)connection;
- (id)progressBlock;
- (void).cxx_destruct;
- (BOOL)addGatekeeperUserIntent:(id)a0 error:(id *)a1;
- (void)performGatekeeperPreflight:(id)a0 withPreflightOptions:(unsigned long long)a1 withResult:(id /* block */)a2;
- (BOOL)addBlockedSoftwareOverride:(id)a0 error:(id *)a1;
- (BOOL)allowGatekeeperPolicy:(unsigned long long)a0 error:(id *)a1;
- (id)blockedExecutionPolicyItems;
- (void)doGatekeeperProgressUpdate:(long long)a0 withTotal:(long long)a1;
- (BOOL)getBlockedSoftwareOverride:(id)a0 error:(id *)a1;
- (BOOL)getGatekeeperInsightEnabled:(id *)a0;
- (unsigned long long)getGatekeeperPolicyWithError:(id *)a0;
- (BOOL)getStrictGatekeeperEnabledForDomain:(unsigned long long)a0 error:(id *)a1;
- (BOOL)isBlockedSoftware:(id)a0 error:(id *)a1;
- (BOOL)isFastGatekeeperOverrideModeEnabled;
- (BOOL)isGatekeeperPolicyAllowed:(unsigned long long)a0 error:(id *)a1;
- (id)legacyExecutionHistory;
- (BOOL)logGatekeeperOverrideForURL:(id)a0 withError:(id *)a1;
- (id /* block */)myProgressHandler;
- (BOOL)notifyInstalledContent:(id)a0 withInstallationType:(unsigned long long)a1 error:(id *)a2;
- (id)performGatekeeperScan:(id)a0 withScanOptions:(unsigned long long)a1 withProgressHandler:(id /* block */)a2 error:(id *)a3;
- (id)performGatekeeperScan:(id)a0 withScanOptions:(unsigned long long)a1 withShouldOverridePolicy:(BOOL)a2 withPolicy:(unsigned long long)a3 withProgressHandler:(id /* block */)a4 error:(id *)a5;
- (BOOL)setBlockedSoftwareOverride:(id)a0 isEnabled:(BOOL)a1 error:(id *)a2;
- (BOOL)setGatekeeperInsightDefault:(id *)a0;
- (BOOL)setGatekeeperInsightEnabled:(BOOL)a0 error:(id *)a1;
- (BOOL)setGatekeeperPolicy:(unsigned long long)a0 error:(id *)a1;
- (BOOL)setStrictGatekeeperEnabled:(BOOL)a0 forDomain:(unsigned long long)a1 error:(id *)a2;

@end
