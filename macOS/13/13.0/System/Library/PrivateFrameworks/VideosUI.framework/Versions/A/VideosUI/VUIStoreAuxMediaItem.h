@class NSNumber, NSString, NSDictionary, NSURL, TVPPlayer, NSError, NSObject;

@interface VUIStoreAuxMediaItem : VUIBaseMediaItem <TVPContentKeyLoading, TVPMediaItemReporting, TVPMediaItemReportingDelegate>

@property (class, readonly, nonatomic) NSString *mediaUserAgent;

@property (copy, nonatomic) NSURL *url;
@property (retain, nonatomic) TVPPlayer *scrubPlayer;
@property (retain, nonatomic) NSError *fpsKeyError;
@property (retain, nonatomic) NSObject *parentReportingToken;
@property (nonatomic) long long playbackType;
@property (nonatomic) BOOL isHLS;
@property (copy, nonatomic) NSURL *streamingOverrideURLForDownload;
@property (copy, nonatomic) NSURL *fpsCertificateURL;
@property (copy, nonatomic) NSURL *fpsKeyServerURL;
@property (copy, nonatomic) NSDictionary *fpsAdditionalServerParams;
@property (nonatomic) BOOL isAudioOnly;
@property (copy, nonatomic) NSString *bookmarkID;
@property (copy, nonatomic) NSNumber *bookmarkOverrideTime;
@property (nonatomic) BOOL disableResumeMenu;
@property (nonatomic) BOOL disableScrubbing;
@property (nonatomic) BOOL isiTunesPurchasedOrRentedContent;
@property (nonatomic) BOOL ignoreExistingOfflineKeyData;
@property (nonatomic) BOOL isFamilySharingContent;
@property (nonatomic) BOOL isLiveContent;
@property (nonatomic) BOOL isSportingEvent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)reportingDelegate;
- (id)mediaItemURL;
- (BOOL)isEqualToMediaItem:(id)a0;
- (BOOL)hasTrait:(id)a0;
- (void)prepareForLoadingWithCompletion:(id /* block */)a0;
- (void)mediaItem:(id)a0 didChangeFromPlaybackState:(id)a1 toPlaybackState:(id)a2 updatedRate:(double)a3 player:(id)a4;
- (id)replacementErrorForPlaybackError:(id)a0;
- (void)mediaItem:(id)a0 errorDidOccur:(id)a1 player:(id)a2;
- (void)updateBookmarkWithSuggestedTime:(double)a0 forElapsedTime:(double)a1 duration:(double)a2 playbackOfMediaItemIsEnding:(BOOL)a3;
- (id)mediaItemMetadataForProperty:(id)a0;
- (void)setMediaItemMetadata:(id)a0 forProperty:(id)a1;
- (void)cleanUpMediaItem;
- (void)loadFairPlayStreamingKeyRequests:(id)a0;
- (void)loadFairPlayStreamingKeyRequests:(id)a0 completion:(id /* block */)a1;
- (void)_scrubPlayerItemDidLoad:(id)a0;
- (void)resetReportingEventCollection;
- (id)_replacementErrorForPlaybackError:(id)a0;
- (id)_replacementErrorForITunesPlaybackError:(id)a0;

@end
