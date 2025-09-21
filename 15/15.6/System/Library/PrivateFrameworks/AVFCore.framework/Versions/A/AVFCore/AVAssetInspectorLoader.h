@class NSArray, AVWeakReference, NSURL, NSString;

@interface AVAssetInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
    AVWeakReference *_weakReference;
}

@property (readonly, nonatomic, getter=_weakReference) AVWeakReference *weakReference;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic, getter=_figAsset) struct OpaqueFigAsset { } *figAsset;
@property (readonly, nonatomic, getter=_playbackItem) struct OpaqueFigPlaybackItem { } *playbackItem;
@property (readonly, nonatomic, getter=_classForTrackInspectors) Class classForTrackInspectors;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly, nonatomic) NSArray *variants;
@property (readonly, nonatomic) NSString *lyrics;
@property (readonly, nonatomic, getter=isPlayable) char playable;
@property (readonly, nonatomic, getter=isExportable) char exportable;
@property (readonly, nonatomic, getter=isReadable) char readable;
@property (readonly, nonatomic, getter=isComposable) char composable;
@property (readonly, nonatomic, getter=isCompatibleWithSavedPhotosAlbum) char compatibleWithSavedPhotosAlbum;
@property (readonly, nonatomic) NSArray *figChapterGroupInfo;
@property (readonly, nonatomic) NSArray *figChapters;
@property (readonly, nonatomic) NSURL *resolvedURL;
@property (readonly, nonatomic) NSURL *originalNetworkContentURL;
@property (readonly, nonatomic) unsigned long long downloadToken;
@property (readonly, nonatomic) NSArray *contentKeySpecifiersEligibleForPreloading;
@property (readonly, nonatomic) char hasProtectedContent;
@property (readonly, nonatomic, getter=_isStreaming) char streaming;
@property (readonly, nonatomic, getter=_prefersNominalDurations) char prefersNominalDurations;
@property (readonly, nonatomic) long long firstFragmentSequenceNumber;
@property (readonly, nonatomic) long long fragmentCount;
@property (readonly, nonatomic, getter=isAssociatedWithFragmentMinder) char associatedWithFragmentMinder;
@property (nonatomic, getter=_fragmentMindingInterval, setter=_setFragmentMindingInterval:) double fragmentMindingInterval;

+ (void)initialize;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (struct OpaqueFigFormatReader { } *)_copyFormatReader;
- (id)_createAVErrorForError:(id)a0 andFigErrorCode:(int)a1;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)a0;
- (void)_setIsAssociatedWithFragmentMinder:(char)a0;
- (id)assetInspector;
- (void)cancelLoading;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadValuesAsynchronouslyForKeys:(id)a0 keysForCollectionKeys:(id)a1 completionHandler:(id /* block */)a2;
- (long long)statusOfValueForKey:(id)a0 error:(id *)a1;

@end
