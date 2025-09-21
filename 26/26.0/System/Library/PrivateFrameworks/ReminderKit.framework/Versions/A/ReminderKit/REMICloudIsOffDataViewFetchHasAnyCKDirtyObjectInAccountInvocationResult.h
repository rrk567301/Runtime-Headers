@class NSNumber;

@interface REMICloudIsOffDataViewFetchHasAnyCKDirtyObjectInAccountInvocationResult : REMStoreInvocationResult <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *hasAnyDirtyCloudObject;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithHasAnyDirtyCloudObject:(id)a0;

@end
