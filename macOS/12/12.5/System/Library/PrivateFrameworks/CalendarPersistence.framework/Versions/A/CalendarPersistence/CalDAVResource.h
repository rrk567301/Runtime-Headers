@class NSString, NSData, CalDAVScheduleChangesProperty;

@interface CalDAVResource : NSObject

@property (retain) NSString *filename;
@property (retain) NSString *etag;
@property (retain) NSString *scheduleTag;
@property (retain) NSData *data;
@property (retain) CalDAVScheduleChangesProperty *scheduleChanges;

+ (id)resourceWithCalDAVCalendarItemData:(id)a0;

- (void).cxx_destruct;

@end
