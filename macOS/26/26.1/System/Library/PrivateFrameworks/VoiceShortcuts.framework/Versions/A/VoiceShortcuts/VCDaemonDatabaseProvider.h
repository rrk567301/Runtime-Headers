@class WFDatabase, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface VCDaemonDatabaseProvider : NSObject <WFDatabaseProvider>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) WFDatabase *database;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)databaseWithError:(id *)a0;
- (BOOL)isShortcutsAppInstalled;
- (void)migrateVoiceShortcutsToShortcutsInDatabase:(id)a0;

@end
