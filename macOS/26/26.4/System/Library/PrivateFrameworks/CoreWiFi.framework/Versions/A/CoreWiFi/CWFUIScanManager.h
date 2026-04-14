@class NSArray, NSMutableDictionary, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface CWFUIScanManager : NSObject {
    NSMutableSet *_scansInProgress;
    NSMutableDictionary *_scanCache;
    NSMutableDictionary *_scanCacheTimestamps;
    NSMutableDictionary *_scanQueues;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (copy, nonatomic) NSArray *bandChannels;
@property (copy) id /* block */ issueScanHandler;
@property (copy) id /* block */ finishedScanHandler;
@property (copy) id /* block */ hiddenNetworkNameHandler;

- (void).cxx_destruct;
- (id)init;
- (void)_performDirectedScanWithRetry:(id)a0 interfaceName:(id)a1 attempt:(long long)a2 completion:(id /* block */)a3;
- (void)_accumulateScanResults:(id)a0 forInterface:(id)a1;
- (unsigned int)_channelBandForScanType:(long long)a0;
- (void)_performDirectedScan:(id)a0 interfaceName:(id)a1 completion:(id /* block */)a2;
- (void)_performDirectedScanWithRetry:(id)a0 interfaceName:(id)a1 completion:(id /* block */)a2;
- (void)_performScan:(long long)a0 interfaceName:(id)a1 completion:(id /* block */)a2;
- (void)_performScanWithRetry:(long long)a0 interfaceName:(id)a1 attempt:(long long)a2 completion:(id /* block */)a3;
- (void)_performScanWithRetry:(long long)a0 interfaceName:(id)a1 completion:(id /* block */)a2;
- (id)_scanTypeNameForScanType:(long long)a0;
- (void)addScanResults:(id)a0 forInterface:(id)a1;
- (id)cachedScanResultsForInterface:(id)a0;
- (void)cancelScansForInterfaceName:(id)a0;
- (BOOL)startScansForInterfaceName:(id)a0;

@end
