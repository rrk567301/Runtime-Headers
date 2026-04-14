@class NSString, NSMutableArray, NSMutableDictionary;

@interface NSPrefPanesCenter : NSObject {
    NSMutableArray *_ppBundles;
    NSMutableDictionary *_ppByIdentifier;
    unsigned long long _numIOPrefPanes;
    struct IONotificationPort { } *_notifyPort;
    unsigned int _ioIterator[16];
}

@property (readonly) NSString *serialNumber;

+ (id)preferencesDirectoryPath;
+ (id)prefPanesDirectoriesIncludingSystem:(BOOL)a0;
+ (id)cacheFolderPathForDomain:(unsigned long long)a0;
+ (id)userCacheFolderPath;
+ (id)systemCacheFolderPath;
+ (id)systemCacheFilePath;
+ (id)userCacheFilePath;
+ (id)sharedPreferencesCenter;
+ (id)pathOfPreferenceWithIdentifier:(id)a0;
+ (void)verifyAndUpdateSystemCache;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)serialNumber;
- (id)_currentLanguage;
- (void)_updateCache;
- (void)_writeCache:(id)a0 isSystemCache:(BOOL)a1 synchronous:(BOOL)a2;
- (id)_verifyAndReadSystemCacheSynchronous:(BOOL)a0;
- (id)_verifyAndReadCache;
- (void)_checkHWForPreferences:(id)a0;
- (id)_prefPaneBundles;
- (id)_prefPaneBundlesWithHWCheckCompletionBlock:(id /* block */)a0;
- (id)_prefPanesByIdentifier;
- (unsigned long long)numberOfPrefPanes;
- (id)prefPaneBundleAtIndex:(unsigned long long)a0;
- (unsigned long long)indexOfPrefPaneWithIdentifier:(id)a0;
- (id)prefPaneBundleWithIdentifier:(id)a0;
- (id)prefPaneBundleForURLScheme:(id)a0;
- (unsigned long long)indexOfPrefPaneWithBundlePath:(id)a0;
- (unsigned long long)indexOfPrefPane:(id)a0;
- (void)loadPreferencePanes:(id /* block */)a0;
- (id)orderedPrefPanes;
- (id)arrayOfPrefPaneIdentifiers;
- (void)updateCacheFileWithPrefPane:(id)a0;
- (void)removePrefPaneFromCache:(id)a0;
- (id)buildCache:(BOOL)a0;

@end
