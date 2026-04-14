@class NSNumber;

@interface REMICloudIsOffDataViewFetchHasAnyCKDirtyObjectInAccountInvocationResult : REMStoreInvocationResult <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSNumber *hasAnyDirtyCloudObject;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithHasAnyDirtyCloudObject:(id)a0;

@end
