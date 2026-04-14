@class NSString, NSUUID;

@interface RTTripClusterRoute : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long clRoadID;
@property (readonly, nonatomic) NSUUID *clusterID;
@property (readonly, nonatomic) double latitude;
@property (readonly, nonatomic) double longitude;
@property (readonly, nonatomic) double course;
@property (readonly, nonatomic) unsigned short sequence;
@property (readonly, nonatomic) BOOL followedByUTurn;

+ (id)createWithManagedObject:(id)a0;
+ (id)createWithTripClusterLocationsMO:(id)a0;

- (BOOL)isEqualToRoute:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)managedObjectWithContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithClusterID:(id)a0 clRoadID:(unsigned long long)a1 latitude:(double)a2 longitude:(double)a3 course:(double)a4 sequence:(unsigned short)a5 followedByUTurn:(BOOL)a6;

@end
