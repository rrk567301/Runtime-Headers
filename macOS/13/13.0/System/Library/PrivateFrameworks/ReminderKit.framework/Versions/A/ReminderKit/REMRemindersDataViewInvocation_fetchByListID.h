@class REMObjectID;

@interface REMRemindersDataViewInvocation_fetchByListID : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL includingSubtasks;
@property (readonly, nonatomic) REMObjectID *listID;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithListID:(id)a0 includingSubtasks:(BOOL)a1;

@end
