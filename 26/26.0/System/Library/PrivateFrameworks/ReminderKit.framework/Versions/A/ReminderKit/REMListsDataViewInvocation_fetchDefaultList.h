@interface REMListsDataViewInvocation_fetchDefaultList : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL debug_useInMemoryPreferredDefaultListStorage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithDebugUseInMemoryPreferredDefaultListStorage:(BOOL)a0;
- (BOOL)isEqual:(id)a0;

@end
