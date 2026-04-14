@interface REMListsDataViewInvocation_fetchUserSelectableDefaultLists : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL debug_useInMemoryPreferredDefaultListStorage;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDebugUseInMemoryPreferredDefaultListStorage:(BOOL)a0;

@end
