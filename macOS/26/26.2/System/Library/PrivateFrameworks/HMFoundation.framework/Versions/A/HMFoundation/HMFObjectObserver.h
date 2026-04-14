@interface HMFObjectObserver : HMFObject

@property (readonly) unsigned long long cachedHash;
@property (readonly, weak) id observedObject;
@property (copy) id /* block */ deallocationBlock;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)_stopObserving;
- (id)init;
- (void)_startObserving;
- (void)dealloc;
- (id)initWithObservedObject:(id)a0;

@end
