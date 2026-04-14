@class AVAssetResourceLoadingDataRequestInternal;

@interface AVAssetResourceLoadingDataRequest : NSObject {
    AVAssetResourceLoadingDataRequestInternal *_dataRequest;
}

@property (readonly, nonatomic) long long requestedOffset;
@property (readonly, nonatomic) long long requestedLength;
@property (readonly, nonatomic) BOOL requestsAllDataToEndOfResource;
@property (readonly, nonatomic) long long currentOffset;

- (void)dealloc;
- (id)description;
- (id)init;
- (struct __CFDictionary { } *)_requestInfo;
- (id)initWithLoadingRequest:(id)a0 requestedOffset:(long long)a1 requestedLength:(long long)a2 requestsAllDataToEndOfResource:(BOOL)a3 canSupplyIncrementalDataImmediately:(BOOL)a4;
- (id)_loadingRequest;
- (void)respondWithData:(id)a0;

@end
