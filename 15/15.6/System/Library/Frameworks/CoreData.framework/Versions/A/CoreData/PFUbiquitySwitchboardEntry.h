@class PFUbiquityLocation, NSString, NSURL, PFUbiquityContainerMonitor, NSMutableDictionary, PFUbiquitySetupAssistant, NSObject, PFUbiquityFilePresenter, PFUbiquitySwitchboardEntryMetadata;
@protocol OS_dispatch_queue;

@interface PFUbiquitySwitchboardEntry : NSObject {
    NSString *_localPeerID;
    NSString *_storeName;
    NSURL *_storeURL;
    PFUbiquityLocation *_ubiquityRootLocation;
    PFUbiquityLocation *_localRootLocation;
    PFUbiquityFilePresenter *_fp;
    PFUbiquityFilePresenter *_localFP;
    PFUbiquityContainerMonitor *_monitor;
    unsigned long long _activeStoreCount;
    NSMutableDictionary *_registeredCoordinators;
    PFUbiquitySwitchboardEntryMetadata *_metadata;
    char _finishedSetupForStore;
    char _hasScheduledFinishBlock;
    char _finishedInitializingForStore;
    int _finishLock;
    PFUbiquitySetupAssistant *_finishingSetupAssistant;
    NSObject<OS_dispatch_queue> *_privateQueue;
}

- (void)dealloc;
- (id)description;
- (id)init;
- (void)containerIdentifierChanged:(id)a0;
- (void)filePresenterNoticedBaselineFileChange:(id)a0;
- (void)filePresenterWasNotifiedTransactionLogs:(id)a0;
- (id)initWithLocalPeerID:(id)a0 storeName:(id)a1 withURL:(id)a2 ubiquityRootLocation:(id)a3 andLocalRootLocation:(id)a4;

@end
