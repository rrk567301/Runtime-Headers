@interface HMFObjectObserver : HMFObject

@property (readonly) unsigned long long cachedHash;
@property (readonly, weak) id observedObject;
@property (copy) id /* block */ deallocationBlock;

- (void)dealloc;
- (id)init;
- (void)_startObserving;
- (void)_stopObserving;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithObservedObject:(id)a0;

@end
