@interface SFSyncManager : NSObject {
    id _reserved_SFSyncManager;
}

+ (id)sharedSyncManager;
+ (id)pathForEmbeddedTool:(id)a0;
+ (id)defaultClientID;

- (void)dealloc;
- (id)init;
- (id)_syncList;
- (void)_updateLogLevel;
- (void)initSyncList:(id)a0;
- (int)runSyncToolWithArguments:(id)a0 wait:(BOOL)a1;
- (int)makeLocalPath:(id)a0;
- (int)runDotMacToolWithArguments:(id)a0 wait:(BOOL)a1;
- (id)_keychainDictionaryOnDotMacForKeychain:(id)a0;
- (BOOL)_signaturesMatchForKeychain:(struct __SecKeychain { } *)a0 keychainLeafName:(id)a1;
- (BOOL)_keychainBlobExists:(struct __SecKeychain { } *)a0 inDictionary:(id)a1 returnedBlob:(id *)a2;
- (int)updateDictOnIDisk:(id)a0 localFile:(id)a1 dictToWrite:(id)a2;
- (id)keychainSyncList;
- (void)saveSyncList;
- (id)keychainName:(struct __SecKeychain { } *)a0;
- (int)_recodeKeychainIfBlobDNE:(struct __SecKeychain { } *)a0 keychainLeafName:(id)a1 didRecode:(BOOL *)a2;
- (int)createAndEnableDotMacKeychainForSyncing:(id)a0;
- (int)prepareKeychainToSync:(struct __SecKeychain { } *)a0;
- (unsigned int)syncStateForKeychain:(struct __SecKeychain { } *)a0;
- (int)runProcess:(id)a0 arguments:(id)a1 wait:(BOOL)a2;
- (int)resetKeychainSyncing;
- (BOOL)_didPushKeychainBlobIfDNE:(struct __SecKeychain { } *)a0 keychainLeafName:(id)a1;
- (void)_replaceStaleBlobs;
- (int)autoCreateKeychainsWithBlobsOnIDisk:(BOOL *)a0;
- (void)loginKeychainWasReset:(id)a0 forKeychain:(struct __SecKeychain { } *)a1 syncState:(unsigned int)a2;
- (void)blobChanged:(id)a0 forKeychain:(id)a1;
- (void)setSyncState:(unsigned int)a0 keychain:(struct __SecKeychain { } *)a1;
- (BOOL)syncingEnabled;

@end
