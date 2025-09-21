@class NSDate, NSArray, HKObserverSet, HDActivitySummaryQueryHelper, HDProfile, NSTimeZone, NSObject, HKActivitySummary;
@protocol OS_dispatch_queue;

@interface HDCurrentActivitySummaryHelper : NSObject {
    HDProfile *_profile;
    HDActivitySummaryQueryHelper *_queryHelper;
    NSObject<OS_dispatch_queue> *_queue;
    long long _todayIndex;
    long long _yesterdayIndex;
    HKActivitySummary *_todaySummary;
    HKActivitySummary *_yesterdaySummary;
    char _hasLoadedActivitySummaries;
    NSArray *_typesForDataCollection;
    HKObserverSet *_observers;
    NSDate *_dateOverride;
    NSTimeZone *_timezoneOverride;
}

@property (retain, nonatomic) NSDate *dateOverride;
@property (retain, nonatomic) NSTimeZone *timezoneOverride;
@property (readonly) HKActivitySummary *todayActivitySummary;
@property (readonly) HKActivitySummary *yesterdayActivitySummary;
@property (readonly) char hasLoadedActivitySummaries;

- (void)dealloc;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (id)initWithProfile:(id)a0;
- (void)_handleSignificantTimeChangeNotification:(id)a0;

@end
