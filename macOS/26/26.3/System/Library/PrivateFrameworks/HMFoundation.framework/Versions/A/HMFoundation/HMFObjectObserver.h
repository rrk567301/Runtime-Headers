@interface HMFObjectObserver : HMFObject

@property (readonly) unsigned long long cachedHash;
@property (readonly, weak) id observedObject;
@property (copy) id /* block */ deallocationBlock;

- (void)_startObserving;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_stopObserving;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithObservedObject:(id)a0;

@end
