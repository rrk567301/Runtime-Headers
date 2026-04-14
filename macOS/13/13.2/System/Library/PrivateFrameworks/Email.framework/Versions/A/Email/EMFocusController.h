@class EMFocus, NSHashTable;
@protocol EFAssertableScheduler, EFCancelable;

@interface EMFocusController : NSObject {
    NSHashTable *_observers;
    id<EFAssertableScheduler> _observationScheduler;
    id<EFCancelable> _observationToken;
    EMFocus *_currentFocus;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

+ (id)updatedPredicateForFocus:(id)a0 currentPredicate:(id)a1 usingAccountRepository:(id)a2;
+ (id)predicateForFocus:(id)a0 usingAccountRepository:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)getCurrentFocus:(id /* block */)a0;
- (void)_focusModeChanged;
- (id)addObserver:(id)a0 currentFocus:(id *)a1;
- (id)_currentFocusedAccountIdentifiers;

@end
