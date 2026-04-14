@class NSString, NSOperationQueue, ACAccountStore, NSObject;
@protocol OS_dispatch_queue, MLMediaLibraryAccountChangeObserver, _MSVAccountInformationProviding;

@interface _ML3MultiUserDaemonMusicLibraryResourcesManager : _ML3BaseMusicLibraryResourcesManager <_ML3MultiUserDaemonAccountChangeOperationDelegate>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *calloutQueue;
@property (retain, nonatomic) NSOperationQueue *accountChangeOperationQueue;
@property (retain, nonatomic) id<_MSVAccountInformationProviding> accountInfo;
@property (weak, nonatomic) id<MLMediaLibraryAccountChangeObserver> accountChangeObserver;
@property (copy, nonatomic) NSString *currentActiveAccountDSID;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_libraryContainerPathForDSID:(id)a0;
- (void)accountChangeOperationWillStartPerformingDatabasePathChange:(id)a0 newDatabasePath:(id)a1;
- (void)dealloc;
- (id)databasePathForDSID:(id)a0;
- (id)libraryContainerPath;
- (id)initWithAccountInfo:(id)a0 accountChangeObserver:(id)a1;
- (id)_blockingCurrentActiveAccountDSID;
- (id)musicAssetsContainerPath;
- (BOOL)shouldExecuteAccountChangeOperation:(id)a0 reason:(id *)a1;
- (void)_notifyClients:(id)a0;
- (void)_accountStoreDidChangeNotification:(id)a0;
- (void)_processAccountChangeNotification;
- (void)_setupNotifications;
- (void).cxx_destruct;
- (void)_tearDownNotifications;

@end
