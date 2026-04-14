@class AVAsset, NSString, NSURL, NSError;

@interface PAAVAssetResponse : NSObject <PAAVAssetResponse> {
    unsigned long long _state;
}

@property (readonly) NSURL *assetURL;
@property (readonly) AVAsset *asset;
@property (readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)canceled;
- (BOOL)successful;
- (void)_failRequest:(id)a0 withError:(id)a1;
- (void)fulfillValidatedRequest:(id)a0;

@end
