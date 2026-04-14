@class NSString, NSNumber;

@interface CalManagedCalendarChangeRequest : CalManagedChangeRequest

@property (retain) NSString *title;
@property (retain) NSString *uri;
@property (retain) NSString *inboxURI;
@property (retain) NSString *toURI;
@property (retain) NSString *property;
@property (retain) NSString *value;
@property (retain) NSString *principalUID;
@property (retain) NSString *notes;
@property (retain) NSString *color;
@property (retain) NSString *symbolicColorName;
@property (retain) NSNumber *order;
@property (retain) NSNumber *valueType;
@property (retain) NSString *timeZone;
@property BOOL isEventContainer;
@property BOOL isTaskContainer;

+ (id)insertCalendarChangeRequestWithType:(int)a0 sourceUID:(id)a1 uri:(id)a2 inManagedObjectContext:(id)a3;

@end
