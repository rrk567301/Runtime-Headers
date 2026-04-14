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
@property (nonatomic) BOOL isFloating;
@property (nonatomic) BOOL isAllDay;

- (id)additionalHeaderValues;
- (id)requestBody;
- (id)httpMethod;
- (id)updatedScheduleTag;
- (id)createdICSData;
- (void)_updateBothResponseItems;
- (id)description;
- (id)_scheduleTagForItem:(id)a0;
- (id)initWithResourceURL:(id)a0 recurrenceDate:(id)a1 floating:(BOOL)a2 allday:(BOOL)a3;
- (id)_etagForItem:(id)a0;
- (id)updatedETag;
- (id)urlWithQuery;
- (void).cxx_destruct;
- (id)createdICSDocument;
- (id)createdURL;
- (id)createdETag;
- (id)updatedICSDocument;
- (id)_dataForItem:(id)a0;
- (id)_recurrenceDateString;
- (id)url;
- (id)_documentForItem:(id)a0;
- (id)createdScheduleTag;

@end
