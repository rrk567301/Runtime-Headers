@class NSString;

@interface CalManagedShareeChangeRequest : CalManagedCalendarChangeRequest

@property (retain) NSString *address;

+ (id)insertCalManagedUpdateShareeChangeRequestWithType:(int)a0 sourceUID:(id)a1 principalUID:(id)a2 uri:(id)a3 address:(id)a4 inManagedObjectContext:(id)a5;

@end
