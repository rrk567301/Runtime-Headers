@interface REMListsDataViewInvocation_fetchDefaultList : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char debug_useInMemoryPreferredDefaultListStorage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDebugUseInMemoryPreferredDefaultListStorage:(char)a0;

@end
