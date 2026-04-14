@protocol HMDPersistentStore;

@interface HMDTimeBasedFlagsPersistentStore : NSObject <HMDTimeBasedFlagsStoring>

@property (readonly, weak, nonatomic) id<HMDPersistentStore> persistentStore;

- (void).cxx_destruct;
- (id)initWithPersistentStore:(id)a0;
- (id)unarchive;
- (void)archiveDictionary:(id)a0;
- (id)unarchiveLegacyEventFlags;

@end
