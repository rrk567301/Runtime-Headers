@class NSArray, CHSRemoteDevicePredicate;

@interface CHSMutableControlConfiguration : CHSControlConfiguration

@property (nonatomic, copy) NSArray *controlItems;
@property (nonatomic, retain) CHSRemoteDevicePredicate *replicationPredicate;
@property (nonatomic) BOOL automaticallyOrphaned;
@property (nonatomic) double expirationTimeout;

- (id)copyWithZone:(void *)a0;
- (id)init;
- (id)initWithControlItems:(id)a0;
- (id)initWithControlItems:(id)a0 automaticallyOrphaned:(BOOL)a1;
- (id)initWithControlItems:(id)a0 replicationPredicate:(id)a1;
- (id)initWithControlItems:(id)a0 replicationPredicate:(id)a1 automaticallyOrphaned:(BOOL)a2;

@end
