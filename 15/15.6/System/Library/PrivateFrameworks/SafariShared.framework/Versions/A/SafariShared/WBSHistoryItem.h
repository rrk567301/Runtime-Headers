@class NSString, NSURL, NSDate, NSSet, WBSHistoryVisit, NSData, NSMutableArray;

@interface WBSHistoryItem : NSObject {
    WBSHistoryVisit *_lastVisit;
    int _visitCount;
    struct unique_ptr<WBSHistoryItemVisitCountScoresStorage, std::default_delete<WBSHistoryItemVisitCountScoresStorage>> { struct __compressed_pair<WBSHistoryItemVisitCountScoresStorage *, std::default_delete<WBSHistoryItemVisitCountScoresStorage>> { struct WBSHistoryItemVisitCountScoresStorage *__value_; } __ptr_; } _visitCountScores;
}

@property (readonly, nonatomic) unsigned long long dailyVisitCountScoresCountOnSynchronizationQueue;
@property (readonly, nonatomic) const int *dailyVisitCountScoresPtrOnSynchronizationQueue;
@property (readonly, nonatomic) unsigned long long weeklyVisitCountScoresCountOnSynchronizationQueue;
@property (readonly, nonatomic) const int *weeklyVisitCountScoresPtrOnSynchronizationQueue;
@property (nonatomic) long long databaseID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *urlString;
@property (readonly, nonatomic) NSString *userVisibleURLString;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *stringForUserTypedDomainExpansion;
@property (readonly, nonatomic) WBSHistoryVisit *lastVisit;
@property (readonly, nonatomic) double lastVisitedTimeInterval;
@property (readonly, nonatomic) NSDate *lastVisitedDate;
@property (readonly, nonatomic) NSMutableArray *visits;
@property (readonly, nonatomic) int visitCount;
@property (readonly, nonatomic) int visitCountScore;
@property (nonatomic) long long statusCode;
@property (readonly, nonatomic) char shouldRecomputeDerivedVisitCountScores;
@property (readonly, nonatomic) char lastVisitWasHTTPNonGet;
@property (nonatomic) char lastVisitWasFailure;
@property (readonly, nonatomic) WBSHistoryItem *lastVisitRedirectDestinationItem;
@property (readonly, nonatomic) WBSHistoryItem *endOfLastVisitRedirectChain;
@property (readonly, nonatomic) WBSHistoryVisit *lastVisitOnSynchronizationQueue;
@property (readonly, nonatomic) double lastVisitedTimeIntervalOnSynchronizationQueue;
@property (readonly, nonatomic) NSSet *visitsPendingWriteToDataStoreOnSynchronizationQueue;
@property (readonly, nonatomic) NSData *dailyVisitCountScoresDataOnSynchronizationQueue;
@property (readonly, nonatomic) NSData *weeklyVisitCountScoresDataOnSynchronizationQueue;
@property (readonly, copy, nonatomic) NSString *userVisibleHostOrFallbackURLString;

+ (void)initialize;
+ (id)synchronizationQueue;
+ (double)timeIntervalForDailyAndWeeklyVisitCountScores;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithURLString:(id)a0;
- (void)_accessVisitCountScoresStorage:(id /* block */)a0;
- (char)_visitsPendingWriteSetContains:(id)a0;
- (void)scoreOfVisit:(id)a0 wasUpdatedFrom:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)_addExistingVisit:(id)a0;
- (void)_addVisit:(id)a0;
- (void)_addVisitToPendingWriteSet:(id)a0;
- (void)_lastVisitTitleMayHaveChanged;
- (id)_visitsPendingWriteSetCreatingIfNeeded:(char)a0;
- (void)_wasVisitedOnSynchronizationQueue:(id)a0;
- (void)addExistingVisit:(id)a0;
- (void)clearVisitsPendingWriteToDataStoreFromSynchronizationQueue;
- (id)initWithHistoryStreamedItem:(const struct _HistoryStreamedItem { struct { unsigned int x0; unsigned int x1; } x0; long long x1; long long x2; long long x3; long long x4; long long x5; char *x6; int *x7; unsigned long long x8; int *x9; unsigned long long x10; } *)a0;
- (id)initWithSQLiteRow:(id)a0;
- (void)mergeDataFromItem:(id)a0;
- (void)recomputeDerivedVisitCountScoresWithVisits:(id)a0;
- (void)removeVisits:(id)a0 candidateLastVisit:(id)a1;
- (void)removeVisitsOnSynchronizationQueue:(id)a0 candidateLastVisit:(id)a1;
- (void)updateLastVisitIfNil:(id)a0;
- (void)updateWithServiceItem:(id)a0;
- (void)updateWithStreamedItem:(const struct _HistoryStreamedItem { struct { unsigned int x0; unsigned int x1; } x0; long long x1; long long x2; long long x3; long long x4; long long x5; char *x6; int *x7; unsigned long long x8; int *x9; unsigned long long x10; } *)a0;
- (id)visitForTimeOnSynchronizationQueue:(double)a0;
- (void)visitWasModified:(id)a0;
- (void)wasRedirectedFrom:(id)a0 to:(id)a1;
- (void)wasVisited:(id)a0;

@end
