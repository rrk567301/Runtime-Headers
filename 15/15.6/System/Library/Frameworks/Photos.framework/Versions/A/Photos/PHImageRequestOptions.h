@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PHImageRequestOptions : NSObject <PHMediaRequestThreadingOptions, NSCopying> {
    int _requestID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) char cannotReturnSmallerImage;
@property (nonatomic) char ignoreProcessWideRepairLimits;
@property (nonatomic) long long loadingMode;
@property (nonatomic) char allowPlaceholder;
@property (nonatomic) char useAsyncForFastOpportunisticResult;
@property (nonatomic) char allowSecondaryOpportunisticImage;
@property (nonatomic) long long opportunisticDegradedImagesToReturn;
@property (nonatomic) char includeHDRGainMap;
@property (nonatomic) char includeHDRGainMapInIntermediateImage;
@property (nonatomic) char preferHDR;
@property (nonatomic) double targetHDRHeadroom;
@property (nonatomic) char onlyUseFetchedAssetPropertiesDuringChoosing;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue;
@property (copy, nonatomic) id /* block */ cachingCompleteHandler;
@property (nonatomic) char useLowMemoryMode;
@property (nonatomic) char useLimitedLibraryMode;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) long long downloadPriority;
@property (nonatomic) struct CGSize { double width; double height; } fallbackTargetSizeIfRequestedSizeNotLocallyAvailable;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } videoFrameTime;
@property (nonatomic) char chooseAlchemist;
@property (nonatomic) long long version;
@property (nonatomic) long long deliveryMode;
@property (nonatomic) long long resizeMode;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedCropRect;
@property (nonatomic, getter=isNetworkAccessAllowed) char networkAccessAllowed;
@property (nonatomic, getter=isSynchronous) char synchronous;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (nonatomic) char allowSecondaryDegradedImage;

@end
