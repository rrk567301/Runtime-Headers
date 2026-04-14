@protocol DAEPublishedCalendarDelegate;

@interface DAEPublishedCalendarContext : NSObject

@property (retain, nonatomic) id<DAEPublishedCalendarDelegate> delegate;
@property (nonatomic) unsigned long long operationType;

- (void).cxx_destruct;
- (void)calendarPublishedToURL:(id)a0;
- (void)calendarPublishToURL:(id)a0 failedWithError:(id)a1;
- (void)calendarPublishProgressedTo:(unsigned long long)a0 totalBytes:(unsigned long long)a1;
- (void)calendarMovedToURL:(id)a0 fromURL:(id)a1;
- (void)calendarMoveToURL:(id)a0 fromURL:(id)a1 failedWithError:(id)a2;
- (void)calendarMoveFailedToRemoveCalendarFromURL:(id)a0 withError:(id)a1 shouldContinue:(id /* block */)a2;
- (void)calendarUnpublishedFromURL:(id)a0;
- (void)calendarUnpublishFromURL:(id)a0 failedWithError:(id)a1;
- (void)finishedWithError:(id)a0 fromURL:(id)a1 toURL:(id)a2;

@end
