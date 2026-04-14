@protocol HMDPersistentStore;

@interface HMDEventCountersPersistentStore : NSObject <HMDEventCountersStoring>

@property (readonly, weak, nonatomic) id<HMDPersistentStore> persistentStore;

- (id)unarchive;
- (id)initWithPersistentStore:(id)a0;
- (void)archiveDictionary:(id)a0;
- (void).cxx_destruct;

@end
