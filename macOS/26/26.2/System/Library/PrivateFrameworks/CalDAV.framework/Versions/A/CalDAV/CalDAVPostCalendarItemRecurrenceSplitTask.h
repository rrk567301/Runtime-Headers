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
- (id)additionalHeaderValues;
- (id)httpMethod;
- (id)updatedScheduleTag;
- (id)_recurrenceDateString;
- (id)updatedICSDocument;
- (id)createdURL;
- (id)_scheduleTagForItem:(id)a0;
- (id)createdScheduleTag;
- (id)createdETag;
- (id)createdICSDocument;
- (void).cxx_destruct;
- (id)updatedETag;
- (id)description;
- (id)url;
- (id)_documentForItem:(id)a0;
- (void)_updateBothResponseItems;
- (id)initWithResourceURL:(id)a0 recurrenceDate:(id)a1 floating:(BOOL)a2 allday:(BOOL)a3;
- (id)_etagForItem:(id)a0;
- (id)urlWithQuery;
- (id)_dataForItem:(id)a0;
- (id)createdICSData;

@end
