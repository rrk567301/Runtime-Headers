@class REMObjectID;

@interface REMRemindersDataViewInvocation_fetchSubtasksMasksByParentReminderID : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) REMObjectID *parentReminderID;
@property (nonatomic) char includingConcealed;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithParentReminderID:(id)a0 includingConcealed:(char)a1;

@end
