@class NSString;

@interface HMFKeyValueBlockObserver : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _valid;
    char _observing;
}

@property (readonly, copy) NSString *keyPath;
@property (readonly, weak) id observedObject;
@property (readonly) unsigned long long options;
@property (copy) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)logIdentifier;
- (id)initWithKeyPath:(id)a0 object:(id)a1 options:(unsigned long long)a2;
- (char)__invalidate;
- (id)initWithKeyPath:(id)a0 object:(id)a1;

@end
