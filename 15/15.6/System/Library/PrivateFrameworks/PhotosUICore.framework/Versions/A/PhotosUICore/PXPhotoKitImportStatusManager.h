@class NSString, NSMutableDictionary, NSHashTable;

@interface PXPhotoKitImportStatusManager : NSObject <PXAssetImportStatusManager> {
    NSHashTable *_statusObservers;
    NSMutableDictionary *_simulatedStateByAssetID;
}

@property (readonly, nonatomic) char supportsStateSimulation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addAssetImportStatusObserver:(id)a0;
- (long long)importStateForAsset:(id)a0;
- (void)removeAssetImportStatusObserver:(id)a0;
- (void)_notifySimulationObserversForAssetReference:(id)a0;
- (long long)_simulatedStateForAsset:(id)a0;
- (void)beginSimulatedImportForAssetReference:(id)a0;
- (void)completeSimulatedImportForAssetReference:(id)a0 withSuccess:(char)a1;
- (id)initAllowingSimulation:(char)a0;

@end
