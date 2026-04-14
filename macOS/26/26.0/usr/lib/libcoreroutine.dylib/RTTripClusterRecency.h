@class NSString, NSUUID, NSDate;

@interface RTTripClusterRecency : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *clusterID;
@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;

+ (id)createWithManagedObject:(id)a0;
+ (id)createWithTripClusterRecencyMO:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)managedObjectWithContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithClusterID:(id)a0 startTime:(id)a1 endTime:(id)a2;
- (BOOL)isEqualToRecency:(id)a0;

@end
