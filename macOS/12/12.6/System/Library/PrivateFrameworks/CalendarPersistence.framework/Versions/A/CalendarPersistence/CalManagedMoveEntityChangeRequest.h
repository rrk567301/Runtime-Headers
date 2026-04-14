@class NSString;

@interface CalManagedMoveEntityChangeRequest : CalManagedChangeRequest

@property (retain) NSString *principalUID;
@property (retain) NSString *sourceCalendarPath;
@property (retain) NSString *destinationCalendarPath;
@property (retain) NSString *fromSourceUID;

+ (id)entityName;
+ (id)insertMoveEntityRequestForCalendarItem:(id)a0 fromCalendar:(id)a1 toCalendar:(id)a2 inManagedObjectContext:(id)a3;

@end
