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
- (id)createdICSDocument;
- (id)requestBody;
- (id)createdETag;
- (id)createdURL;
- (id)updatedScheduleTag;
- (id)updatedICSDocument;
- (id)_scheduleTagForItem:(id)a0;
- (id)_recurrenceDateString;
- (id)urlWithQuery;
- (id)_documentForItem:(id)a0;
- (void).cxx_destruct;
- (id)_dataForItem:(id)a0;
- (id)httpMethod;
- (void)_updateBothResponseItems;
- (id)_etagForItem:(id)a0;
- (id)initWithResourceURL:(id)a0 recurrenceDate:(id)a1 floating:(BOOL)a2 allday:(BOOL)a3;
- (id)description;
- (id)createdICSData;
- (id)createdScheduleTag;
- (id)updatedETag;
- (id)url;

@end
