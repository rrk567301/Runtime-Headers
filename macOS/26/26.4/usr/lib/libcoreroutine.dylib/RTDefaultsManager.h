@class NSString;
@protocol RTUserDefaults;

@interface RTDefaultsManager : RTService <RTDiagnosticProvider> {
    id<RTUserDefaults> _userDefaults;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (id)objectForKey:(id)a0;
- (id)objectForKey:(id)a0 domain:(id)a1;
- (void)registerDefault:(id)a0 forKey:(id)a1;
- (void)notifyUpdatedKeys:(id)a0;
- (id)objectForKey:(id)a0 value:(id)a1;
- (id)initWithUserDefaults:(id)a0 customDomain:(id)a1;
- (void)setObject:(id)a0 forKey:(id)a1 domain:(id)a2;
- (void)sendDiagnosticsToURL:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)fetchDiagnosticLogsWithHandler:(id /* block */)a0;
- (id)init;
- (id)copyKeyListContainingString:(id)a0;
- (BOOL)_generateDiagnosticFilesAtURL:(id)a0 error:(id *)a1;
- (void)registerDefaults:(id)a0;
- (void)addDomain:(id)a0;

@end
