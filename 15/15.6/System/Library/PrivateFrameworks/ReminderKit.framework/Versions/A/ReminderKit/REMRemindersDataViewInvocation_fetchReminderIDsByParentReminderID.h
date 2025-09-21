@class REMObjectID;

@interface REMRemindersDataViewInvocation_fetchReminderIDsByParentReminderID : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) REMObjectID *parentReminderID;
@property (readonly, nonatomic) char includeIncomplete;
@property (readonly, nonatomic) char includeCompleted;
@property (readonly, nonatomic) char isUnsupported;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithParentReminderID:(id)a0 includeIncomplete:(char)a1 includeCompleted:(char)a2 isUnsupported:(char)a3;

@end
