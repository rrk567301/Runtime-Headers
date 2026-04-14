@interface SASelfLogger : NSObject

- (id)init;
- (void)emitMWTCheckPointWithMwtCheckpoint:(long long)a0 requestId:(id)a1 timeStamp:(unsigned long long)a2;
- (void)emitMWTCheckPointWithMwtCheckpoint:(long long)a0 requestId:(id)a1;
- (void)emitMWTMusicMetadata:(id)a0 requestId:(id)a1;
- (void)emitVMCPUStatsWithStage:(long long)a0 requestId:(id)a1;

@end
