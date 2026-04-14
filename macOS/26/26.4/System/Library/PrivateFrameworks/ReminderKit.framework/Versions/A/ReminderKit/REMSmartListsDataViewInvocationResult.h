@class NSArray, NSDictionary;

@interface REMSmartListsDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *smartListStorages;
@property (readonly, nonatomic) NSDictionary *accountStorages;
@property (readonly, nonatomic) NSDictionary *parentListStorages;

- (id)initWithSmartListStorages:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSmartListStorages:(id)a0 accountStorages:(id)a1 parentListStorages:(id)a2;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;

@end
