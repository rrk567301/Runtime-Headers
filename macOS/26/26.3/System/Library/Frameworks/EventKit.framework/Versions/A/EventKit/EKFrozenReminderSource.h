@class NSString, REMAccount;

@interface EKFrozenReminderSource : EKFrozenReminderObject

@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) REMAccount *remAccount;

+ (Class)meltedClass;

- (BOOL)disabled;
- (id)UUID;
- (id)lastSyncStartDate;
- (long long)sourceTypeRaw;
- (void)setSyncError:(id)a0;
- (int)managedConfigurationAccountAccess;
- (void)setLastSyncEndDate:(id)a0;
- (id)externalID;
- (id)delegatedAccountOwnerStoreID;
- (id)cachedExternalInfoData;
- (int)flags;
- (id)title;
- (id)syncError;
- (void)setLastSyncStartDate:(id)a0;
- (id)defaultAlarmOffset;
- (id)lastSyncEndDate;
- (id)constraintsName;
- (id)meltedObjectInStore:(id)a0;

@end
