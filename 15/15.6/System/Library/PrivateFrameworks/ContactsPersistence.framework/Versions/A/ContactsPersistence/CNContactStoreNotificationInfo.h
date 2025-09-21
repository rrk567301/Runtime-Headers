@class NSArray, NSMutableDictionary, NSDate;

@interface CNContactStoreNotificationInfo : NSObject

@property (retain) NSMutableDictionary *publicUserInfo;
@property (retain) NSMutableDictionary *privateUserInfo;
@property (copy) NSArray *affectedSources;
@property (copy) NSDate *modificationDate;
@property char couldAffectSync;
@property char shouldSyncWhenSaved;
@property char privateTablesChanged;
@property char successfullyPrepared;

- (id)init;
- (void).cxx_destruct;

@end
