@class NSData, NSString, NSURL, NSError, TSUURLTracker, NSSet, NSOperationQueue, TSUSandboxedURL, NSObject;
@protocol OS_dispatch_queue, TSULogContext, TSUURLTrackerDelegate;

@interface TSUURLTrackerFilePresenter : NSObject <NSFilePresenter> {
    TSUURLTracker *_urlTracker;
    id<TSULogContext> _logContext;
    NSObject<OS_dispatch_queue> *_accessQueue;
    _Atomic char _forceEncodingBookmarkData;
    _Atomic char _didFailToForceEncodingBookmarkData;
    NSError *_latestBookmarkError;
    id<TSUURLTrackerDelegate> _delegate;
    _Atomic char _hasStarted;
    _Atomic char _deleted;
    _Atomic char _volumeIsEjectable;
    _Atomic char _volumeIsRemovable;
    _Atomic char _volumeIsLocal;
    _Atomic char _isLikelyOnRemovedMedia;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _propertiesLock;
    TSUSandboxedURL *_sandboxedURL;
    TSUSandboxedURL *_latestSandboxedURLWithAccess;
    NSData *_bookmarkDataIfAvailable;
    NSURL *_volumeURL;
}

@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) char isFilePresenter;
@property (readonly) TSUSandboxedURL *sandboxedURLIfAvailable;
@property (readonly) NSData *bookmarkDataIfAvailable;
@property (readonly) char isLikelyOnExternalStorage;
@property (readonly) char isLikelyOnRemovedMedia;
@property (readonly) char isVolumeKnownToBeEjectable;
@property (readonly) char isVolumeKnownToBeRemovable;
@property (readonly) char isVolumeKnownToBeLocal;
@property (readonly) NSURL *volumeURL;
@property (readonly) char deleted;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)a0;
- (void)presentedItemDidChangeUbiquityAttributes:(id)a0;
- (void)presentedItemDidMoveToURL:(id)a0;
- (void)relinquishPresentedItemToWriter:(id /* block */)a0;
- (void)stop;
- (id)bookmarkDataWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)initWithSandboxedURL:(id)a0 bookmarkData:(id)a1 urlTracker:(id)a2 logContext:(id)a3 delegate:(id)a4;
- (id)p_bookmarkDataWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)p_lastKnownURLFromBookmark:(id)a0;
- (id)p_latestSandboxedURLWithAccess;
- (void)p_notifyURLTrackerPresentedItemContentsDidChange;
- (void)p_notifyURLTrackerPresentedItemDidMoveToURL:(id)a0;
- (void)p_notifyURLTrackerPresentedItemWasDeleted;
- (void)p_presentedItemDidMoveToSandboxedURL:(id)a0;
- (id)p_sandboxedURLIfAvailableLoadingLastKnownURLFromBookmark:(char)a0;
- (id)p_sandboxedURLWithOptions:(unsigned long long)a0 error:(id *)a1;
- (void)p_setBookmarkDataIfAvailable:(id)a0;
- (void)p_setDeleted:(char)a0;
- (void)p_setSandboxedURL:(id)a0;
- (void)p_updateVolumeInfo;
- (void)pauseForEnteringBackground:(char)a0;
- (id)sandboxedURLWithOptions:(unsigned long long)a0 error:(id *)a1;
- (void)startOrResumeForEnteringForeground:(char)a0;

@end
