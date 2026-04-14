@class NSString;
@protocol RTUserDefaults;

@interface RTDefaultsManager : RTService <RTDiagnosticProvider> {
    id<RTUserDefaults> _userDefaults;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)addDomain:(id)a0;
- (id)objectForKey:(id)a0 domain:(id)a1;
- (void)sendDiagnosticsToURL:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)setObject:(id)a0 forKey:(id)a1 domain:(id)a2;
- (id)initWithUserDefaults:(id)a0 customDomain:(id)a1;
- (void)notifyUpdatedKeys:(id)a0;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (id)objectForKey:(id)a0;
- (id)copyKeyListContainingString:(id)a0;
- (void)fetchDiagnosticLogsWithHandler:(id /* block */)a0;
- (void)registerDefault:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0 value:(id)a1;
- (void)registerDefaults:(id)a0;
- (void).cxx_destruct;
- (BOOL)_generateDiagnosticFilesAtURL:(id)a0 error:(id *)a1;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)init;

@end
