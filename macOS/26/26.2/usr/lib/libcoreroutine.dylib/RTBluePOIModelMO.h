@class RTBluePOITileMO, NSUUID, NSString, NSDictionary;

@interface RTBluePOIModelMO : NSManagedObject

@property (copy, nonatomic) NSUUID *identifier;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) NSDictionary *featureToHashedApMapping;
@property (copy, nonatomic) NSString *featureToHashedApMappingDataURL;
@property (retain, nonatomic) RTBluePOITileMO *bluePOITile;

+ (id)fetchRequest;
+ (id)managedObjectWithBluePOIModel:(id)a0 inManagedObjectContext:(id)a1;

@end
