@class NSMutableDictionary;

@interface HMMTRPairingWindowInfoTable : HMFObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSMutableDictionary *table;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)init;
- (void)_clearExpiredEntriesWithCurrentDate:(id)a0;
- (void)registerPairingWindowWithSetupPayload:(id)a0 currentDate:(id)a1 duration:(double)a2 accessoryServer:(id)a3;
- (id)retrieveAccessoryServerForPairingWindowWithSetupPayload:(id)a0 currentDate:(id)a1;

@end
