@class NSString;

@interface CalManagedExchangeCalendar : CalManagedRemoteCalendar

@property (retain) NSString *folderID;
@property (retain) NSString *parentFolderID;
@property (retain) NSString *changeKey;
@property (retain) NSString *syncState;
@property BOOL isDistinguished;

+ (id)entityName;
+ (void)enableChangeRequestNotifications;

- (id)type;
- (id)relativePath;
- (BOOL)isDeletable;
- (id)properties;
- (BOOL)validateForInsert:(id *)a0;
- (BOOL)validateForUpdate:(id *)a0;
- (id)sharees;
- (void)setSharees:(id)a0;
- (BOOL)isAffectingAvailability;
- (BOOL)isRenameable;
- (BOOL)isDefaultSchedulingCalendar;
- (BOOL)shareDefaultAlarmSettings;
- (BOOL)isColorEditable;
- (id)serverPath;
- (BOOL)isDistinguishedExchangeCalendar;
- (id)calendarSource;
- (void)deleteItemsWithIds:(id)a0;
- (void)deleteItemsWithoutIds:(id)a0;
- (BOOL)validateForWrite:(id *)a0;
- (BOOL)keepSyncRecordLocal;
- (id)nodesInNamespace;
- (id)fixAndReportIssuesInNewlyImportedItem:(id)a0;

@end
