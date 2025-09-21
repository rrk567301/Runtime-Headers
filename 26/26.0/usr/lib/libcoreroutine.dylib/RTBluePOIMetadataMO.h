@class NSUUID, NSArray, NSData, NSDictionary;

@interface RTBluePOIMetadataMO : NSManagedObject

@property (copy, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSData *geoCacheInfo;
@property (retain, nonatomic) NSArray *categoryDenyList;
@property (retain, nonatomic) NSDictionary *modelCalibrationParameters;

+ (id)fetchRequest;
+ (id)managedObjectWithBluePOIMetadata:(id)a0 inManagedObjectContext:(id)a1;
+ (id)managedObjectWithBluePOIMetadata:(id)a0 managedObject:(id)a1 inManagedObjectContext:(id)a2;

@end
