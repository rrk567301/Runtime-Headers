@class MRGroupSessionEligibilityStatus, NSHashTable;

@interface MRGroupSessionEligibilityMonitor : NSObject

@property (retain, nonatomic) NSHashTable *observers;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly, nonatomic) MRGroupSessionEligibilityStatus *status;

- (void)removeObserver:(id)a0;
- (id)init;
- (void)addObserver:(id)a0;
- (void).cxx_destruct;
- (void)updateStatus:(id)a0;
- (void)registerNotifications;

@end
