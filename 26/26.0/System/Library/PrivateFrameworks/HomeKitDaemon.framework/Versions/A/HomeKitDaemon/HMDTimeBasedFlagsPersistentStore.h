@protocol HMDPersistentStore;

@interface HMDTimeBasedFlagsPersistentStore : NSObject <HMDTimeBasedFlagsStoring>

@property (readonly, weak, nonatomic) id<HMDPersistentStore> persistentStore;

- (id)unarchiveLegacyEventFlags;
- (id)unarchive;
- (id)initWithPersistentStore:(id)a0;
- (void)archiveDictionary:(id)a0;
- (void).cxx_destruct;

@end
