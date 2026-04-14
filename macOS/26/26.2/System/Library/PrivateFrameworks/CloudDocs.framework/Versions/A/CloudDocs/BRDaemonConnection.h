@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection {
    NSUUID *_uuid;
    BOOL _isUsingTokenService;
}

+ (void)initialize;
+ (id)syncedDesktopURL;
+ (void)invalidateCachedURLProperties;
+ (void)clearURLCacheForPersonaID:(id)a0;
+ (void)clearURLCache;
+ (id)homeDirectoryURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)cloudDocsCachesURL;
+ (id)secondaryConnection;
+ (id)syncedRootURLsForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)secondaryConnectionIfExistsForPersonaID:(id)a0;
+ (id)defaultConnection;
+ (id)secondaryConnectionForPersonaID:(id)a0;
+ (id)cloudDocsAppSupportURL;
+ (id)syncedDesktopURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)homeDirectoryURL;
+ (id)cloudDocsCachesURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)defaultConnectionIfExists;
+ (id)mobileDocumentsURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (void)invalidateCachedURLPropertiesForPersonaID:(id)a0;
+ (id)syncedRootURLs;
+ (id)syncedDocumentsURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)defaultConnectionIfExistsForPersonaID:(id)a0;
+ (id)syncedDocumentsURL;
+ (id)defaultConnectionForPersonaID:(id)a0;
+ (id)mobileDocumentsURL;
+ (id)secondaryConnectionIfExists;
+ (id)cloudDocsAppSupportURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;

- (id)initUsingUserLocalDaemonTokenService;
- (id)initUsingUserLocalDaemon;
- (id)newFPFSSyncProxy;
- (void).cxx_destruct;
- (id)newSyncProxy;
- (void)_setupAndResumeForPersonaID:(id)a0;
- (id)newSyncTokenProxy;

@end
