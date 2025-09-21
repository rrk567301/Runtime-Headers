@class NSUUID;

@interface REMRemindersDataViewInvocation_fetchByBatchCreationID : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *batchCreationID;
@property (readonly, nonatomic) BOOL includingCompleted;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithBatchCreationID:(id)a0 includingCompleted:(BOOL)a1;

@end
