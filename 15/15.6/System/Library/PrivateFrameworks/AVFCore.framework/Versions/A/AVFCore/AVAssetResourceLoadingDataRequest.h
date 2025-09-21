@class AVAssetResourceLoadingDataRequestInternal;

@interface AVAssetResourceLoadingDataRequest : NSObject {
    AVAssetResourceLoadingDataRequestInternal *_dataRequest;
}

@property (readonly, nonatomic) long long requestedOffset;
@property (readonly, nonatomic) long long requestedLength;
@property (readonly, nonatomic) char requestsAllDataToEndOfResource;
@property (readonly, nonatomic) long long currentOffset;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)_loadingRequest;
- (struct __CFDictionary { } *)_requestInfo;
- (id)initWithLoadingRequest:(id)a0 requestedOffset:(long long)a1 requestedLength:(long long)a2 requestsAllDataToEndOfResource:(char)a3 canSupplyIncrementalDataImmediately:(char)a4;
- (void)respondWithData:(id)a0;

@end
