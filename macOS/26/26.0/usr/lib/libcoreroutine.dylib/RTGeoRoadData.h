@class NSString;

@interface RTGeoRoadData : NSObject <RTCoreDataReadable, RTCoreDataWritable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long clRoadID;
@property (readonly, nonatomic) unsigned long long geoRoadID;
@property (readonly, nonatomic) int roadTraversedCount;
@property (readonly, nonatomic) double geoRoadStartLatitude;
@property (readonly, nonatomic) double geoRoadStartLongitude;
@property (readonly, nonatomic) double geoRoadEndLatitude;
@property (readonly, nonatomic) double geoRoadEndLongitude;
@property (nonatomic) long long geoRoadClass;
@property (nonatomic) long long geoFormOfWay;

+ (id)createWithManagedObject:(id)a0;
+ (id)createWithGeoRoadDataMO:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)managedObjectWithContext:(id)a0;
- (id)initWithclRoadID:(unsigned long long)a0 geoRoadID:(unsigned long long)a1 roadTraversedCount:(unsigned int)a2 geoRoadStartLatitude:(double)a3 geoRoadStartLongitude:(double)a4 geoRoadEndLatitude:(double)a5 geoRoadEndLongitude:(double)a6 geoRoadClass:(long long)a7 geoFormOfWay:(long long)a8;
- (BOOL)isEqualToRoad:(id)a0;

@end
