@class NSString, CSSearchableIndex;

@interface SDCoreSpotlightDiagnosticClient : SDDiagnosticClient {
    NSString *_bundleID;
    NSString *_protectionClass;
    NSString *_path;
    BOOL _private;
    BOOL _managed;
    CSSearchableIndex *_index;
}

+ (id)defaultClientWithBundleID:(id)a0 protectionClass:(id)a1;
+ (id)managedClientWithBundleID:(id)a0 protectionClass:(id)a1 path:(id)a2;
+ (id)privateClientWithBundleID:(id)a0 protectionClass:(id)a1 path:(id)a2;

- (void)setUser:(unsigned int)a0;
- (BOOL)isManaged;
- (BOOL)isPrivate;
- (id)debugDescription;
- (id)bundleID;
- (void).cxx_destruct;
- (id)indexPath;
- (id)copySpotlightIndexDropsToDirectory:(id)a0 forDays:(unsigned int)a1;
- (id)getSpotlightHeartbeatData;
- (id)getSpotlightVersionWithRoots:(BOOL *)a0;
- (void)getStatus:(BOOL)a0 protectionClasses:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithBundleID:(id)a0 protectionClass:(id)a1 path:(id)a2 private:(BOOL)a3 managed:(BOOL)a4;
- (void)issueDiagnose:(int)a0 privacyLevel:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (void)setActiveUser;

@end
