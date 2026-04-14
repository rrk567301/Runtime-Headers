@interface HMFObjectObserver : HMFObject

@property (readonly) unsigned long long cachedHash;
@property (readonly, weak) id observedObject;
@property (copy) id /* block */ deallocationBlock;

- (void)_startObserving;
- (BOOL)isEqual:(id)a0;
- (void)_stopObserving;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (void)dealloc;
- (id)initWithObservedObject:(id)a0;

@end
