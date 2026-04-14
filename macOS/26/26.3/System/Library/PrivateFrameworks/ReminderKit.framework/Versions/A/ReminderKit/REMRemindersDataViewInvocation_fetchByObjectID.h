@class NSArray, REMReminderFetchOptions;

@interface REMRemindersDataViewInvocation_fetchByObjectID : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *objectIDs;
@property (readonly, nonatomic) REMReminderFetchOptions *fetchOptions;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithObjectIDs:(id)a0 fetchOptions:(id)a1;

@end
