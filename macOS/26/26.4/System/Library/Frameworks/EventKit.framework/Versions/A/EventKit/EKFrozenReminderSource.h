@class NSString, REMAccount;

@interface EKFrozenReminderSource : EKFrozenReminderObject

@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) REMAccount *remAccount;

+ (Class)meltedClass;

- (BOOL)disabled;
- (int)flags;
- (id)lastSyncEndDate;
- (id)externalID;
- (void)setLastSyncEndDate:(id)a0;
- (int)managedConfigurationAccountAccess;
- (id)lastSyncStartDate;
- (id)title;
- (id)syncError;
- (id)constraintsName;
- (id)cachedExternalInfoData;
- (long long)sourceTypeRaw;
- (void)setLastSyncStartDate:(id)a0;
- (id)defaultAlarmOffset;
- (id)delegatedAccountOwnerStoreID;
- (void)setSyncError:(id)a0;
- (id)UUID;
- (id)meltedObjectInStore:(id)a0;

@end
