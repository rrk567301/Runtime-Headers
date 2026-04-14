@interface HistoryConnectionProxyHolder : NSObject

+ (id)sharedProxy;
+ (void)storeAndPreWarmProxy:(id)a0;

@end
