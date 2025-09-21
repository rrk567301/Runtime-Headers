@class NSString, REMObjectID;

@interface REMSmartListsDataViewInvocation_fetchSmartList : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *smartListType;
@property (readonly, nonatomic) REMObjectID *objectID;
@property (nonatomic) char createIfNeeded;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSmartListType:(id)a0 objectID:(id)a1 createIfNeeded:(char)a2;

@end
