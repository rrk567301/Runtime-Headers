@class LPVideoProperties, NSString, NSURL, NSItemProvider, AVURLAsset, NSObject, AVAsset;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface LPVideo : LPVisualMedia <AVAssetResourceLoaderDelegate, LPAsynchronousResource, NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_mediaLoadingQueue;
    NSItemProvider *_itemProvider;
    LPVideo *_videoLoadedFromItemProvider;
    NSObject<OS_dispatch_group> *_itemProviderLoadGroup;
    struct CGSize { double width; double height; } _intrinsicSize;
    char _startedFetchingIntrinsicSize;
    AVURLAsset *_asset;
    id _mediaServicesResetNotificationHandler;
}

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) AVAsset *_asset;
@property (readonly, retain, nonatomic) NSItemProvider *_itemProvider;
@property (readonly, retain, nonatomic) NSURL *streamingURL;
@property (readonly, retain, nonatomic) NSURL *youTubeURL;
@property (readonly, nonatomic) char hasAudio;
@property (readonly, copy, nonatomic) LPVideoProperties *properties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setFileURL:(id)a0;
- (char)resourceLoader:(id)a0 shouldWaitForLoadingOfRequestedResource:(id)a1;
- (id)initWithData:(id)a0 MIMEType:(id)a1 hasAudio:(char)a2;
- (id)_initWithVideo:(id)a0;
- (char)_canEncodeWithoutComputation;
- (struct CGSize { double x0; double x1; })_intrinsicSizeIfKnown;
- (void)_intrinsicSizeWithCompletionHandler:(id /* block */)a0;
- (char)_isSubstitute;
- (char)hasPlaceholderValueForAsynchronousLoad;
- (id)initByReferencingFileURL:(id)a0 MIMEType:(id)a1 hasAudio:(char)a2;
- (id)initByReferencingFileURL:(id)a0 MIMEType:(id)a1 properties:(id)a2;
- (id)initWithData:(id)a0 MIMEType:(id)a1 properties:(id)a2;
- (id)initWithItemProvider:(id)a0 properties:(id)a1;
- (id)initWithStreamingURL:(id)a0 hasAudio:(char)a1;
- (id)initWithStreamingURL:(id)a0 properties:(id)a1;
- (id)initWithYouTubeURL:(id)a0;
- (id)initWithYouTubeURL:(id)a0 properties:(id)a1;
- (void)loadAsynchronouslyWithCompletionHandler:(id /* block */)a0;
- (char)needsAsynchronousLoad;

@end
