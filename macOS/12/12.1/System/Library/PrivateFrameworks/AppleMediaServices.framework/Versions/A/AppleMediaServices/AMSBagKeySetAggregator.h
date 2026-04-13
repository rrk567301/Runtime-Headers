@class NSMutableDictionary;

@interface AMSBagKeySetAggregator : NSObject

@property (retain) NSMutableDictionary *bagKeySets;

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasBagKeySetForConsumer:(Class)a0;
- (void)addBagKeySet:(id)a0 forConsumer:(Class)a1;
- (id)generateAggregatedBagKeySet;

@end
