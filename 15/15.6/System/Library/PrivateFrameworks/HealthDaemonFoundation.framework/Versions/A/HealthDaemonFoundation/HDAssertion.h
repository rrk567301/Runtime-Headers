@class NSUUID, NSString, HDAssertionManager;

@interface HDAssertion : NSObject {
    HDAssertionManager *_manager;
    long long _state;
    double _remainingBudget;
    double _budgetIntervalStartTime;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) long long rawState;
@property (readonly, copy, nonatomic) NSUUID *UUID;
@property (readonly, copy, nonatomic) NSString *assertionIdentifier;
@property (readonly, copy, nonatomic) NSString *ownerIdentifier;
@property (readonly) long long state;
@property (nonatomic) double budget;
@property (readonly) double remainingBudget;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_lock_description;
- (id)cloneWithOwnerIdentifier:(id)a0;
- (id)initWithAssertionIdentifier:(id)a0 ownerIdentifier:(id)a1;
- (id)_lock_cloneWithOwnerIdentifier:(id)a0;
- (char)_consumeFromBudgetThroughTime:(double)a0;
- (void)_invalidateAndRelease:(char)a0;
- (long long)_lock_consumeBudgetThroughTime:(double)a0 error:(id *)a1;
- (double)_lock_remainingBudget;
- (char)_lock_setBudget:(double)a0 error:(id *)a1;
- (id)_lock_setBudgetIntervalStartTime:(double)a0;
- (long long)_lock_state;
- (void)_setBudgetIntervalStartTime:(double)a0;
- (long long)_takeWithManager:(id)a0;

@end
