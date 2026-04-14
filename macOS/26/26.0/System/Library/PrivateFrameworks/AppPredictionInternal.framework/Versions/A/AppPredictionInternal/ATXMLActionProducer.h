@class NSString;

@interface ATXMLActionProducer : NSObject {
    NSString *_cacheBasePath;
}

+ (id)consumerSubTypesToUpdate;
+ (id)predictionChunksForActionResults:(id)a0;

- (void)updateBlendingLayerForConsumerSubType:(unsigned char)a0;
- (void)updateBlendingLayerForSettings;
- (id)lockscreenActionsFromPredictions:(id)a0;
- (id)_cachePathForConsumerSubtype:(unsigned char)a0;
- (id)consumerSubTypesToInvalidateForTTL:(double)a0 disabledConsumerSubTypes:(id)a1 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(BOOL)a2;
- (BOOL)writeCacheIfNotExistsForConsumerSubType:(unsigned char)a0;
- (id)_getActionsFromCacheForConsumerSubType:(unsigned char)a0 cacheFileData:(id)a1;
- (void)invalidateCacheForConsumerSubTypes:(id)a0 featureCache:(id)a1;
- (void)updateBlendingLayerForSpotlight;
- (id)produceActions;
- (id)init;
- (void)updateBlendingLayerForLockscreen;
- (void)updateBlendingLayerForWatchAppSettings;
- (void)updateBlendingLayerForHomeScreen;
- (void)readCacheAndSendFilteredResultsToBlendingForConsumerSubType:(unsigned char)a0;
- (void).cxx_destruct;
- (void)invalidateCacheForConsumerSubType:(unsigned char)a0 actionPredictionCandidates:(id)a1 remainingPredictionItems:(struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct ATXPredictionItem *x2; })a2;
- (BOOL)_writeIntermediateCacheForConsumerSubType:(unsigned char)a0 actionPredictionCandidates:(id)a1 remainingPredictionItems:(void *)a2;
- (void)updateBlendingLayerForAllConsumerSubTypes;

@end
