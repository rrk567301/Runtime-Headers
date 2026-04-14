@class NSUUID, NSNumber;

@interface HMDRemoteHomeMessageDestination : HMDRemoteMessageDestination

@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, nonatomic) NSNumber *queueTimeout;

+ (id)shortDescription;

- (id)privateDescription;
- (id)debugDescription;
- (id)initWithTarget:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)description;
- (unsigned long long)hash;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 homeUUID:(id)a1;
- (id)initWithTarget:(id)a0 homeUUID:(id)a1 queueTimeout:(id)a2;

@end
