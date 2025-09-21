@class NSString;

@interface PHLivePhotoRequestOptions : NSObject <PHMediaRequestThreadingOptions, PHMediaRequestLiveRenderingOptions, NSCopying>

@property (readonly, copy, nonatomic) id /* block */ progressHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char liveRenderVideoIfNeeded;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) long long downloadPriority;
@property (nonatomic) char includeImage;
@property (nonatomic) char preferHDR;
@property (nonatomic) long long version;
@property (nonatomic) long long deliveryMode;
@property (nonatomic, getter=isNetworkAccessAllowed) char networkAccessAllowed;
@property (copy, nonatomic) id /* block */ progressHandler;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (char)isSynchronous;
- (char)isCurrentVersion;
- (char)liveRenderAndOnDemandRenderVideoConcurrently;
- (id)renderResultHandlerQueue;
- (id)resultHandlerQueue;

@end
