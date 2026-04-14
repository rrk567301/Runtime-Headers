@class NSMutableDictionary, NSMutableArray;

@interface EKManagedObjectContext : CalManagedObjectContext

@property (retain) NSMutableDictionary *modifiedSourceMap;
@property (retain) NSMutableDictionary *modifiedCalendarMap;
@property (retain) NSMutableDictionary *modifiedItemMap;
@property (retain) NSMutableDictionary *modifiedNotificationMap;
@property (retain) NSMutableArray *confirmedSuggestedEvents;
@property (retain) NSMutableArray *deletedSuggestionInfoUniqueKeys;

+ (id)contextToleratingInaccessibleFaultForBackingStore:(id)a0;
+ (id)readOnlyContextToleratingInaccessibleFault;

- (void).cxx_destruct;
- (BOOL)trackModifiedSources:(id)a0 error:(id *)a1;
- (BOOL)trackModifiedCalendars:(id)a0 error:(id *)a1;
- (BOOL)trackModifiedItems:(id)a0 error:(id *)a1;
- (BOOL)trackConfirmedSuggestedEvents:(id)a0 error:(id *)a1;
- (BOOL)trackDeletedSuggestionInfoUniqueKeys:(id)a0 error:(id *)a1;
- (BOOL)trackModifiedNotifications:(id)a0 error:(id *)a1;

@end
