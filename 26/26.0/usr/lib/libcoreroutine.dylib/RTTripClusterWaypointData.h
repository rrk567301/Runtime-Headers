@class NSString, NSData, NSUUID;

@interface RTTripClusterWaypointData : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSData *waypoints;
@property (readonly, nonatomic) NSUUID *clusterID;

+ (id)createWithManagedObject:(id)a0;
+ (id)createWithTripClusterWaypointDataMO:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)managedObjectWithContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithClusterID:(id)a0 waypoints:(id)a1;
- (BOOL)isEqualToWaypointData:(id)a0;

@end
