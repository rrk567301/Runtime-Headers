@class NSString;

@interface ATXMLActionProducer : NSObject {
    NSString *_cacheBasePath;
}

+ (id)predictionChunksForActionResults:(id)a0;
+ (id)consumerSubTypesToUpdate;

- (void)updateBlendingLayerForAllConsumerSubTypes;
- (id)lockscreenActionsFromPredictions:(id)a0;
- (BOOL)writeCacheIfNotExistsForConsumerSubType:(unsigned char)a0;
- (void)invalidateCacheForConsumerSubType:(unsigned char)a0 actionPredictionCandidates:(id)a1 remainingPredictionItems:(struct vector<ATXPredictionItem, std::allocator<ATXPredictionItem>> { struct ATXPredictionItem *x0; struct ATXPredictionItem *x1; struct ATXPredictionItem *x2; })a2;
- (void)updateBlendingLayerForConsumerSubType:(unsigned char)a0;
- (void)readCacheAndSendFilteredResultsToBlendingForConsumerSubType:(unsigned char)a0;
- (void)updateBlendingLayerForSpotlight;
- (id)_getActionsFromCacheForConsumerSubType:(unsigned char)a0 cacheFileData:(id)a1;
- (void)updateBlendingLayerForWatchAppSettings;
- (id)_cachePathForConsumerSubtype:(unsigned char)a0;
- (id)produceActions;
- (BOOL)_writeIntermediateCacheForConsumerSubType:(unsigned char)a0 actionPredictionCandidates:(id)a1 remainingPredictionItems:(void *)a2;
- (id)consumerSubTypesToInvalidateForTTL:(double)a0 disabledConsumerSubTypes:(id)a1 shouldOverrideRefreshRateForDisabledConsumerSubTypes:(BOOL)a2;
- (void).cxx_destruct;
- (void)updateBlendingLayerForHomeScreen;
- (void)invalidateCacheForConsumerSubTypes:(id)a0 featureCache:(id)a1;
- (void)updateBlendingLayerForLockscreen;
- (id)init;
- (void)updateBlendingLayerForSettings;

@end
