@class ICRequestContext, NSString, AVAssetResourceLoadingRequest, NSURL, NSData, NSNumber, AVContentKeyRequest;

@interface ICSecureKeyDeliveryRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSURL *certificateURL;
@property (copy, nonatomic) NSString *contentURI;
@property (copy, nonatomic) NSURL *keyServerURL;
@property (nonatomic) long long leaseActionType;
@property (copy, nonatomic) ICRequestContext *requestContext;
@property (nonatomic) long long rentalID;
@property (nonatomic) char skippedRentalCheckout;
@property (nonatomic, getter=isITunesStoreRequest) char ITunesStoreRequest;
@property (nonatomic) long long qualityOfService;
@property (copy, nonatomic) id /* block */ serverPlaybackContextDataCreationHandler;
@property (copy, nonatomic) id /* block */ asyncServerPlaybackContextDataCreationHandler;
@property (nonatomic) char shouldIncludeDeviceGUID;
@property (nonatomic) long long requestProtocolType;
@property (nonatomic) char isOfflineDownload;
@property (copy, nonatomic) NSNumber *adamID;
@property (copy, nonatomic) NSNumber *accountDSID;
@property (readonly, copy, nonatomic) NSData *serverPlaybackContextData;
@property (readonly, retain, nonatomic) AVAssetResourceLoadingRequest *resourceLoadingRequest;
@property (readonly, retain, nonatomic) AVContentKeyRequest *contentKeyRequest;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithRequestContext:(id)a0;
- (void)performWithResponseHandler:(id /* block */)a0;
- (id)initWithRequestContext:(id)a0 contentKeyRequest:(id)a1;
- (id)initWithRequestContext:(id)a0 resourceLoadingRequest:(id)a1;
- (id)initWithRequestContext:(id)a0 serverPlaybackContextData:(id)a1;

@end
