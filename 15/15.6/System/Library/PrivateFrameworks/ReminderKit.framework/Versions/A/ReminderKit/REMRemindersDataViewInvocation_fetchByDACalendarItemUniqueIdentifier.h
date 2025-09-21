@class NSArray, REMObjectID;

@interface REMRemindersDataViewInvocation_fetchByDACalendarItemUniqueIdentifier : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *daCalendarItemUniqueIdentifiers;
@property (readonly, nonatomic) REMObjectID *listObjectID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDACalendarItemUniqueIdentifiers:(id)a0 listObjectID:(id)a1;

@end
