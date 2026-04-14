@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection {
    NSUUID *_uuid;
    BOOL _isUsingTokenService;
}

+ (id)secondaryConnection;
+ (id)cloudDocsAppSupportURL;
+ (void)initialize;
+ (id)syncedDocumentsURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)cloudDocsCachesURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)mobileDocumentsURL;
+ (id)defaultConnectionForPersonaID:(id)a0;
+ (id)syncedRootURLsForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)homeDirectoryURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)syncedDesktopURL;
+ (id)cloudDocsCachesURL;
+ (id)defaultConnection;
+ (id)syncedDesktopURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (void)invalidateCachedURLProperties;
+ (id)cloudDocsAppSupportURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)defaultConnectionIfExistsForPersonaID:(id)a0;
+ (id)secondaryConnectionForPersonaID:(id)a0;
+ (id)secondaryConnectionIfExistsForPersonaID:(id)a0;
+ (void)clearURLCacheForPersonaID:(id)a0;
+ (id)mobileDocumentsURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (void)invalidateCachedURLPropertiesForPersonaID:(id)a0;
+ (id)secondaryConnectionIfExists;
+ (id)defaultConnectionIfExists;
+ (id)syncedDocumentsURL;
+ (void)clearURLCache;
+ (id)syncedRootURLs;
+ (id)homeDirectoryURL;

- (id)newFPFSSyncProxy;
- (id)newSyncProxy;
- (void)_setupAndResumeForPersonaID:(id)a0;
- (void).cxx_destruct;
- (id)initUsingUserLocalDaemon;
- (id)initUsingUserLocalDaemonTokenService;
- (id)newSyncTokenProxy;

@end
