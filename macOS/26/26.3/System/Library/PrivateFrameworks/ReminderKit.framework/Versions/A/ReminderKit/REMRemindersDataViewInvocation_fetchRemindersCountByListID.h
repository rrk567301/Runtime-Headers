@class REMObjectID;

@interface REMRemindersDataViewInvocation_fetchRemindersCountByListID : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) REMObjectID *listID;
@property (readonly, nonatomic) BOOL includingCompleted;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithListID:(id)a0 includingCompleted:(BOOL)a1;

@end
