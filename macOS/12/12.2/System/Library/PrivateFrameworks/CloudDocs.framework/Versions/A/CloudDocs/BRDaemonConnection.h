@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection {
    NSUUID *_uuid;
    BOOL _isUsingTokenService;
}

+ (void)initialize;
+ (id)defaultConnection;
+ (id)mobileDocumentsURL;
+ (id)homeDirectoryURL;
+ (id)defaultConnectionIfExists;
+ (id)secondaryConnectionIfExists;
+ (id)secondaryConnection;
+ (id)syncedDesktopURL;
+ (id)syncedDocumentsURL;
+ (id)syncedDocumentsURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)syncedDesktopURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)mobileDocumentsURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)syncedRootURLs;
+ (id)cloudDocsAppSupportURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)cloudDocsCachesURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)homeDirectoryURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)cloudDocsAppSupportURL;
+ (id)syncedRootURLsForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)t_connectionForUUID:(id)a0;
+ (void)t_setDefaultConnection:(id)a0;
+ (void)t_setMobileDocumentsURL:(id)a0;
+ (id)cloudDocsCachesURL;
+ (void)invalidateCachedURLProperties;

- (void).cxx_destruct;
- (id)initUsingUserLocalDaemonTokenService;
- (id)newSyncTokenProxy;
- (id)newSyncProxy;
- (void)_setupAndResume;
- (id)initUsingUserLocalDaemon;

@end
