@class NSArray, REMObjectID;

@interface REMListsDataViewInvocation_dataAccessFetchByExternalIdentifier : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSArray *externalIdentifiers;
@property (readonly, nonatomic) REMObjectID *accountObjectID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithExternalIdentifiers:(id)a0 accountObjectID:(id)a1;

@end
