@class NSString, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, CWFAssetRootMonitorDelegate;

@interface CWFAssetRootMonitor : NSObject {
    NSString *monitoredPath;
    NSString *monitoredParentPath;
    NSMutableSet *pathsUpdated;
    NSMutableDictionary *pathsFileAttributes;
    NSMutableDictionary *pathsFileAttributesAtLastCheck;
    NSMutableSet *pathsExisting;
    NSMutableSet *pathsExistingAtLastCheck;
    long long pathPollingInterval;
    NSObject<OS_dispatch_queue> *timerQueue;
    NSObject<OS_dispatch_source> *timer;
}

@property (weak, nonatomic) id<CWFAssetRootMonitorDelegate> delegate;

- (void)startMonitoring;
- (void)dealloc;
- (void)scheduleTimer;
- (void)checkForChanges;
- (void).cxx_destruct;
- (void)checkForDeletedPath:(id)a0;
- (void)handleUpdatedPaths;
- (id)initMonitorWithPath:(id)a0;
- (void)printDictionaryDifferences:(id)a0 dictTwo:(id)a1;
- (void)startMonitoringPath:(id)a0;
- (void)stopMonitoringStream;

@end
