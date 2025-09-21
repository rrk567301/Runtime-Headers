@class NSArray, NSMutableDictionary, NSDate;

@interface ABAddressBookNotificationInfo : NSObject

@property (retain) NSMutableDictionary *publicUserInfo;
@property (retain) NSMutableDictionary *privateUserInfo;
@property (copy) NSArray *affectedSources;
@property (copy) NSDate *modificationDate;
@property char couldAffectSync;
@property char shouldSyncWhenSaved;
@property char privateTablesChanged;
@property char successfullyPrepared;

- (void)dealloc;
- (id)init;

@end
