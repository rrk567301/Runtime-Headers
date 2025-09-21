@class NSArray, RBSProcessMonitor;

@interface BKSApplicationStateMonitor : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    RBSProcessMonitor *_monitor;
    NSArray *_interestedAssertionReasons;
}

@property (copy, nonatomic) id /* block */ handler;
@property (readonly, nonatomic) unsigned int interestedStates;
@property (readonly, copy, nonatomic) NSArray *interestedBundleIDs;
@property (readonly, nonatomic) char elevatedPriority;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)invalidate;
- (unsigned int)applicationStateForApplication:(id)a0;
- (char)_clientSubscribedToThisReasonChange:(id)a0;
- (char)_clientSubscribedToThisStateChange:(id)a0 state:(id)a1 prevState:(id)a2;
- (id)_legacyInfoForProcess:(id)a0;
- (id)_legacyInfoForProcess:(id)a0 state:(id)a1;
- (unsigned int)_legacyStateForProcess:(id)a0 state:(id)a1;
- (id)applicationInfoForApplication:(id)a0;
- (void)applicationInfoForApplication:(id)a0 completion:(id /* block */)a1;
- (id)applicationInfoForPID:(int)a0;
- (void)applicationInfoForPID:(int)a0 completion:(id /* block */)a1;
- (id)bundleInfoValueForKey:(id)a0 PID:(int)a1;
- (id)initWithBundleIDs:(id)a0 states:(unsigned int)a1;
- (id)initWithBundleIDs:(id)a0 states:(unsigned int)a1 elevatedPriority:(char)a2;
- (id)initWithBundleIDs:(id)a0 states:(unsigned int)a1 isUserInteractive:(char)a2;
- (id)initWithEndpoint:(id)a0 bundleIDs:(id)a1 states:(unsigned int)a2 elevatedPriority:(char)a3;
- (void)lock_updateConfiguration;
- (unsigned int)mostElevatedApplicationStateForPID:(int)a0;
- (void)updateInterestedAssertionReasons:(id)a0;
- (void)updateInterestedBundleIDs:(id)a0;
- (void)updateInterestedBundleIDs:(id)a0 states:(unsigned int)a1;
- (void)updateInterestedStates:(unsigned int)a0;

@end
