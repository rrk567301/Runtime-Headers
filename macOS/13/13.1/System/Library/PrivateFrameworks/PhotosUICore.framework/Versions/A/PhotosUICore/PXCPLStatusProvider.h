@class NSString, PXCPLSharedLibraryActivity, PXCPLPhotoLibraryMonitor, PXCPLStatus, PXFetchResultCountObserver, PXCPLSyncActivity, NSObject, CPLStatus, NSProgress, PHPhotoLibrary, PLPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PXCPLStatusProvider : PXObservable <CPLStatusDelegate, PXFetchResultCountObserverDelegate, PXChangeObserver, PXCPLStatusProvider> {
    NSObject<OS_dispatch_queue> *_serialUpdateQueue;
    CPLStatus *_cplStatus;
    PXCPLPhotoLibraryMonitor *_photoLibraryMonitor;
    PXCPLSyncActivity *_syncActivity;
    PXCPLSharedLibraryActivity *_sharedLibraryActivity;
    unsigned long long _syncProgressState;
    id _syncProgressSubscriber;
    NSProgress *_syncProgress;
    PXFetchResultCountObserver *_numberOfReferencedItemsObserver;
    unsigned long long _numberOfReferencedItems;
    BOOL _hasCloudQuotaOffer;
    BOOL _cloudQuotaOfferHasAssetCounts;
    PHPhotoLibrary *_ph_photoLibrary;
    PLPhotoLibrary *_pl_photoLibrary;
    unsigned long long _needsUpdate;
    double _lastUpdate;
    BOOL _isUpdating;
}

@property (class, readonly) PXCPLStatusProvider *currentStatusProvider;

@property (readonly, nonatomic) BOOL isSystemPhotoLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXCPLStatus *status;

- (id)init;
- (void).cxx_destruct;
- (void)statusDidChange:(id)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)fetchResultCountObserver:(id)a0 didChangeFetchResultCount:(long long)a1;
- (double)nextOverrideResumeTimeInterval;
- (id)_initWithInitialUpdateType:(unsigned long long)a0 isSynchronous:(BOOL)a1;
- (id)_initWithInitialSynchronousUpdateType:(unsigned long long)a0;
- (void)_setStatus:(id)a0 producedForUpdateType:(unsigned long long)a1;
- (id)_updateStatus:(id)a0 requestedTypes:(unsigned long long)a1;
- (void)_performUpdate;
- (void)_schedulePendingUpdates;
- (void)_scheduleUpdateForType:(unsigned long long)a0;

@end
