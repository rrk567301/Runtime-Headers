@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PHContentEditingInputRequestOptions : NSObject <PHMediaRequestThreadingOptions>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char shouldForceOriginalChoice;
@property (nonatomic) char disallowFallbackAdjustmentBase;
@property (nonatomic) struct CGSize { double width; double height; } targetSize;
@property (nonatomic) long long contentMode;
@property (nonatomic) char dontAllowRAW;
@property (copy, nonatomic) id /* block */ canHandleRAW;
@property (nonatomic) unsigned long long originalChoice;
@property (nonatomic) char forceRunAsUnadjustedAsset;
@property (nonatomic) char forceReturnFullLivePhoto;
@property (nonatomic) char forcePrepareCurrentBaseVersionInAddition;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue;
@property (nonatomic) char loadResourcesToFlip;
@property (nonatomic) char skipDisplaySizeImage;
@property (nonatomic) char skipLivePhotoImageAndAVAsset;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) char requireOriginalsDownloaded;
@property (copy, nonatomic) id /* block */ canHandleAdjustmentData;
@property (nonatomic, getter=isNetworkAccessAllowed) char networkAccessAllowed;
@property (copy, nonatomic) id /* block */ progressHandler;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (char)isSynchronous;

@end
