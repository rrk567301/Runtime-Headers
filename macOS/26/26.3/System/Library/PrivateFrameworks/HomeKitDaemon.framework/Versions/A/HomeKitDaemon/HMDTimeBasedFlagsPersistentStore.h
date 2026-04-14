@protocol HMDPersistentStore;

@interface HMDTimeBasedFlagsPersistentStore : NSObject <HMDTimeBasedFlagsStoring>

@property (readonly, weak, nonatomic) id<HMDPersistentStore> persistentStore;

- (id)unarchive;
- (void)archiveDictionary:(id)a0;
- (void).cxx_destruct;
- (id)unarchiveLegacyEventFlags;
- (id)initWithPersistentStore:(id)a0;

@end
