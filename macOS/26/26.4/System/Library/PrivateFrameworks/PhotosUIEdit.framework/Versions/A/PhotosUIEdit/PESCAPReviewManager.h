@class NSMutableDictionary;

@interface PESCAPReviewManager : NSObject {
    NSMutableDictionary *_assetsMap;
}

@property (class, readonly, nonatomic) PESCAPReviewManager *sharedReviewManager;

- (void).cxx_destruct;
- (id)init;
- (void)clearAll;
- (id)lastPasteBreadcrumb;
- (id)payloadForAsset:(id)a0;
- (void)registerPayload:(id)a0 forAsset:(id)a1;

@end
