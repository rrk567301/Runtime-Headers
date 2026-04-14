@class NSUUID, NSNumber;

@interface HMDRemoteHomeMessageDestination : HMDRemoteMessageDestination

@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, nonatomic) NSNumber *queueTimeout;

+ (id)shortDescription;

- (id)descriptionWithPointer:(BOOL)a0;
- (id)debugDescription;
- (id)privateDescription;
- (id)initWithTarget:(id)a0;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithTarget:(id)a0 homeUUID:(id)a1;
- (id)initWithTarget:(id)a0 homeUUID:(id)a1 queueTimeout:(id)a2;

@end
