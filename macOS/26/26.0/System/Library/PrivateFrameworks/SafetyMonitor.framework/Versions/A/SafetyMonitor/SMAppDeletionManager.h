@class NSHashTable, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SMAppDeletionManager : NSObject <LSApplicationWorkspaceObserverProtocol>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) NSHashTable *observers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationsDidUninstall:(id)a0;
- (void)_removeObserver:(id)a0;
- (void)_addObserver:(id)a0;
- (void)setup;
- (void)_setup;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)applicationsDidInstall:(id)a0;
- (void)addObserver:(id)a0;
- (void)databaseWasRebuilt;
- (void).cxx_destruct;
- (BOOL)isMessagesAppInstalled;
- (void)_applicationsDidInstall:(id)a0;
- (void)_applicationsDidUninstall:(id)a0;
- (void)_databaseWasRebuilt;
- (void)_notifyObserversForMessagesAppInstalled;
- (void)_notifyObserversForMessagesAppUninstalled;
- (void)_notifyObserversWithUpdatedMessagesInstallation;

@end
