@class NSIndexSet, NSData;

@interface ATXActionCacheClientReader : NSObject {
    NSData *_scoredActionsChunk;
}

@property (readonly, nonatomic) NSIndexSet *lockscreenPredictionIndices;

- (id)actionsWithLimit:(long long)a0 shouldFilterRestrictedAppsAndRecentEngagements:(BOOL)a1;
- (id)initWithData:(id)a0;
- (id)actionsWithConsumerSubType:(unsigned char)a0 limit:(long long)a1;
- (unsigned long long)chunkCount;
- (id)_predicateForInstalledAndNonEngagedPredictions:(id)a0;
- (id)init;
- (id)initWithChunks:(id)a0;
- (id)_getLockScreenPredictionIndices:(id)a0;
- (id)lockscreenPredictionIndicesUpToLimit:(long long)a0;
- (void).cxx_destruct;

@end
