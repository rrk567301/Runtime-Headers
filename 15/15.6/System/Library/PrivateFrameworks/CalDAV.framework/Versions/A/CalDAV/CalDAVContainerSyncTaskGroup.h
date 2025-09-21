@class NSDateComponents;
@protocol CalDAVCalendar;

@interface CalDAVContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup {
    int _fetchingEtagState;
}

@property (retain, nonatomic) id<CalDAVCalendar> calendar;
@property (nonatomic) char getScheduleTags;
@property (nonatomic) char getScheduleChanges;
@property (nonatomic) char syncEvents;
@property (nonatomic) char syncTodos;
@property (nonatomic) char supportsExtendedCalendarQuery;
@property (nonatomic) char fallbackOnMultiGetError;
@property (retain, nonatomic) NSDateComponents *eventFilterStartDate;
@property (retain, nonatomic) NSDateComponents *eventFilterEndDate;

- (void).cxx_destruct;
- (id)dataContentType;
- (char)_shouldFetchEventsForState:(int)a0;
- (char)_shouldFetchTodosForState:(int)a0;
- (void)applyAdditionalPropertiesFromPostTask:(id)a0;
- (void)applyAdditionalPropertiesFromPutTask:(id)a0;
- (id)copyAdditionalResourcePropertiesToFetch;
- (id)copyGetEtagTaskWithPropertiesToFind:(id)a0;
- (id)copyGetTaskWithURL:(id)a0;
- (id)copyMultiGetTaskWithURLs:(id)a0;
- (id)copyPutTaskWithPayloadItem:(id)a0 forAction:(id)a1;
- (id)initWithCalendar:(id)a0 accountInfoProvider:(id)a1 taskManager:(id)a2;
- (id)initWithFolderURL:(id)a0 previousCTag:(id)a1 previousSyncToken:(id)a2 actions:(id)a3 accountInfoProvider:(id)a4 taskManager:(id)a5 appSpecificCalendarItemClass:(Class)a6;
- (id)initWithFolderURL:(id)a0 previousCTag:(id)a1 previousSyncToken:(id)a2 actions:(id)a3 getScheduleTags:(char)a4 getScheduleChanges:(char)a5 accountInfoProvider:(id)a6 taskManager:(id)a7 appSpecificCalendarItemClass:(Class)a8;
- (id)initWithFolderURL:(id)a0 previousCTag:(id)a1 previousSyncToken:(id)a2 getScheduleTags:(char)a3 getScheduleChanges:(char)a4 accountInfoProvider:(id)a5 taskManager:(id)a6;
- (char)shouldFetchMoreETags;
- (char)shouldFetchResourceWithEtag:(id)a0 propertiesToValues:(id)a1;

@end
