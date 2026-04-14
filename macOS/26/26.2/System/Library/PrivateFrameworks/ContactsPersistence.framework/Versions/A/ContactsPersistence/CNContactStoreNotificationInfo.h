@class NSArray, NSMutableDictionary, NSDate;

@interface CNContactStoreNotificationInfo : NSObject

@property (retain) NSMutableDictionary *publicUserInfo;
@property (retain) NSMutableDictionary *privateUserInfo;
@property (copy) NSArray *affectedSources;
@property (copy) NSDate *modificationDate;
@property BOOL couldAffectSync;
@property BOOL shouldSyncWhenSaved;
@property BOOL privateTablesChanged;
@property BOOL successfullyPrepared;

- (void).cxx_destruct;
- (id)init;

@end
