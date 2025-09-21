@class NSError;

@interface CalDAVRefreshContext : NSObject

@property (nonatomic) char isForced;
@property (nonatomic) char wasUserRequested;
@property (nonatomic) char wasDueToPush;
@property (nonatomic) char isPrincipalOnly;
@property (nonatomic) char isCalendarsOnly;
@property (nonatomic) char didDownloadEvents;
@property (nonatomic) char didSaveDatabase;
@property (nonatomic) char shouldSave;
@property (nonatomic) char shouldSaveAccounts;
@property (nonatomic) char calendarFailedToSync;
@property (nonatomic) double startTime;
@property (nonatomic) unsigned long long numDownloadedElements;
@property (nonatomic) unsigned long long numUploadedElements;
@property (nonatomic) char shouldRetry;
@property (nonatomic) int retryTime;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned long long localItems;

+ (id)defaultContext;

- (void).cxx_destruct;

@end
