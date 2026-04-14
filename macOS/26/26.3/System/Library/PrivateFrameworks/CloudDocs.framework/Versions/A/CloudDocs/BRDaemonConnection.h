@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection {
    NSUUID *_uuid;
    BOOL _isUsingTokenService;
}

+ (id)homeDirectoryURL;
+ (void)initialize;
+ (void)clearURLCacheForPersonaID:(id)a0;
+ (id)cloudDocsCachesURL;
+ (id)secondaryConnectionIfExists;
+ (id)syncedDesktopURL;
+ (id)defaultConnection;
+ (id)syncedDocumentsURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)cloudDocsAppSupportURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)mobileDocumentsURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)syncedDesktopURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)defaultConnectionIfExists;
+ (id)secondaryConnection;
+ (id)defaultConnectionForPersonaID:(id)a0;
+ (id)mobileDocumentsURL;
+ (id)defaultConnectionIfExistsForPersonaID:(id)a0;
+ (void)invalidateCachedURLPropertiesForPersonaID:(id)a0;
+ (id)secondaryConnectionIfExistsForPersonaID:(id)a0;
+ (id)cloudDocsCachesURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)syncedRootURLs;
+ (id)homeDirectoryURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)syncedDocumentsURL;
+ (void)invalidateCachedURLProperties;
+ (id)secondaryConnectionForPersonaID:(id)a0;
+ (id)syncedRootURLsForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (void)clearURLCache;
+ (id)cloudDocsAppSupportURL;

- (void)_setupAndResumeForPersonaID:(id)a0;
- (id)initUsingUserLocalDaemon;
- (id)initUsingUserLocalDaemonTokenService;
- (void).cxx_destruct;
- (id)newFPFSSyncProxy;
- (id)newSyncTokenProxy;
- (id)newSyncProxy;

@end
