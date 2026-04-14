@class NSArray, NSUUID, NSDictionary, NSData, NSDate, NSNumber, NSSet;

@interface RTBluePOITileMO : NSManagedObject

@property (copy, nonatomic) NSDate *date;
@property (copy, nonatomic) NSData *downloadKey;
@property (copy, nonatomic) NSData *geoCacheInfo;
@property (copy, nonatomic) NSData *hashSalt;
@property (copy, nonatomic) NSNumber *tileKey;
@property (copy, nonatomic) NSUUID *identifier;
@property (retain, nonatomic) NSDictionary *apToModelMapping;
@property (retain, nonatomic) NSDictionary *hashedApToModelMapping;
@property (retain, nonatomic) NSDictionary *modelCalibrationParameters;
@property (retain, nonatomic) NSSet *models;
@property (retain, nonatomic) NSArray *modelURLs;
@property (retain, nonatomic) NSSet *pointsOfInterest;
@property (copy, nonatomic) NSNumber *singlePOIMuid;
@property (copy, nonatomic) NSNumber *size;

+ (id)fetchRequest;
+ (id)managedObjectWithBluePOITile:(id)a0 inManagedObjectContext:(id)a1;

@end
