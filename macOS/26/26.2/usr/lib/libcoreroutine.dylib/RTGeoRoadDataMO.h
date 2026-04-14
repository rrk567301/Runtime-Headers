@interface RTGeoRoadDataMO : NSManagedObject

@property (nonatomic) double geoRoadStartLatitude;
@property (nonatomic) double geoRoadStartLongitude;
@property (nonatomic) double geoRoadEndLatitude;
@property (nonatomic) double geoRoadEndLongitude;
@property (nonatomic) unsigned long long clRoadID;
@property (nonatomic) unsigned long long geoRoadID;
@property (nonatomic) unsigned int roadTraversedCount;
@property (nonatomic) short geoRoadClass;
@property (nonatomic) short geoFormOfWay;

+ (id)fetchRequest;
+ (id)managedObjectWithGeoRoadData:(id)a0 inManagedObjectContext:(id)a1;

@end
