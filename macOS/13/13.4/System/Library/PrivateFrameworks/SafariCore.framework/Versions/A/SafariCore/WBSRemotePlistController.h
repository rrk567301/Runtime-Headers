@class NSString, WBSConfigurationDownloader, NSURL, NSTimer, NSObject;
@protocol WBSRemotePlistControllerDelegate, OS_dispatch_queue, WBSRemotePlistSnapshot;

@interface WBSRemotePlistController : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_diskWriteQueue;
    id /* block */ _builtInListDataProvider;
    NSURL *_downloadsDirectoryURL;
    NSString *_resourceName;
    NSString *_resourceVersion;
    NSString *_updateDateDefaultsKey;
    Class _snapshotClass;
    Class _snapshotTransformerClass;
    double _updateInterval;
    id<WBSRemotePlistSnapshot> _currentSnapshot;
    WBSConfigurationDownloader *_configurationDownloader;
    NSTimer *_updateTimer;
}

@property (weak, nonatomic) id<WBSRemotePlistControllerDelegate> delegate;
@property (nonatomic) BOOL shouldAttemptToUpdateConfiguration;
@property (nonatomic) BOOL shouldAttemptToDownloadConfiguration;

+ (id)new;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_lastConfigurationUpdateAttemptDate;
- (void)_setCurrentDateAsLastConfigurationUpdateAttemptDate;
- (BOOL)_shouldUpdateConfigurationGivenLastConfigurationUpdateAttemptDate:(id)a0;
- (void)accessSnapshotLoadingItIfNeeded:(id /* block */)a0;
- (id)initWithBuiltInListURL:(id)a0 downloadsDirectoryURL:(id)a1 resourceName:(id)a2 resourceVersion:(id)a3 updateDateDefaultsKey:(id)a4 updateInterval:(double)a5 snapshotClass:(Class)a6 snapshotTransformerClass:(Class)a7;
- (void)prepareForTermination;
- (void)_loadDownloadedSnapshotIfNeeded;
- (void)_didLoadSnapshot:(id)a0;
- (id)_downloadedListResourceName;
- (void)_loadBuiltInSnapshotIfNeeded;
- (void)_resetUpdateTimer;
- (void)_updateDownloadedPlistIfNecessary;
- (id)_urlOfDownloadedList;
- (void)_writeConfigurationData:(id)a0;
- (void)accessCurrentSnapshot:(id /* block */)a0;
- (id)fetchDataFromCurrentSnapshot:(id /* block */)a0;
- (id)initWithDownloadsDirectoryURL:(id)a0 resourceName:(id)a1 resourceVersion:(id)a2 updateDateDefaultsKey:(id)a3 updateInterval:(double)a4 snapshotClass:(Class)a5 snapshotTransformerClass:(Class)a6 builtInListDataProvider:(id /* block */)a7;

@end
