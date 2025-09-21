@class NSObject;
@protocol OS_os_log;

@interface CNCDDuplicateCustomPropertyMigrator : CNCDMigrator

@property (class, readonly, nonatomic) NSObject<OS_os_log> *os_log;

+ (void)mt_log_AddressBook_customPropertyDamageDetected:(char)a0;

- (id)sortedFetchOfValuesForProperty:(id)a0;
- (void)migrate;
- (void)dedupeAllCustomPropertiesAndCorrespondingCustomPropertyValues;
- (id)fetchAllValuesForDupe:(id)a0;
- (void)fixupDuplicatedCustomPropertyAndRelatedCustomPropertyValuesKeeping:(id)a0 andRemoving:(id)a1;
- (void)fixupToOneRelationshipToOwnerByDeletingAllButOneForCustomProperty:(id)a0;
- (char)isDuplicate:(id)a0 ofCustomProperty:(id)a1;
- (void)performFixupWithSortedCustomProperties:(id)a0;
- (char)requiresToOneRelationshipWithOwningRecordForCustomProperty:(id)a0;
- (id)sortedFetchOfAllCustomProperties;

@end
