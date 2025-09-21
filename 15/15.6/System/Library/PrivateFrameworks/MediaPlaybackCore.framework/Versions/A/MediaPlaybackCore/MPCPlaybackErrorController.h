@class MPAVItem, MPCPlaybackEngine, NSMutableSet, NSString;
@protocol MFQueueItemTranslator, MPCExternalPlaybackRouter;

@interface MPCPlaybackErrorController : NSObject <MFErrorController> {
    char _itemsHavePlayed;
}

@property (weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly, nonatomic) id<MFQueueItemTranslator> translator;
@property (retain, nonatomic) NSMutableSet *failedItemsIdentifiers;
@property (retain, nonatomic) id<MPCExternalPlaybackRouter> externalPlaybackRouter;
@property (retain, nonatomic) MPAVItem *lastItemUsedForErrorResolution;
@property (nonatomic) long long contiguousFailSilentlyResolutionCount;
@property (copy, nonatomic) NSString *preferredFirstContentItemID;
@property (nonatomic) char itemsHavePlayed;

- (void).cxx_destruct;
- (void)resetWithReason:(id)a0;
- (void)_notifyObserversForError:(id)a0 item:(id)a1;
- (void)_playbackFailedWithError:(id)a0 item:(id)a1 canResolve:(char)a2 proposedResolution:(long long)a3 completion:(id /* block */)a4;
- (long long)_resolutionForPlaybackError:(id)a0 item:(id)a1;
- (char)canHandleFirstItemFailure;
- (id)initWithPlaybackEngine:(id)a0 translator:(id)a1 externalPlaybackRouter:(id)a2;
- (char)isAssetUnavailableFailure:(id)a0;
- (char)isFirstItemFailure:(id)a0 item:(id)a1;
- (char)isLeaseTakenError:(id)a0;
- (char)isQueueLoadingFailure:(id)a0;
- (char)isUnrecoverableAssetLoadingError:(id)a0;
- (void)reportCriticalError:(id)a0 forItem:(id)a1;
- (void)resolveError:(id)a0 forItem:(id)a1 completion:(id /* block */)a2;
- (char)shouldHandleFirstItemFailure:(id)a0 item:(id)a1;

@end
