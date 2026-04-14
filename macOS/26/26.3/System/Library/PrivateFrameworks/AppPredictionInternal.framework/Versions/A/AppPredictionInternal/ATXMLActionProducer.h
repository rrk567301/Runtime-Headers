@class NSString;

@interface ATXMLActionProducer : NSObject {
    NSString *_cacheBasePath;
}

+ (id)predictionChunksForActionResults:(id)a0;
+ (id)consumerSubTypesToUpdate;

- (id)consumerSubTypesToInvalidateForTTL:(double)a0 disabledConsumerSubTypes:(id)a1 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(BOOL)a2;
- (BOOL)writeCacheIfNotExistsForConsumerSubType:(unsigned char)a0;
- (void)updateBlendingLayerForConsumerSubType:(unsigned char)a0;
- (id)lockscreenActionsFromPredictions:(id)a0;
- (id)init;
- (void)updateBlendingLayerForHomeScreen;
- (void)updateBlendingLayerForLockscreen;
- (void)updateBlendingLayerForWatchAppSettings;
- (void)updateBlendingLayerForSettings;
- (void).cxx_destruct;
- (void)updateBlendingLayerForAllConsumerSubTypes;
- (void)updateBlendingLayerForSpotlight;
- (id)_getActionsFromCacheForConsumerSubType:(unsigned char)a0 cacheFileData:(id)a1;
- (id)_cachePathForConsumerSubtype:(unsigned char)a0;
- (id)produceActions;
- (void)invalidateCacheForConsumerSubTypes:(id)a0 featureCache:(id)a1;
- (void)readCacheAndSendFilteredResultsToBlendingForConsumerSubType:(unsigned char)a0;
- (BOOL)_writeIntermediateCacheForConsumerSubType:(unsigned char)a0 actionPredictionCandidates:(id)a1 remainingPredictionItems:(void *)a2;
- (void)invalidateCacheForConsumerSubType:(unsigned char)a0 actionPredictionCandidates:(id)a1 remainingPredictionItems:(struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct { struct ATXPredictionItem *x0; } x2; })a2;

@end
