@class NSString, NSDate;

@interface MFLibraryCalendarEvent : NSObject

@property (copy) NSString *originalReceivedAccountURLString;
@property (copy) NSString *associatedCalendarItemIdString;
@property (copy) NSString *location;
@property (copy) NSString *uid;
@property (retain) NSDate *startDate;
@property (retain) NSDate *endDate;
@property char isAllDayEvent;
@property char isOutOfDate;
@property char hasBeenProcessed;
@property char isResponseRequested;
@property long long responseStatus;

- (void).cxx_destruct;

@end
