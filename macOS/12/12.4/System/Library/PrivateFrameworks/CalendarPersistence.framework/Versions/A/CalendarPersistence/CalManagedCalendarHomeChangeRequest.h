@class NSString, NSNumber;

@interface CalManagedCalendarHomeChangeRequest : CalManagedChangeRequest

@property (retain) NSString *principalUID;
@property (retain) NSString *uri;
@property (retain) NSString *property;
@property (retain) NSString *value;
@property (retain) NSNumber *valueType;

+ (id)entityName;
+ (id)insertCalendarHomeChangeRequestWithType:(int)a0 principalUID:(id)a1 uri:(id)a2 inManagedObjectContext:(id)a3;

@end
