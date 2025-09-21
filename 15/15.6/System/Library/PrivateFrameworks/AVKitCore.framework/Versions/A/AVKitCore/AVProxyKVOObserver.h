@class NSString, NSSet;

@interface AVProxyKVOObserver : NSObject {
    id _retainedObservedObject;
    id _unsafeUnretainedObservedObject;
    char _canHandleChanges;
}

@property (readonly, nonatomic) NSString *token;
@property (readonly, nonatomic) char includeInitialValue;
@property (readonly, nonatomic) char includeChanges;
@property (readonly, nonatomic) NSSet *keyPaths;
@property (readonly, nonatomic) id /* block */ changesBlock;

- (void).cxx_destruct;
- (void)stopObserving;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_handleValueChangeForKeyPath:(id)a0 ofObject:(id)a1 oldValue:(id)a2 newValue:(id)a3 context:(void *)a4;
- (id)initWithObservedObject:(id)a0 observer:(id)a1 keyPaths:(id)a2 retainingObservedObject:(char)a3 includeInitialValue:(char)a4 includeChanges:(char)a5 changesBlock:(id /* block */)a6;
- (void)startObserving:(id)a0 completion:(id /* block */)a1;

@end
