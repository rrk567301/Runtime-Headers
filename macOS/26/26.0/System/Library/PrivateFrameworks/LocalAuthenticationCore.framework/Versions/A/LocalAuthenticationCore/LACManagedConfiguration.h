@class NSString, NSHashTable;

@interface LACManagedConfiguration : NSObject <LACManagedConfiguration> {
    BOOL _isObserving;
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
}

@property (class, readonly, nonatomic) LACManagedConfiguration *sharedInstance;

@property (readonly, nonatomic) BOOL isPasscodeSet;
@property (readonly, nonatomic) long long passcodeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (void)_startObservingConnection;
- (void)_stopObservingConnection;
- (void)_synchronizedObservers:(id /* block */)a0;

@end
