@class NSString, NSMutableArray, NSError;

@interface _EFManualObservable : EFObservable <EFObserver> {
    NSMutableArray *_observers;
    NSError *_failureError;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    char _didCompleteOrFail;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_removeObserver:(id)a0;
- (id)subscribe:(id)a0;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)a0;
- (void)observerDidReceiveResult:(id)a0;
- (char)_addObserver:(id)a0 failureError:(id *)a1;

@end
