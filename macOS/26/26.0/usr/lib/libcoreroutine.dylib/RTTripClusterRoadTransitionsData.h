@class NSString, NSData, NSUUID;

@interface RTTripClusterRoadTransitionsData : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSData *roadTransitions;
@property (readonly, nonatomic) NSUUID *clusterID;

+ (id)createWithManagedObject:(id)a0;
+ (id)createWithTripClusterRoadTransitionsDataMO:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)managedObjectWithContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithClusterID:(id)a0 roadTransitions:(id)a1;
- (BOOL)isEqualToRoadTransitionsData:(id)a0;

@end
