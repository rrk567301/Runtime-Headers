@interface REMListsDataViewInvocation_debugFetchPhantomLists : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
