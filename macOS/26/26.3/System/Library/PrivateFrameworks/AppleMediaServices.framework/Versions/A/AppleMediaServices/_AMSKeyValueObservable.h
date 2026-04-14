@class NSString, NSObject;

@interface _AMSKeyValueObservable : AMSObservable

@property (retain) NSObject *context;
@property (copy) NSString *keyPath;
@property (weak) NSObject *object;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)cancel;
- (id)initWithObject:(id)a0 keyPath:(id)a1 options:(unsigned long long)a2;
- (void).cxx_destruct;
- (BOOL)sendCompletion;

@end
