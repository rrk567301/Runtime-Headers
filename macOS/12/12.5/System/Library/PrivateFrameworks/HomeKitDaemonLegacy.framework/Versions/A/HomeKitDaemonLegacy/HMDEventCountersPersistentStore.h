@class NSString;

@interface HMDEventCountersPersistentStore : NSObject <HMDEventCountersStoring>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)unarchive;
- (void)archiveDictionary:(id)a0;

@end
