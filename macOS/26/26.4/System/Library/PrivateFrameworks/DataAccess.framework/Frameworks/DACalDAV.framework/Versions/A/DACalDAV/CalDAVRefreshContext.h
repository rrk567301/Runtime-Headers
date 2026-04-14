@class NSArray, NSError, NSMutableArray, CalDAVDBChangeTrackingHelper;

@interface CalDAVRefreshContext : NSObject {
    NSMutableArray *_calendarSyncFailures;
}

@property (nonatomic) BOOL isForced;
@property (nonatomic) BOOL wasUserRequested;
@property (nonatomic) BOOL wasDueToPush;
@property (nonatomic) BOOL isDisabledAccount;
@property (nonatomic) BOOL isCalendarsOnly;
@property (nonatomic) BOOL didDownloadEvents;
@property (nonatomic) BOOL didSaveDatabase;
@property (nonatomic) BOOL shouldSave;
@property (nonatomic) BOOL shouldSaveAccounts;
@property (readonly, nonatomic) BOOL calendarFailedToSync;
@property (readonly, nonatomic) NSArray *calendarSyncFailures;
@property (nonatomic) double startTime;
@property (nonatomic) unsigned long long numDownloadedElements;
@property (nonatomic) unsigned long long numUploadedElements;
@property (nonatomic) BOOL shouldRetry;
@property (nonatomic) int retryTime;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long localItems;
@property (retain, nonatomic) CalDAVDBChangeTrackingHelper *changeTracker;

+ (id)defaultContext;

- (void).cxx_destruct;
- (void)addCalendarSyncFailure:(id)a0;

@end
