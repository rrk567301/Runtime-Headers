@class REMObjectID;

@interface REMRemindersDataViewInvocation_fetchByListID : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char includingSubtasks;
@property (readonly, nonatomic) REMObjectID *listID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithListID:(id)a0 includingSubtasks:(char)a1;

@end
