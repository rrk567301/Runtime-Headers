@class NSArray, REMReminderFetchOptions;

@interface REMRemindersDataViewInvocation_fetchByObjectID : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *objectIDs;
@property (readonly, nonatomic) REMReminderFetchOptions *fetchOptions;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithObjectIDs:(id)a0 fetchOptions:(id)a1;

@end
