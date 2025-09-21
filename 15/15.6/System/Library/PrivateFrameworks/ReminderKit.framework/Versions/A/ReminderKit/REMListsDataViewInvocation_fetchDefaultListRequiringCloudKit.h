@class REMObjectID;

@interface REMListsDataViewInvocation_fetchDefaultListRequiringCloudKit : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) REMObjectID *accountObjectID;
@property (nonatomic) char debug_useInMemoryPreferredDefaultListStorage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccountObjectID:(id)a0 debugUseInMemoryPreferredDefaultListStorage:(char)a1;

@end
