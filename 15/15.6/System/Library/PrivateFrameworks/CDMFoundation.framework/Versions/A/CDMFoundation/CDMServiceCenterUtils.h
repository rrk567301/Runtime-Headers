@interface CDMServiceCenterUtils : NSObject

+ (id)getAvailableServiceGraphs:(id)a0;
+ (unsigned int)getServiceCenterQueueQOS;
+ (char)isHostedInDaemon;
+ (char)isServiceCenterEnabled:(id)a0;
+ (char)needEmbeddingConfigsFor:(id)a0;
+ (id)tryInitDAGServices:(id)a0;

@end
