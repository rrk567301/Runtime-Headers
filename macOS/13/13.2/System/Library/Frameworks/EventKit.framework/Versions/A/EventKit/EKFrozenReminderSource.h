@class NSString, REMAccount;

@interface EKFrozenReminderSource : EKFrozenReminderObject

@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) REMAccount *remAccount;

+ (Class)meltedClass;

- (int)flags;
- (id)UUID;
- (id)title;
- (BOOL)disabled;
- (long long)sourceType;
- (id)externalID;
- (id)syncError;
- (id)lastSyncStartDate;
- (void)setLastSyncStartDate:(id)a0;
- (id)lastSyncEndDate;
- (void)setLastSyncEndDate:(id)a0;
- (void)setSyncError:(id)a0;
- (id)defaultAlarmOffset;
- (id)meltedObjectInStore:(id)a0;
- (id)constraintsName;
- (id)delegatedAccountOwnerStoreID;
- (int)managedConfigurationAccountAccess;

@end
