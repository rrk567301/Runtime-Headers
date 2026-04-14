@class REMObjectID;

@interface REMRemindersDataViewInvocation_fetchByListID : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL includingSubtasks;
@property (readonly, nonatomic) BOOL includingCompleted;
@property (readonly, nonatomic) REMObjectID *listID;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithListID:(id)a0 includingSubtasks:(BOOL)a1 includingCompleted:(BOOL)a2;

@end
