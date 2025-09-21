@class NSNumber;

@interface PHAssetResourceRequestOptions : NSObject <NSCopying>

@property (nonatomic) char resistentToPrune;
@property (nonatomic) char downloadIsTransient;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) long long downloadPriority;
@property (nonatomic) char pruneAfterAvailableOnLowDisk;
@property (nonatomic) NSNumber *pruneAfterAvailableLowDiskThresholdBytes;
@property (nonatomic, getter=isNetworkAccessAllowed) char networkAccessAllowed;
@property (copy, nonatomic) id /* block */ progressHandler;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
