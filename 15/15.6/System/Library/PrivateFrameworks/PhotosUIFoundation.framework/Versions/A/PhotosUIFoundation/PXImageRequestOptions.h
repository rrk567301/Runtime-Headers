@class NSObject;
@protocol OS_dispatch_queue;

@interface PXImageRequestOptions : NSObject <NSCopying>

@property (nonatomic) long long version;
@property (nonatomic) long long deliveryMode;
@property (nonatomic) long long resizeMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedCropRect;
@property (nonatomic, getter=isNetworkAccessAllowed) char networkAccessAllowed;
@property (nonatomic, getter=isSynchronous) char synchronous;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (nonatomic) char allowSecondaryDegradedImage;
@property (nonatomic) char useAsyncForFastOpportunisticResult;
@property (nonatomic) long long opportunisticDegradedImagesToReturn;
@property (nonatomic) struct CGSize { double width; double height; } fallbackTargetSizeIfRequestedSizeNotLocallyAvailable;
@property (nonatomic) long long loadingMode;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) long long downloadPriority;
@property (nonatomic) char useLowMemoryMode;
@property (nonatomic) char allowPlaceholder;
@property (nonatomic) char preferHDR;
@property (nonatomic) double targetHDRHeadroom;
@property (nonatomic) char includeHDRGainMap;
@property (nonatomic) char chooseAlchemist;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (void)copyPropertiesToOptions:(id)a0;

@end
