@class NSUUID;

@interface BRDaemonConnection : NSXPCConnection {
    NSUUID *_uuid;
    BOOL _isUsingTokenService;
}

+ (id)homeDirectoryURL;
+ (void)initialize;
+ (id)syncedDocumentsURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)cloudDocsAppSupportURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)defaultConnection;
+ (id)mobileDocumentsURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)secondaryConnectionIfExistsForPersonaID:(id)a0;
+ (id)cloudDocsAppSupportURL;
+ (id)defaultConnectionIfExists;
+ (id)cloudDocsCachesURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)syncedRootURLs;
+ (void)invalidateCachedURLPropertiesForPersonaID:(id)a0;
+ (id)cloudDocsCachesURL;
+ (void)invalidateCachedURLProperties;
+ (id)secondaryConnectionForPersonaID:(id)a0;
+ (id)syncedDocumentsURL;
+ (id)syncedRootURLsForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)syncedDesktopURL;
+ (void)clearURLCache;
+ (id)homeDirectoryURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)syncedDesktopURLForPersonaID:(id)a0 needsPersonaSwitch:(BOOL)a1;
+ (id)secondaryConnection;
+ (id)defaultConnectionIfExistsForPersonaID:(id)a0;
+ (id)defaultConnectionForPersonaID:(id)a0;
+ (id)mobileDocumentsURL;
+ (void)clearURLCacheForPersonaID:(id)a0;
+ (id)secondaryConnectionIfExists;

- (id)newSyncTokenProxy;
- (id)newSyncProxy;
- (id)initUsingUserLocalDaemonTokenService;
- (void)_setupAndResumeForPersonaID:(id)a0;
- (void).cxx_destruct;
- (id)initUsingUserLocalDaemon;
- (id)newFPFSSyncProxy;

@end
