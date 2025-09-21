@class NSData, NSString, AKCDAttributes;

@interface AKCDAlarm : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) AKCDAttributes *attributes;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
