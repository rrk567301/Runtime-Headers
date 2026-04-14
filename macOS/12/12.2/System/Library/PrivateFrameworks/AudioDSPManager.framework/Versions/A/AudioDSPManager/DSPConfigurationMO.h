@class NSString;

@interface DSPConfigurationMO : NSManagedObject

@property (copy, nonatomic) NSString *graphName;
@property (copy, nonatomic) NSString *propertyStripName;
@property (copy, nonatomic) NSString *tuningStripName;
@property (copy, nonatomic) NSString *uid;

+ (id)fetchRequest;

@end
