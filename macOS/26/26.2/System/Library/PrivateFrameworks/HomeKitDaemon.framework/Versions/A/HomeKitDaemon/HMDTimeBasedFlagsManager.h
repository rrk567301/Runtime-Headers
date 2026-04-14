@class NSSet, NSMutableDictionary, NSString, HMDPersistentStore, HMMDateProvider, NSObject;
@protocol HMDTimeBasedFlagsStoring, OS_dispatch_queue;

@interface HMDTimeBasedFlagsManager : HMFObject <HMDTimeBasedFlagContext> {
    HMDPersistentStore *_persistentStore;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) NSSet *allowedSpecifierClasses;

@property (retain) HMMDateProvider *dateProvider;
@property (retain, nonatomic) NSMutableDictionary *flags;
@property (readonly) id<HMDTimeBasedFlagsStoring> flagsStorage;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)forceSave;
- (void)_save;
- (id)newFlagForPeriodicity:(long long)a0;
- (void)flagChanged;
- (id)flagForName:(id)a0 periodicity:(long long)a1;
- (void).cxx_destruct;
- (id)unarchiveLegacyFlags;
- (id)initWithStorage:(id)a0 dateProvider:(id)a1;
- (id)initWithDateProvider:(id)a0;
- (id)unarchiveFlags;
- (id)_fetchAllFlags;
- (id)flagForName:(id)a0 homeUUID:(id)a1 periodicity:(long long)a2;
- (id)flagForSpecifier:(id)a0 periodicity:(long long)a1;

@end
