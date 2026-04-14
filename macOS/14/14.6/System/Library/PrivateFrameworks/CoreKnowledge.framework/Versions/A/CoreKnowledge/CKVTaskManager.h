@class CKVTaskSettings, NSString, CKVTaskCoalescer, NSURL, NSObject, CKVTaskManagerInfo;
@protocol CKVDonateTaskProvider, CCSetEnumerator;

@interface CKVTaskManager : NSObject {
    NSString *_managerName;
    NSURL *_rootDirectoryURL;
    CKVTaskCoalescer *_coalescer;
    NSObject<CCSetEnumerator> *_setEnumerator;
}

@property (readonly, nonatomic) CKVTaskManagerInfo *info;
@property (readonly, nonatomic) CKVTaskSettings *settings;
@property (readonly, nonatomic) NSObject<CKVDonateTaskProvider> *donateTaskProvider;

+ (id)dailyDonateTasks;
+ (id)defaultManagerWithServiceProvider:(id)a0;
+ (id)migrationDonateTasks;
+ (id)siriLanguageDependentDonateTasks;
+ (id)verificationTasks;

- (void).cxx_destruct;
- (id /* block */)_derivativeTaskBlockForTask:(unsigned short)a0 reason:(unsigned short)a1;
- (id)_descriptorForSiriLocale;
- (BOOL)_didEnumerateLocalChangesToSet:(id)a0 didFindPriorBookmark:(BOOL *)a1;
- (BOOL)_didEnumerateLocalChangesToSet:(id)a0 didFindPriorBookmark:(BOOL *)a1 addedLocalInstanceIds:(id *)a2 removedLocalInstanceIds:(id *)a3;
- (BOOL)_didLocalizationChange:(unsigned short)a0;
- (BOOL)_didTriggerMigration:(id /* block */)a0 reason:(unsigned short)a1;
- (id /* block */)_executeTaskBlock:(id /* block */)a0 ifTaskEnabled:(unsigned short)a1 reason:(unsigned short)a2;
- (id)_firstSetWithItemType:(unsigned short)a0 inSets:(id)a1;
- (id)_firstSetWithItemType:(unsigned short)a0 matchingDescriptor:(id)a1 inSets:(id)a2;
- (BOOL)_loadOrCreateTaskInfo;
- (id /* block */)_maintenanceTaskBlockWithReason:(unsigned short)a0 shouldDefer:(id /* block */)a1;
- (id /* block */)_notificationTaskBlock:(const char *)a0 forChangeToItemType:(unsigned short)a1;
- (id /* block */)_siriLanguageChangedTaskBlockWithReason:(unsigned short)a0;
- (void)_submitTask:(unsigned short)a0 reason:(unsigned short)a1 taskBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (id /* block */)_taskBlockForTask:(unsigned short)a0 reason:(unsigned short)a1 shouldDefer:(id /* block */)a2;
- (BOOL)_validateFilesystemState;
- (id /* block */)_verificationTaskBlockForTask:(unsigned short)a0 reason:(unsigned short)a1;
- (id /* block */)_wakePodcastsTaskBlockWithReason:(unsigned short)a0;
- (BOOL)clearAllState;
- (void)enableSimulatedTasks:(BOOL)a0;
- (BOOL)handleTask:(unsigned short)a0 reason:(unsigned short)a1 shouldDefer:(id /* block */)a2 completion:(id /* block */)a3;
- (id)initWithManagerName:(id)a0 rootDirectoryURL:(id)a1 serviceProvider:(id)a2 setEnumerator:(id)a3 settings:(id)a4;

@end
