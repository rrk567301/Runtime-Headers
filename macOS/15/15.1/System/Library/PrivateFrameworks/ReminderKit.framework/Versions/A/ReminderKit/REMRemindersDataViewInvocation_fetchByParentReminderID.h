@class REMObjectID;

@interface REMRemindersDataViewInvocation_fetchByParentReminderID : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMObjectID *parentReminderID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) long long fetchOption;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithParentReminderID:(id)a0 accountID:(id)a1 fetchOption:(long long)a2;

@end
