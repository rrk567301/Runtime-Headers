@class NSString, REMAccount;

@interface EKFrozenReminderSource : EKFrozenReminderObject

@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) REMAccount *remAccount;

+ (Class)meltedClass;

- (id)constraintsName;
- (id)title;
- (id)lastSyncStartDate;
- (int)flags;
- (void)setLastSyncEndDate:(id)a0;
- (long long)sourceTypeRaw;
- (id)delegatedAccountOwnerStoreID;
- (id)defaultAlarmOffset;
- (id)cachedExternalInfoData;
- (id)lastSyncEndDate;
- (id)UUID;
- (BOOL)disabled;
- (id)syncError;
- (int)managedConfigurationAccountAccess;
- (void)setSyncError:(id)a0;
- (void)setLastSyncStartDate:(id)a0;
- (id)externalID;
- (id)meltedObjectInStore:(id)a0;

@end
