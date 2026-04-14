@class NSString, CalManagedExchangeError;

@interface CalManagedExchangePrincipal : CalManagedPrincipal

@property (retain) NSString *mailbox;
@property (retain) NSString *deletedItemsFolderId;
@property (retain) NSString *deletedItemsFolderSyncState;
@property long long exchangeServerMajorBuildNumber;
@property long long exchangeServerMajorVersion;
@property long long exchangeServerMinorBuildNumber;
@property long long exchangeServerMinorVersion;
@property (retain) NSString *exchangeServerVersion;
@property (retain) NSString *rootFolderID;
@property (retain) CalManagedExchangeError *lastError;

+ (id)pathExtension;
+ (id)entityName;
+ (Class)freeBusyCacheClass;
+ (id)fetchRequestForEmailAddress:(id)a0 context:(id)a1;
+ (id)fetchRequestWithServerURL:(id)a0 isDelegate:(BOOL)a1 inManagedObjectContext:(id)a2;
+ (id)principalInfoDictionaryForPrincipalWithRootFolderID:(id)a0;

- (id)type;
- (BOOL)isRemote;
- (id)session;
- (id)properties;
- (void)awakeFromInsert;
- (BOOL)supportsPush;
- (id)typeString;
- (BOOL)isRenameable;
- (BOOL)supportsLikenessPropagation;
- (BOOL)isAutoScheduleSupported;
- (BOOL)allowsTasks;
- (BOOL)allowsEvents;
- (BOOL)supportsJunkReporting;
- (BOOL)isColorEditable;
- (BOOL)supportsAttendeeComments;
- (BOOL)isCalendarServerPrivateEventsSupported;
- (BOOL)supportsDefaultAlarms;
- (id)defaultSchedulingCalendar;
- (id)lastOperationError;
- (id)_makeSession;
- (BOOL)wantsSession;
- (void)activateSession;
- (void)getUserAvailabilityForEventID:(id)a0 addresses:(id)a1 timeRange:(id)a2 reply:(id /* block */)a3;
- (BOOL)validateForWrite:(id *)a0;
- (BOOL)isPrivateCommentsSupported;
- (id)fetchRequestForInsertValidation;
- (void)setSupportsDefaultAlarms:(BOOL)a0;

@end
