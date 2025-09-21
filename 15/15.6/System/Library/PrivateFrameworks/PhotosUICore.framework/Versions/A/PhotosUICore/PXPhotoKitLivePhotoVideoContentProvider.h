@class NSString, NSOperationQueue, PXVideoStabilizeOperation, PXPhotoKitLivePhotoVideoContentProviderSpec;

@interface PXPhotoKitLivePhotoVideoContentProvider : PXPhotoKitVideoContentProvider <PXSettingsKeyObserver> {
    PXPhotoKitLivePhotoVideoContentProviderSpec *_spec;
    long long _assetPlaybackStyle;
    PXVideoStabilizeOperation *_stabilizeOperation;
}

@property (class, readonly, nonatomic) NSOperationQueue *postProcessingOperationQueue;

@property (readonly, nonatomic) PXPhotoKitLivePhotoVideoContentProviderSpec *spec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)cancelLoading;
- (void)_handleStabilizeOperationFinishedWithProcessingCompletionHandler:(id /* block */)a0;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1 deliveryStrategies:(id)a2 audioSession:(id)a3 requestURLOnly:(char)a4;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1 deliveryStrategies:(id)a2 audioSession:(id)a3 requestURLOnly:(char)a4 resourceReclamationController:(id)a5;
- (id)initWithAsset:(id)a0 mediaProvider:(id)a1 deliveryStrategies:(id)a2 audioSession:(id)a3 spec:(id)a4 resourceReclamationController:(id)a5;
- (char)needsPostprocessing;
- (void)postprocessPlayerItem:(id)a0 completionHandler:(id /* block */)a1;

@end
