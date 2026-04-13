@class NSMutableDictionary;

@interface ASDBagKeySetAggregator : NSObject {
    NSMutableDictionary *_bagKeySets;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)hasBagKeySetForConsumer:(Class)a0;
- (void)addBagKeySet:(id)a0 forConsumer:(Class)a1;
- (id)generateAggregatedBagKeySet;

@end
