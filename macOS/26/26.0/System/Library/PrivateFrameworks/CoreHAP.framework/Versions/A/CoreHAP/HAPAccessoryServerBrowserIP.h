@class NSString, HMFTimer, NSArray, NSOperationQueue, HAPPowerManager, HAPWACAccessoryBrowser, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, HAPAccessoryServerBrowserDelegate;

@interface HAPAccessoryServerBrowserIP : HAPAccessoryServerBrowser <HMFTimerDelegate, HAPPowerManagerProtocol, HAPAccessoryServerNotification> {
    struct BonjourBrowser { } *_bonjourBrowser;
}

@property (retain, nonatomic) NSMutableSet *discoveredAccessoryServers;
@property (weak, nonatomic) id<HAPAccessoryServerBrowserDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) NSOperationQueue *delegateOperationQueue;
@property (retain, nonatomic) NSMutableSet *pendingBonjourEvents;
@property (retain, nonatomic) HMFTimer *bonjourEventTimer;
@property (retain, nonatomic) HAPWACAccessoryBrowser *hapWACBrowser;
@property (retain, nonatomic) HAPPowerManager *powerManager;
@property (retain, nonatomic) NSString *serverIdentifierToSkipBonjourUpdate;
@property (readonly, nonatomic) unsigned long long maximumNumberOfPairVeifiesAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;

+ (id)logCategory;

- (void)discoverAccessoryServerWithIdentifier:(id)a0;
- (void)stopDiscoveringAccessoryServers;
- (void)matchAccessoryServerWithSetupID:(id)a0 serverIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)startDiscoveringAccessoryServers;
- (long long)linkType;
- (void)setDelegate:(id)a0 queue:(id)a1;
- (id)initWithQueue:(id)a0;
- (id)wacBrowser;
- (void)unitTest_handleBonjourBrowserEvent:(unsigned int)a0 eventInfo:(id)a1;
- (void)stopDiscoveringWACAccessoryServersWithInvalidation:(BOOL)a0;
- (int)_processPendingBonjourEvent:(id)a0;
- (void)processPendingBonjourRemoveEventsForDeviceID:(id)a0;
- (void)notifyDelegatesOfWACCompletionWithIdentifier:(id)a0 error:(id)a1;
- (void)_doReachabilityUpdateForServer:(id)a0 withDictionary:(id)a1;
- (void)pendDelegateOperation:(id)a0 identifier:(id)a1;
- (void)timerDidFire:(id)a0;
- (BOOL)_delegateRespondsToSelector:(SEL)a0;
- (void)startDiscoveringWACAccessoryServers;
- (unsigned long long)maximumPairVerifyFailureCount;
- (void)_pendBonjourEvent:(id)a0;
- (void)_timerDidExpire:(id)a0;
- (void)pendDelegateBlock:(id /* block */)a0 identifier:(id)a1;
- (void)_setReachability:(BOOL)a0 forServer:(id)a1;
- (void)_invalidateAccessoryServers:(BOOL)a0;
- (int)_server:(id *)a0 forBonjourDevice:(id)a1;
- (void)processPendingBonjourRemoveEvents:(id)a0;
- (void)devicePowerStateChanged:(unsigned long long)a0;
- (void)_handleConnectionUpdateWithBonjourDeviceInfo:(id)a0 socketInfo:(id)a1;
- (void)_doBonjourRemoveWithServer:(id)a0;
- (void)_handleBonjourRemoveWithEventInfo:(id)a0;
- (int)_purgePendingBonjourEvents:(id)a0 withProcessing:(BOOL)a1;
- (void)indicateNotificationFromServer:(id)a0 notifyType:(unsigned long long)a1 withDictionary:(id)a2;
- (void)_invalidateAndRemoveAccessoryServer:(id)a0;
- (id)visible2Pt4Networks;
- (void)_handleBonjourBrowserEvent:(unsigned int)a0 eventInfo:(id)a1;
- (void)startDiscoveringWACAccessoryServerWithIdentifier:(id)a0;
- (id)logIdentifier;
- (void)handleConnectionUpdateWithBonjourDeviceInfo:(id)a0 socketInfo:(id)a1;
- (void)startDiscoveringAirPlayAccessoriesWithDelegate:(id)a0;
- (void)_handleBonjourAddOrUpdateWithEventInfo:(id)a0;
- (int)_initializeAndStartBonjourBrowser;
- (void)_pendBonjourRemoveEvent:(id)a0;
- (void).cxx_destruct;
- (void)_matchAccessoryServerWithSetupID:(id)a0 serverIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)serverWithIdentifier:(id)a0 ignoreLPM:(BOOL)a1;

@end
