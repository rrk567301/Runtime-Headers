@class NSMutableArray, TRIMAAutoAsset;

@interface TRIMAProvidingGuardedData : NSObject {
    BOOL didDeferDuringMADownload;
    BOOL deferralHandlerInvalid;
    NSMutableArray *fetchSemaphores;
    BOOL cancelReceived;
    TRIMAAutoAsset *currentAsset;
}

- (void).cxx_destruct;
- (id)description;

@end
