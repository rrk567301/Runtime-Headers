@class NSArray;

@interface REMListsDataViewInvocation_changeTrackingFetchByObjectIDIncludingConcealed : REMStoreInvocation <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *objectIDs;
@property (nonatomic) BOOL includeMarkedForDeletionOnly;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithObjectIDs:(id)a0;

@end
