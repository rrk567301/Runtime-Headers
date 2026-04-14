@class NSMutableArray, MAAutoAsset;

@interface TRIMAProvidingGuardedData : NSObject {
    BOOL didDeferDuringMADownload;
    BOOL deferralHandlerInvalid;
    NSMutableArray *fetchSemaphores;
    BOOL cancelReceived;
    MAAutoAsset *currentAsset;
}

- (id)description;
- (void).cxx_destruct;

@end
