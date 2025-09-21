@class PHMediaResourceResult, NSString, PHAssetResourceRequest, PHAssetResource, NSMutableData;

@interface PHMediaResourceRequest : PHMediaRequest <PHAssetResourceRequestDelegate> {
    char _networkAccessAllowed;
    long long _downloadIntent;
    long long _downloadPriority;
    char _synchronous;
    PHAssetResourceRequest *_internalRequest;
    NSMutableData *_compositeData;
    PHMediaResourceResult *_dataResult;
}

@property (copy, nonatomic) id /* block */ progressHandler;
@property (readonly, nonatomic) PHAssetResource *resource;
@property (readonly, nonatomic) long long resourceType;
@property (readonly, nonatomic) char wantsURLOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)cancel;
- (char)isSynchronous;
- (void)_finishWithError:(id)a0;
- (void)startRequest;
- (void)_handleDidFindFileURL:(id)a0;
- (void)_receiveAssetResourceDataPart:(id)a0;
- (void)_reportProgress:(double)a0;
- (void)assetResourceRequest:(id)a0 didFinishWithError:(id)a1;
- (void)handleAvailabilityChangeForResource:(id)a0 url:(id)a1 info:(id)a2 error:(id)a3;
- (id)initWithRequestID:(int)a0 requestIndex:(unsigned long long)a1 contextType:(long long)a2 managerID:(unsigned long long)a3 asset:(id)a4 assetResource:(id)a5 networkAccessAllowed:(char)a6 downloadIntent:(long long)a7 downloadPriority:(long long)a8 wantsURLOnly:(char)a9 synchronous:(char)a10 delegate:(id)a11;
- (char)retryAssetResourceRequest:(id)a0 afterFailureWithError:(id)a1;

@end
