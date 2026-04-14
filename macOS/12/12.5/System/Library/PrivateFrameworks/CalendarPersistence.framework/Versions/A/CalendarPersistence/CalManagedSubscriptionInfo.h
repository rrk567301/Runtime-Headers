@class CalManagedCalendar, NSString, CalManagedSubscriptionError, NSURL, NSDate;

@interface CalManagedSubscriptionInfo : CalManagedObject <CalAccountLikeObject>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property BOOL hasAlarmFilter;
@property BOOL hasAttachmentFilter;
@property BOOL hasTaskFilter;
@property BOOL isAutoRefreshed;
@property BOOL isAutoProvisioned;
@property BOOL needsRefresh;
@property BOOL insecureConnectionAllowed;
@property long long refreshIntervalIfAutoRefreshed;
@property int refreshInterval;
@property (retain) NSDate *refreshDate;
@property (retain) NSString *subscriptionID;
@property (retain) NSString *subscriptionNotes;
@property (retain) NSString *subscriptionTitle;
@property (retain) NSURL *subscriptionURL;
@property (readonly) NSString *user;
@property (readonly) NSURL *displayableURL;
@property (readonly) NSURL *browsableURL;
@property (retain) CalManagedCalendar *calendar;
@property (retain) CalManagedSubscriptionError *lastError;
@property (retain) NSString *subscriptionURLString;
@property (retain) NSString *languageCode;
@property (retain) NSString *locationCode;
@property (readonly) BOOL isHolidayCalendar;

+ (id)entityName;
+ (id)keyPathsForValuesAffectingRefreshIntervalIfAutoRefreshed;

- (id)_session;
- (id)properties;
- (void)willRefresh:(BOOL)a0;
- (id)objectIdentifier;
- (id)_makeSession;
- (void)_activateSession;
- (void)_refreshSession;
- (void)_refreshSession:(long long)a0;
- (id)canonicalizedSubscriptionURL;
- (id)enclosingSource;
- (id)keysOnlyRelevantToNetworkDetails;
- (id)cloneInManagedObjectContext:(id)a0;
- (void)processForType:(int)a0 inManagedObjectContext:(id)a1;
- (BOOL)insertAffectsSession;
- (BOOL)insertAffectsPush;
- (BOOL)insertAffectsDock;
- (BOOL)deleteAffectsSession;
- (BOOL)deleteAffectsPush;
- (BOOL)deleteAffectsDock;
- (BOOL)changesAffectDock:(id)a0;
- (BOOL)changesAffectPush:(id)a0;
- (BOOL)changesAffectRefresh:(id)a0;
- (BOOL)changesAffectSession:(id)a0;
- (BOOL)changeAffectsAlarms:(id)a0;

@end
