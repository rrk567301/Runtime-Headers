@class NSString, NSUUID;

@interface RTTripClusterSchedule : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *clusterID;
@property (readonly, nonatomic) int timeID;
@property (nonatomic) int count;

+ (id)createWithManagedObject:(id)a0;
+ (id)createWithTripClusterScheduleMO:(id)a0;
+ (int)getHourIDFromTimeID:(int)a0;
+ (int)getTimeIDFromDate:(id)a0;
+ (int)getWeekdayIDFromTimeID:(int)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)managedObjectWithContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithClusterID:(id)a0 timeID:(int)a1 count:(int)a2;
- (id)initWithTimeAndClusterID:(id)a0 time:(id)a1;
- (BOOL)isEqualToSchedule:(id)a0;

@end
