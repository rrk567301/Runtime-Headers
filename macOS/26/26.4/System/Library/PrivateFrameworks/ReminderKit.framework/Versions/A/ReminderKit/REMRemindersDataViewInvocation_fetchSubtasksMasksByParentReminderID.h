@class REMObjectID;

@interface REMRemindersDataViewInvocation_fetchSubtasksMasksByParentReminderID : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMObjectID *parentReminderID;
@property (nonatomic) BOOL includingConcealed;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithParentReminderID:(id)a0 includingConcealed:(BOOL)a1;

@end
