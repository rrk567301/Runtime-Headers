@interface HMDTimeBasedFlagsPersistentStore : HMFObject <HMDTimeBasedFlagsStoring>

- (id)unarchive;
- (id)unarchiveLegacyDictionary;
- (id)unarchiveDictionary;
- (id)unarchiveLegacyFlags;
- (void)archiveDictionary:(id)a0;

@end
