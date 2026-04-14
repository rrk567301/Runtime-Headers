@class NSString, NSNumber, EKFrozenReminderSource;

@interface EKPersistentSource : EKPersistentObject

@property (readonly, nonatomic) NSString *UUID;
@property (nonatomic) long long sourceType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSNumber *defaultAlarmOffset;
@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL onlyCreatorCanModify;
@property (nonatomic) int preferredEventPrivateValue;
@property (nonatomic) int strictestEventPrivateValue;
@property (retain, nonatomic) NSString *UUID;
@property (retain) EKFrozenReminderSource *reminderSource;

+ (id)relations;
+ (Class)meltedClass;
+ (id)defaultPropertiesToLoad;
+ (id)propertyKeyForUniqueIdentifier;

- (id)description;
- (int)flags;
- (void).cxx_destruct;
- (void)setTitle:(id)a0;
- (id)title;
- (void)setFlags:(int)a0;
- (BOOL)disabled;
- (void)setDisabled:(BOOL)a0;
- (id)constraints;
- (id)ownerName;
- (void)setOwnerName:(id)a0;
- (long long)sourceType;
- (id)notes;
- (void)setNotes:(id)a0;
- (id)externalID;
- (void)setExternalModificationTag:(id)a0;
- (id)externalModificationTag;
- (void)setExternalID:(id)a0;
- (void)setSourceType:(long long)a0;
- (int)entityType;
- (int)displayOrder;
- (void)setDisplayOrder:(int)a0;
- (id)syncError;
- (id)lastSyncStartDate;
- (void)setLastSyncStartDate:(id)a0;
- (id)lastSyncEndDate;
- (void)setLastSyncEndDate:(id)a0;
- (void)setSyncError:(id)a0;
- (id)defaultAlarmOffset;
- (BOOL)onlyCreatorCanModify;
- (int)preferredEventPrivateValueRaw;
- (void)setPreferredEventPrivateValueRaw:(int)a0;
- (int)strictestEventPrivateValueRaw;
- (void)setStrictestEventPrivateValueRaw:(int)a0;
- (void)setDefaultAlarmOffset:(id)a0;
- (id)defaultAllDayAlarmOffset;
- (void)setDefaultAllDayAlarmOffset:(id)a0;
- (id)constraintsName;
- (void)setConstraintsName:(id)a0;
- (id)creatorBundleID;
- (void)setCreatorBundleID:(id)a0;
- (id)creatorCodeSigningIdentity;
- (void)setCreatorCodeSigningIdentity:(id)a0;
- (void)setOnlyCreatorCanModify:(BOOL)a0;
- (int)flags2;
- (void)setFlags2:(int)a0;
- (BOOL)showsNotifications;
- (void)setShowsNotifications:(BOOL)a0;
- (id)delegatedAccountOwnerStoreID;
- (void)setDelegatedAccountOwnerStoreID:(id)a0;
- (id)cachedExternalInfoData;
- (void)setCachedExternalInfoData:(id)a0;
- (int)managedConfigurationAccountAccess;

@end
