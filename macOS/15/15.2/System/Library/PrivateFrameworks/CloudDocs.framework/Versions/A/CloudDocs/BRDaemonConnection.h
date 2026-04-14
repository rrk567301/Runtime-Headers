@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection {
    NSUUID *_uuid;
    BOOL _isUsingTokenService;
}

+ (void)initialize;
+ (id)defaultConnection;
+ (id)homeDirectoryURL;
+ (void)clearURLCache;
+ (void)clearURLCacheForPersonaID:(id)a0;
+ (id)cloudDocsAppSupportURL;
+ (id)cloudDocsAppSupportURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)cloudDocsCachesURL;
+ (id)cloudDocsCachesURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)defaultConnectionForKey:(id)a0 initializer:(id /* block */)a1;
+ (id)defaultConnectionIfExists;
+ (id)defaultConnectionIfExistsForKey:(id)a0;
+ (id)homeDirectoryURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (void)invalidateCachedURLProperties;
+ (void)invalidateCachedURLPropertiesForPersonaID:(id)a0;
+ (id)mobileDocumentsURL;
+ (id)mobileDocumentsURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)secondaryConnection;
+ (id)secondaryConnectionForKey:(id)a0 initializer:(id /* block */)a1;
+ (id)secondaryConnectionIfExists;
+ (id)secondaryConnectionIfExistsForKey:(id)a0;
+ (id)syncedDesktopURL;
+ (id)syncedDesktopURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)syncedDocumentsURL;
+ (id)syncedDocumentsURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)syncedRootURLs;
+ (id)syncedRootURLsForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;

- (void).cxx_destruct;
- (void)_setupAndResumeForKey:(id)a0;
- (id)initUsingUserLocalDaemon;
- (id)initUsingUserLocalDaemonTokenService;
- (id)newFPFSSyncProxy;
- (id)newLegacySyncProxy;
- (id)newSyncProxy;
- (id)newSyncTokenProxy;

@end
