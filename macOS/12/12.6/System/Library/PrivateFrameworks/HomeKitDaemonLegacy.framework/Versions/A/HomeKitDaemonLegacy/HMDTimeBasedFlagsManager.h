@class NSObject, NSMutableDictionary, HMDMetricsDateProvider;
@protocol HMDTimeBasedFlagsStoring, OS_dispatch_queue;

@interface HMDTimeBasedFlagsManager : HMFObject <HMDTimeBasedFlagContext> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) HMDMetricsDateProvider *dateProvider;
@property (retain, nonatomic) NSMutableDictionary *flags;
@property (readonly) id<HMDTimeBasedFlagsStoring> flagsStorage;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)_save;
- (void)flagChanged;
- (void)forceSave;
- (id)flagForName:(id)a0 homeUUID:(id)a1 periodicity:(long long)a2;
- (id)flagForName:(id)a0 periodicity:(long long)a1;
- (id)initWithDateProvider:(id)a0;
- (id)initWithStorage:(id)a0 dateProvider:(id)a1;
- (id)unarchiveFlags;
- (id)flagForSpecifier:(id)a0 periodicity:(long long)a1;
- (id)newFlagForPeriodicity:(long long)a0;
- (id)_fetchAllFlags;
- (void)resetAllFlags;

@end
