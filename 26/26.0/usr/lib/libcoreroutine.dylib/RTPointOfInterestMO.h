@class RTBluePOITileMO, NSUUID, RTPolygon, NSNumber;

@interface RTPointOfInterestMO : NSManagedObject

@property (nonatomic) BOOL applePaySupport;
@property (nonatomic) BOOL filtered;
@property (nonatomic) BOOL fullyCoversTile;
@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSNumber *locationLatitude;
@property (copy, nonatomic) NSNumber *locationLongitude;
@property (retain, nonatomic) NSNumber *muid;
@property (retain, nonatomic) RTPolygon *polygon;
@property (retain, nonatomic) RTBluePOITileMO *bluePOITile;

+ (id)fetchRequest;
+ (id)managedObjectWithPointOfInterest:(id)a0 inManagedObjectContext:(id)a1;

@end
