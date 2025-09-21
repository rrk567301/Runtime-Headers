@class NSObject;
@protocol OS_dispatch_queue;

@interface PXVideoRequestOptions : NSObject <NSCopying>

@property (nonatomic) char includeTimeRangeMapper;
@property (nonatomic, getter=isNetworkAccessAllowed) char networkAccessAllowed;
@property (nonatomic) long long version;
@property (nonatomic) long long deliveryMode;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) char restrictToPlayableOnCurrentDevice;
@property (nonatomic) char restrictToStreamable;
@property (nonatomic) char restrictToEncryptedStream;
@property (nonatomic, getter=isStreamingAllowed) char streamingAllowed;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue;
@property (nonatomic) long long streamingVideoIntent;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) long long downloadPriority;
@property (nonatomic) struct { struct { long long value; int timescale; unsigned int flags; long long epoch; } start; struct { long long value; int timescale; unsigned int flags; long long epoch; } duration; } timeRange;
@property (nonatomic, getter=isMediumHighQualityAllowed) char allowMediumHighQuality;
@property (nonatomic) char liveRenderVideoIfNeeded;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)photoKitRequestOptions;

@end
