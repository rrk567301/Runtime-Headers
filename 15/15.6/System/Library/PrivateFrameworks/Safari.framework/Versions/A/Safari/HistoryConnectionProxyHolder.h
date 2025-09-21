@interface HistoryConnectionProxyHolder : NSObject

@property (class, readonly) char isHoldingProxy;

+ (id)sharedProxy;
+ (void)storeAndPreWarmProxy:(id)a0;

@end
