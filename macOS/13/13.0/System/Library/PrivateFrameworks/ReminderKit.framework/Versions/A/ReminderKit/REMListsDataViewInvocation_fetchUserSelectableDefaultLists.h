@interface REMListsDataViewInvocation_fetchUserSelectableDefaultLists : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL debug_useInMemoryPreferredDefaultListStorage;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDebugUseInMemoryPreferredDefaultListStorage:(BOOL)a0;

@end
