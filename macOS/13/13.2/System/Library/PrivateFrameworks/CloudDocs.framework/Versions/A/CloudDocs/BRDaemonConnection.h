@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection {
    NSUUID *_uuid;
    BOOL _isUsingTokenService;
}

+ (void)initialize;
+ (id)defaultConnection;
+ (id)homeDirectoryURL;
+ (id)mobileDocumentsURL;
+ (id)syncedRootURLs;
+ (id)defaultConnectionIfExists;
+ (id)secondaryConnectionIfExists;
+ (id)secondaryConnection;
+ (id)t_connectionForUUID:(id)a0;
+ (void)t_setDefaultConnection:(id)a0;
+ (void)t_setMobileDocumentsURL:(id)a0;
+ (id)homeDirectoryURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)mobileDocumentsURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)cloudDocsAppSupportURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)cloudDocsCachesURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)syncedDesktopURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)syncedDocumentsURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)syncedRootURLsForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)syncedDesktopURL;
+ (id)syncedDocumentsURL;
+ (id)cloudDocsAppSupportURL;
+ (id)cloudDocsCachesURL;
+ (void)invalidateCachedURLProperties;
+ (void)invalidateCachedURLPropertiesForPersonaID:(id)a0;
+ (void)clearURLCache;
+ (void)clearURLCacheForPersonaID:(id)a0;

- (void).cxx_destruct;
- (id)initUsingUserLocalDaemon;
- (id)initUsingUserLocalDaemonTokenService;
- (void)_setupAndResume;
- (id)newSyncProxy;
- (id)newLegacySyncProxy;
- (id)newFPFSSyncProxy;
- (id)newSyncTokenProxy;

@end
