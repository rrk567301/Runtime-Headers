@interface SFSyncManager : NSObject {
    id _reserved_SFSyncManager;
}

+ (id)defaultClientID;
+ (id)pathForEmbeddedTool:(id)a0;
+ (id)sharedSyncManager;

- (void)dealloc;
- (id)init;
- (void)_updateLogLevel;
- (char)_didPushKeychainBlobIfDNE:(struct __SecKeychain { } *)a0 keychainLeafName:(id)a1;
- (char)_keychainBlobExists:(struct __SecKeychain { } *)a0 inDictionary:(id)a1 returnedBlob:(id *)a2;
- (id)_keychainDictionaryOnDotMacForKeychain:(id)a0;
- (int)_recodeKeychainIfBlobDNE:(struct __SecKeychain { } *)a0 keychainLeafName:(id)a1 didRecode:(char *)a2;
- (void)_replaceStaleBlobs;
- (char)_signaturesMatchForKeychain:(struct __SecKeychain { } *)a0 keychainLeafName:(id)a1;
- (id)_syncList;
- (int)autoCreateKeychainsWithBlobsOnIDisk:(char *)a0;
- (void)blobChanged:(id)a0 forKeychain:(id)a1;
- (int)createAndEnableDotMacKeychainForSyncing:(id)a0;
- (void)initSyncList:(id)a0;
- (id)keychainName:(struct __SecKeychain { } *)a0;
- (id)keychainSyncList;
- (void)loginKeychainWasReset:(id)a0 forKeychain:(struct __SecKeychain { } *)a1 syncState:(unsigned int)a2;
- (int)makeLocalPath:(id)a0;
- (int)prepareKeychainToSync:(struct __SecKeychain { } *)a0;
- (int)resetKeychainSyncing;
- (int)runDotMacToolWithArguments:(id)a0 wait:(char)a1;
- (int)runProcess:(id)a0 arguments:(id)a1 wait:(char)a2;
- (int)runSyncToolWithArguments:(id)a0 wait:(char)a1;
- (void)saveSyncList;
- (void)setSyncState:(unsigned int)a0 keychain:(struct __SecKeychain { } *)a1;
- (unsigned int)syncStateForKeychain:(struct __SecKeychain { } *)a0;
- (char)syncingEnabled;
- (int)updateDictOnIDisk:(id)a0 localFile:(id)a1 dictToWrite:(id)a2;

@end
