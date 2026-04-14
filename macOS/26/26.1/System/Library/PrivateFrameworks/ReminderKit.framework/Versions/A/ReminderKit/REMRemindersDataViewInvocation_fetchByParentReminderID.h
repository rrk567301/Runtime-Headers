@class REMReminderFetchOptions, REMObjectID;

@interface REMRemindersDataViewInvocation_fetchByParentReminderID : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMObjectID *parentReminderID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) long long subtaskFetchOption;
@property (readonly, nonatomic) REMReminderFetchOptions *reminderFetchOptions;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithParentReminderID:(id)a0 accountID:(id)a1 subtaskFetchOption:(long long)a2 reminderFetchOptions:(id)a3;

@end
