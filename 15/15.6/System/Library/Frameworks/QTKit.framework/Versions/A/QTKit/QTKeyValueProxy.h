@class NSCountedSet, NSMutableDictionary, NSMutableSet;

@interface QTKeyValueProxy : NSObject {
    id _target;
    NSMutableDictionary *_proxiedKeysTriggeredByNonProxiedKeysTable;
    NSMutableSet *_proxiedKeysAnalyzedForTriggers;
    NSCountedSet *_observedProxiedKeys;
}

@property (retain, nonatomic) id target;

+ (char)shouldProxyValueForKey:(id)a0;

- (void)dealloc;
- (id)description;
- (id)forwardingTargetForSelector:(SEL)a0;
- (id)init;
- (void)didChangeValueForKey:(id)a0;
- (void)setTarget:(id)a0;
- (void)setValue:(id)a0 forKey:(id)a1;
- (id)target;
- (void)willChangeValueForKey:(id)a0;
- (id)valueForKey:(id)a0;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (id)QTKeyValueProxyTarget_keyPathsForValuesAffectingValueForKey:(id)a0;
- (void)_clearTriggerKeys;
- (void)_discoverTriggerKeysForKey:(id)a0;

@end
