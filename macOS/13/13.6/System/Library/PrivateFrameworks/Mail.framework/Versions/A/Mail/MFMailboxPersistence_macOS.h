@class NSString, EDPersistenceDatabase, NSObject;
@protocol OS_os_log;

@interface MFMailboxPersistence_macOS : EDMailboxPersistence <EFLoggable>

@property (class, readonly) NSObject<OS_os_log> *log;

@property (readonly, nonatomic) EDPersistenceDatabase *database;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
