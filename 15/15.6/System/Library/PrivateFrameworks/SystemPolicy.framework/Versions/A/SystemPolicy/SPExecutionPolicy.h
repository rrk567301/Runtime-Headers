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
- (char)addGatekeeperUserIntent:(id)a0 error:(id *)a1;
- (void)performGatekeeperPreflight:(id)a0 withPreflightOptions:(unsigned long long)a1 withResult:(id /* block */)a2;
- (char)setProgressHandler:(id /* block */)a0;
- (id)progressBlock;
- (char)addBlockedSoftwareOverride:(id)a0 error:(id *)a1;
- (char)allowGatekeeperPolicy:(unsigned long long)a0 error:(id *)a1;
- (id)blockedExecutionPolicyItems;
- (void)doGatekeeperProgressUpdate:(long long)a0 withTotal:(long long)a1;
- (char)getBlockedSoftwareOverride:(id)a0 error:(id *)a1;
- (char)getGatekeeperInsightEnabled:(id *)a0;
- (unsigned long long)getGatekeeperPolicyWithError:(id *)a0;
- (char)getStrictGatekeeperEnabledForDomain:(unsigned long long)a0 error:(id *)a1;
- (char)isBlockedSoftware:(id)a0 error:(id *)a1;
- (char)isFastGatekeeperOverrideModeEnabled;
- (char)isGatekeeperPolicyAllowed:(unsigned long long)a0 error:(id *)a1;
- (id)legacyExecutionHistory;
- (char)logGatekeeperOverrideForURL:(id)a0 withError:(id *)a1;
- (id /* block */)myProgressHandler;
- (char)notifyInstalledContent:(id)a0 withInstallationType:(unsigned long long)a1 error:(id *)a2;
- (id)performGatekeeperScan:(id)a0 withScanOptions:(unsigned long long)a1 withProgressHandler:(id /* block */)a2 error:(id *)a3;
- (char)setBlockedSoftwareOverride:(id)a0 isEnabled:(char)a1 error:(id *)a2;
- (char)setGatekeeperInsightDefault:(id *)a0;
- (char)setGatekeeperInsightEnabled:(char)a0 error:(id *)a1;
- (char)setGatekeeperPolicy:(unsigned long long)a0 error:(id *)a1;
- (char)setStrictGatekeeperEnabled:(char)a0 forDomain:(unsigned long long)a1 error:(id *)a2;

@end
