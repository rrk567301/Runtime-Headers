@interface PXLivePhotoRequestOptions : NSObject <NSCopying>

@property (nonatomic) long long deliveryMode;
@property (nonatomic, getter=isNetworkAccessAllowed) char networkAccessAllowed;
@property (nonatomic) long long downloadPriority;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) char preferHDR;
@property (copy, nonatomic) id /* block */ progressHandler;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)photoKitRequestOptions;

@end
