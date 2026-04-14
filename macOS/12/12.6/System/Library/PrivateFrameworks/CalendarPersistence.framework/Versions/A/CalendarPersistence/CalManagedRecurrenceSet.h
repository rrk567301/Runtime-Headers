@class NSString, NSSet;

@interface CalManagedRecurrenceSet : CalManagedObject

@property (retain) NSString *localRecurrenceSetID;
@property (retain) NSString *sharedRecurrenceSetID;
@property (retain) NSSet *series;

+ (id)entityName;

@end
