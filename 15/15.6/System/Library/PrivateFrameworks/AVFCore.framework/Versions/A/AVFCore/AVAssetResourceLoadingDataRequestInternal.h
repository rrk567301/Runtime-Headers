@class AVWeakReference, NSObject;
@protocol OS_dispatch_queue;

@interface AVAssetResourceLoadingDataRequestInternal : NSObject {
    long long requestedOffset;
    long long requestedLength;
    long long currentOffset;
    NSObject<OS_dispatch_queue> *dataResponseQueue;
    char requestsAllDataToEndOfResource;
    char canSupplyIncrementalDataImmediately;
    AVWeakReference *weakReferenceToLoadingRequest;
}

@end
