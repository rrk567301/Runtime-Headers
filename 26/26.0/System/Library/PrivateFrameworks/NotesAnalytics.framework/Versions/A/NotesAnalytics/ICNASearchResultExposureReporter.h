@class NSMutableArray, NSString, ICNAEventReporter, NSObject, NSWindow;
@protocol OS_dispatch_queue;

@interface ICNASearchResultExposureReporter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue;
@property (weak, nonatomic) NSWindow *window;
@property (retain, nonatomic) ICNAEventReporter *eventReporter;
@property (retain, nonatomic) NSString *searchSessionID;
@property (retain, nonatomic) NSMutableArray *searchResultExposureItems;

- (void)dealloc;
- (id)initWithWindow:(id)a0;
- (void).cxx_destruct;
- (void)analyticsSessionWillEnd:(id)a0;
- (id)_exposureDataThreadUnsafe;
- (void)eventReporterLostSession:(id)a0;
- (void)invalidateSearchSessionID;
- (void)startTrackingNewSearchString:(id)a0;
- (void)submitEventIfApplicable;
- (void)updateSearchResultWasSelected:(BOOL)a0;
- (void)updateSearchSessionID:(id)a0;
- (void)updateWithTopHitResultCount:(unsigned long long)a0 nonTopHitResultCount:(unsigned long long)a1 attachmentSectionCount:(unsigned long long)a2;

@end
