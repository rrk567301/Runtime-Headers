@protocol HMDPersistentStore;

@interface HMDTimeBasedFlagsPersistentStore : NSObject <HMDTimeBasedFlagsStoring>

@property (readonly, weak, nonatomic) id<HMDPersistentStore> persistentStore;

- (id)unarchiveLegacyEventFlags;
- (void).cxx_destruct;
- (id)initWithPersistentStore:(id)a0;
- (id)unarchive;
- (void)archiveDictionary:(id)a0;

@end
