@interface CARPFObjectObserver : CARPFObject

@property (readonly) unsigned long long cachedHash;
@property (readonly, weak) id observedObject;
@property (copy) id /* block */ deallocationBlock;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (void)_stopObserving;
- (void)_startObserving;
- (id)initWithObservedObject:(id)a0;

@end
