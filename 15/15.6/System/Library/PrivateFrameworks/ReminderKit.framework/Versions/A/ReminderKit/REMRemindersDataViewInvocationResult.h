@class NSArray;

@interface REMRemindersDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *accountStorages;
@property (readonly, nonatomic) NSArray *listStorages;
@property (readonly, nonatomic) NSArray *reminderStorages;
@property (readonly, nonatomic) NSArray *objectIDs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccountStorages:(id)a0 listStorages:(id)a1 reminderStorages:(id)a2 objectIDs:(id)a3;

@end
