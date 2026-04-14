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

- (id)requestBody;
- (id)httpMethod;
- (id)updatedScheduleTag;
- (id)createdETag;
- (id)_recurrenceDateString;
- (id)createdScheduleTag;
- (id)url;
- (id)_dataForItem:(id)a0;
- (id)_documentForItem:(id)a0;
- (id)createdICSData;
- (id)createdICSDocument;
- (id)initWithResourceURL:(id)a0 recurrenceDate:(id)a1 floating:(BOOL)a2 allday:(BOOL)a3;
- (id)description;
- (id)_scheduleTagForItem:(id)a0;
- (id)createdURL;
- (id)updatedETag;
- (id)updatedICSDocument;
- (void)_updateBothResponseItems;
- (id)urlWithQuery;
- (id)_etagForItem:(id)a0;
- (void).cxx_destruct;
- (id)additionalHeaderValues;

@end
