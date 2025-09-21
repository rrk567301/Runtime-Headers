@class NSString, NSUUID, NSData, NSDate, DRSConfigMetadataMO;

@interface DRConfigMO : NSManagedObject

@property (copy, nonatomic) NSString *build;
@property (copy, nonatomic) NSString *configDescription;
@property (copy, nonatomic) NSUUID *configUUID;
@property (copy, nonatomic) NSDate *endDate;
@property (retain, nonatomic) NSData *payload;
@property (nonatomic) char payloadIsJSON;
@property (copy, nonatomic) NSDate *receivedDate;
@property (nonatomic) char skippedHysteresis;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSString *teamID;
@property (retain, nonatomic) DRSConfigMetadataMO *metadata;

+ (id)fetchRequest;

@end
