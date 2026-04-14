@class NSDate;

@interface PAREvent : NSManagedObject

@property (nonatomic, copy) NSDate *timestamp;

- (void).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
