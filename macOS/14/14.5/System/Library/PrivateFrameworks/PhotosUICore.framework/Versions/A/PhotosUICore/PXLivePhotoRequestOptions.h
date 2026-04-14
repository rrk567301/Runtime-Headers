@interface PXLivePhotoRequestOptions : NSObject <NSCopying>

@property (nonatomic) long long version;
@property (nonatomic) long long deliveryMode;
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) long long downloadPriority;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)photoKitRequestOptions;

@end
