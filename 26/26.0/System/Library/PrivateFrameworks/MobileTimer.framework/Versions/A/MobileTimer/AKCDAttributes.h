@class NSData, AKCDAlarm;

@interface AKCDAttributes : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic, retain) AKCDAlarm *alarm;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
