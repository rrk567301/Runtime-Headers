@interface CDMServiceCenterUtils : NSObject

+ (id)getAvailableServiceGraphs:(id)a0;
+ (unsigned int)getServiceCenterQueueQOS;
+ (BOOL)isHostedInDaemon;
+ (BOOL)isServiceCenterEnabled:(id)a0;
+ (BOOL)needEmbeddingConfigsForServiceGraph:(id)a0;
+ (BOOL)serviceGraphHasEmbeddingNode:(Class)a0;
+ (id)tryInitDAGServices:(id)a0;

@end
