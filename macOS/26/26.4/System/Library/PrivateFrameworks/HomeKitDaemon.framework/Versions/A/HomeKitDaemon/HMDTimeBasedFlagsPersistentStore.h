@protocol HMDPersistentStore;

@interface HMDTimeBasedFlagsPersistentStore : NSObject <HMDTimeBasedFlagsStoring>

@property (readonly, weak, nonatomic) id<HMDPersistentStore> persistentStore;

- (id)unarchiveLegacyEventFlags;
- (void)archiveDictionary:(id)a0;
- (void).cxx_destruct;
- (id)unarchive;
- (id)initWithPersistentStore:(id)a0;

@end
