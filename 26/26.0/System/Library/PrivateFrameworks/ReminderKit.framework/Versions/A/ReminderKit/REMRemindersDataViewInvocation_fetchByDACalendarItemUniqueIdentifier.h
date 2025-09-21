@class NSArray, REMObjectID;

@interface REMRemindersDataViewInvocation_fetchByDACalendarItemUniqueIdentifier : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *daCalendarItemUniqueIdentifiers;
@property (readonly, nonatomic) REMObjectID *listObjectID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDACalendarItemUniqueIdentifiers:(id)a0 listObjectID:(id)a1;

@end
