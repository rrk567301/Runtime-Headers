@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection {
    NSUUID *_uuid;
    BOOL _isUsingTokenService;
}

+ (id)mobileDocumentsURL;
+ (id)syncedDocumentsURL;
+ (id)syncedDesktopURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)defaultConnectionIfExistsForPersonaID:(id)a0;
+ (id)cloudDocsAppSupportURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (void)clearURLCache;
+ (id)secondaryConnectionIfExists;
+ (id)syncedDocumentsURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)cloudDocsCachesURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (void)initialize;
+ (id)cloudDocsAppSupportURL;
+ (id)homeDirectoryURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)defaultConnectionForPersonaID:(id)a0;
+ (id)syncedRootURLsForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)syncedDesktopURL;
+ (id)secondaryConnectionForPersonaID:(id)a0;
+ (id)cloudDocsCachesURL;
+ (void)invalidateCachedURLProperties;
+ (id)secondaryConnectionIfExistsForPersonaID:(id)a0;
+ (id)defaultConnection;
+ (id)homeDirectoryURL;
+ (void)clearURLCacheForPersonaID:(id)a0;
+ (void)invalidateCachedURLPropertiesForPersonaID:(id)a0;
+ (id)secondaryConnection;
+ (id)mobileDocumentsURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)defaultConnectionIfExists;
+ (id)syncedRootURLs;

- (id)newSyncProxy;
- (id)initUsingUserLocalDaemonTokenService;
- (id)newFPFSSyncProxy;
- (void)_setupAndResumeForPersonaID:(id)a0;
- (id)newSyncTokenProxy;
- (id)initUsingUserLocalDaemon;
- (void).cxx_destruct;

@end
