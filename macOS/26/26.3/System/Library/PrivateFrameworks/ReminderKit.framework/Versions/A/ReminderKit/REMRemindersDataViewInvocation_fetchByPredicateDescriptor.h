@class NSArray, REMReminderPredicateDescriptor, REMReminderFetchOptions;

@interface REMRemindersDataViewInvocation_fetchByPredicateDescriptor : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMReminderPredicateDescriptor *predicateDescriptor;
@property (readonly, nonatomic) NSArray *sortDescriptors;
@property (readonly, nonatomic) REMReminderFetchOptions *options;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPredicateDescriptor:(id)a0 sortDescriptors:(id)a1 options:(id)a2;

@end
