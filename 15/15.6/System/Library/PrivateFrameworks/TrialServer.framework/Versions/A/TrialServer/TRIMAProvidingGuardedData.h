@class NSMutableArray, TRIMAAutoAsset;

@interface TRIMAProvidingGuardedData : NSObject {
    char didDeferDuringMADownload;
    char deferralHandlerInvalid;
    NSMutableArray *fetchSemaphores;
    char cancelReceived;
    TRIMAAutoAsset *currentAsset;
}

- (id)description;
- (void).cxx_destruct;

@end
