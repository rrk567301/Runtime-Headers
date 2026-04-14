@interface HDWorkoutAssertionManager : NSObject <HDAssertionObserver> {
    void /* unknown type, empty encoding */ assertionManager;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ rbsAssertionsByIdentifier;
}

- (id)takeRBSAssertionWithOwnerIdentifier:(id)a0 assertionIdentifier:(id)a1 pid:(int)a2 explanation:(id)a3;
- (id)takeLiveActivityAssertionWithOwnerIdentifier:(id)a0 clientBundleIdentifier:(id)a1 explanation:(id)a2;
- (void).cxx_destruct;
- (void)assertionManager:(id)a0 assertionInvalidated:(id)a1;
- (id)init;
- (void)dealloc;
- (id)makeRBSAssertionWithAssertionIdentifier:(id)a0 pid:(int)a1 explanation:(id)a2;

@end
