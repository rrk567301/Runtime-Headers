@class NSString, ICNAEventReporter, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface ICNASearchResultExposureReporter : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue;
@property (retain, nonatomic) ICNAEventReporter *eventReporter;
@property (retain, nonatomic) NSString *searchSessionID;
@property (retain, nonatomic) NSMutableArray *searchResultExposureItems;

- (id)init;
- (void).cxx_destruct;
- (void)updateWithTopHitResultCount:(unsigned long long)a0 nonTopHitResultCount:(unsigned long long)a1;
- (void)analyticsSessionWillEnd:(id)a0;
- (void)updateSearchSessionID:(id)a0;
- (void)invalidateSearchSessionID;
- (void)startTrackingNewSearchString:(id)a0;
- (void)updateSearchResultWasSelected:(BOOL)a0;
- (void)submitEventIfApplicable;
- (id)_exposureDataThreadUnsafe;

@end
