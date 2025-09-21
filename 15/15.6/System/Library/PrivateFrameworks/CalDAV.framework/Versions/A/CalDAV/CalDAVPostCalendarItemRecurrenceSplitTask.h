@class NSString, NSURL, NSDate, CoreDAVResponseItem;

@interface CalDAVPostCalendarItemRecurrenceSplitTask : CoreDAVPropertyFindBaseTask

@property (retain, nonatomic) NSURL *postURLWithQuery;
@property (retain, nonatomic) CoreDAVResponseItem *updatedResponseItem;
@property (retain, nonatomic) CoreDAVResponseItem *createdResponseItem;
@property (retain, nonatomic) NSURL *resourceURL;
@property (retain, nonatomic) NSDate *recurrenceDate;
@property (retain, nonatomic) NSString *uidForCreatedSeries;
@property (retain, nonatomic) NSString *previousScheduleTag;
@property (retain, nonatomic) NSString *previousETag;
@property (nonatomic) char isFloating;
@property (nonatomic) char isAllDay;

- (id)description;
- (void).cxx_destruct;
- (id)url;
- (id)requestBody;
- (id)httpMethod;
- (id)_dataForItem:(id)a0;
- (id)_documentForItem:(id)a0;
- (id)_etagForItem:(id)a0;
- (id)_recurrenceDateString;
- (id)_scheduleTagForItem:(id)a0;
- (void)_updateBothResponseItems;
- (id)additionalHeaderValues;
- (id)createdETag;
- (id)createdICSData;
- (id)createdICSDocument;
- (id)createdScheduleTag;
- (id)createdURL;
- (id)initWithResourceURL:(id)a0 recurrenceDate:(id)a1 floating:(char)a2 allday:(char)a3;
- (id)updatedETag;
- (id)updatedICSDocument;
- (id)updatedScheduleTag;
- (id)urlWithQuery;

@end
