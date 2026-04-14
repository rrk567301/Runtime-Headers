@class NSString, REMAccount;

@interface EKFrozenReminderSource : EKFrozenReminderObject

@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) REMAccount *remAccount;

+ (Class)meltedClass;

- (BOOL)disabled;
- (id)UUID;
- (id)lastSyncStartDate;
- (void)setSyncError:(id)a0;
- (id)cachedExternalInfoData;
- (id)lastSyncEndDate;
- (id)constraintsName;
- (id)delegatedAccountOwnerStoreID;
- (int)managedConfigurationAccountAccess;
- (id)syncError;
- (id)title;
- (int)flags;
- (id)externalID;
- (void)setLastSyncEndDate:(id)a0;
- (id)defaultAlarmOffset;
- (void)setLastSyncStartDate:(id)a0;
- (long long)sourceTypeRaw;
- (id)meltedObjectInStore:(id)a0;

@end
