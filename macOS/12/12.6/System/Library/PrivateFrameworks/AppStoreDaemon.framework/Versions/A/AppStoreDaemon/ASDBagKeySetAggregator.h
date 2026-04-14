@class NSMutableDictionary;

@interface ASDBagKeySetAggregator : NSObject {
    NSMutableDictionary *_bagKeySets;
}

- (id)init;
- (void).cxx_destruct;
- (void)addBagKeySet:(id)a0 forConsumer:(Class)a1;
- (id)generateAggregatedBagKeySet;
- (BOOL)hasBagKeySetForConsumer:(Class)a0;

@end
