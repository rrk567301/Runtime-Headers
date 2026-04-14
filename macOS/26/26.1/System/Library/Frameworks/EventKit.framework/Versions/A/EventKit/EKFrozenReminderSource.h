@class NSString, REMAccount;

@interface EKFrozenReminderSource : EKFrozenReminderObject

@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) REMAccount *remAccount;

+ (Class)meltedClass;

- (int)flags;
- (BOOL)disabled;
- (id)syncError;
- (void)setLastSyncStartDate:(id)a0;
- (void)setSyncError:(id)a0;
- (id)constraintsName;
- (id)lastSyncStartDate;
- (id)delegatedAccountOwnerStoreID;
- (id)title;
- (id)defaultAlarmOffset;
- (void)setLastSyncEndDate:(id)a0;
- (id)externalID;
- (id)lastSyncEndDate;
- (int)managedConfigurationAccountAccess;
- (id)UUID;
- (id)cachedExternalInfoData;
- (long long)sourceTypeRaw;
- (id)meltedObjectInStore:(id)a0;

@end
