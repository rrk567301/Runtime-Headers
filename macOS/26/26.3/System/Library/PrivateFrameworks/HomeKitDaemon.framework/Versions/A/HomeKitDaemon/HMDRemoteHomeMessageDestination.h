@class NSUUID, NSNumber;

@interface HMDRemoteHomeMessageDestination : HMDRemoteMessageDestination

@property (readonly, nonatomic) NSUUID *homeUUID;
@property (readonly, nonatomic) NSNumber *queueTimeout;

+ (id)shortDescription;

- (id)privateDescription;
- (id)initWithTarget:(id)a0;
- (id)shortDescription;
- (id)debugDescription;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithTarget:(id)a0 homeUUID:(id)a1;
- (id)initWithTarget:(id)a0 homeUUID:(id)a1 queueTimeout:(id)a2;

@end
