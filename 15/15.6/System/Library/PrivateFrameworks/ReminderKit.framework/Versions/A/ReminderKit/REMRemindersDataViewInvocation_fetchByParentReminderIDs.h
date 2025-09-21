@class NSArray;

@interface REMRemindersDataViewInvocation_fetchByParentReminderIDs : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *parentReminderIDs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithParentReminderIDs:(id)a0;

@end
