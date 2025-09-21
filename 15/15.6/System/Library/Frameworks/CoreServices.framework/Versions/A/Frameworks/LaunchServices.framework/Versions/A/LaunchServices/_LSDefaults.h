@class NSArray, NSMutableDictionary, NSURL, NSData, NSObject;
@protocol OS_dispatch_queue;

@interface _LSDefaults : NSObject {
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSURL *_baseSystemContainerURL;
    NSURL *_systemContainerURL;
    NSURL *_systemGroupContainerURL;
    NSData *_hmacSecret;
    NSMutableDictionary *_darwinNotificationNames;
    unsigned int _darwinNotificationNamesUID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _darwinNotificationNamesLock;
    long long _currentDisplayGamut;
}

@property (readonly) unsigned int currentSchemaVersion;
@property (readonly) NSURL *systemContainerURL;
@property (readonly) NSURL *systemGroupContainerURL;
@property (readonly) NSURL *databaseContainerDirectoryURL;
@property (readonly) unsigned short databaseStoreFileMode;
@property (readonly) NSURL *databaseStoreFileURL;
@property (readonly) NSURL *systemContentDatabaseStoreFileURL;
@property (readonly) NSURL *unremappableDatabaseStoreFileURL;
@property (readonly) NSURL *queriedSchemesMapFileURL;
@property (readonly) NSURL *identifiersFileURL;
@property (readonly) NSURL *preferencesFileURL;
@property (readonly) NSURL *securePreferencesFileURL;
@property (readonly) NSURL *settingsStoreFileURL;
@property (readonly) NSURL *defaultAppQueryStateURL;
@property (getter=isServer) char server;
@property (readonly, getter=isSystemServer) char systemServer;
@property (readonly, getter=isUserServer) char userServer;
@property (getter=isLightweightSystemServer) char lightweightSystemServer;
@property char hasServer;
@property (readonly) char allowClientSideDatabaseCreation;
@property (readonly, getter=isInEducationMode) char inEducationMode;
@property (readonly, getter=isUsingEphemeralStorage) char usingEphemeralStorage;
@property (readonly) char hasPersistentPreferences;
@property (readonly, getter=isInSyncBubble) char inSyncBubble;
@property (readonly, nonatomic, getter=isInXCTestRigInsecure) char inXCTestRigInsecure;
@property (readonly, nonatomic, getter=isAppleInternal) char appleInternal;
@property (readonly, nonatomic) char allowsAlternateIcons;
@property (readonly, nonatomic) char abortIfMayNotMapDatabase;
@property (readonly, nonatomic) char issueSandboxExceptionsIfMayNotMapDatabase;
@property (readonly) char allowsUnentitledExtensionPointDeclaration;
@property (readonly) char nsExtensionUsesLSSettingsStore;
@property (readonly) double databaseSaveInterval;
@property (readonly) double databaseSaveLatency;
@property (readonly) long long concurrentInstallOperations;
@property (readonly) NSArray *preferredLocalizations;
@property (readonly) char markLocalizationsStoredInDatabase;
@property (readonly) char alwaysUseDebugOpenWithMenus;
@property (readonly, getter=isRegionChina) char regionChina;
@property (readonly) NSData *HMACSecret;
@property (readonly, nonatomic) NSURL *trustedSignatureDatabaseURL;

+ (id)sharedInstance;

- (id)debugDescription;
- (id)init;
- (void).cxx_destruct;
- (unsigned int)proxyUIDForUID:(unsigned int)a0;
- (id)_launchServicesPreferencesFolderURL;
- (char)allowsUnentitledExtensionPointDeclaration;
- (char)alwaysUseDebugOpenWithMenus;
- (id)classesWithNameForXCTests:(const char *)a0;
- (id)darwinNotificationNameForBaseName:(id)a0 optionalSessionKey:(struct LSSessionKey { unsigned int x0; BOOL x1; } *)a1;
- (id)dataVaultURLWithUID:(unsigned int)a0;
- (id)databaseContainerURLWithUID:(unsigned int)a0;
- (id)databaseStoreFileURLWithUID:(unsigned int)a0;
- (id)databaseUpdateNotificationNameForSessionKey:(struct LSSessionKey { unsigned int x0; BOOL x1; })a0;
- (char)markLocalizationsStoredInDatabase;
- (char)nsExtensionUsesLSSettingsStore;
- (id)preferencesFileChangeNotificationName;
- (id)preferencesUpdateNotificationName;
- (id)preferredLocalizations;
- (unsigned int)proxyUIDForCurrentEffectiveUID;
- (id)serviceNameForConnectionType:(unsigned short)a0;
- (id)serviceNameForConnectionType:(unsigned short)a0 lightweightSystemService:(char)a1;
- (id)settingsUpdateNotificationNameForUserID:(unsigned int)a0;
- (id)simulatorRootURL;
- (id)simulatorRuntimeBuildVersion;
- (id)simulatorRuntimeVersion;
- (id)systemContainerBaseURL;
- (id)systemContentDatabaseStoreFileURLWithUID:(unsigned int)a0;
- (id)userPreferencesURL;

@end
