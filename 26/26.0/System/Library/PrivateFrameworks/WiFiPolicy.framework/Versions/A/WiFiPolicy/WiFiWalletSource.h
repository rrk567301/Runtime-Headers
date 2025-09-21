@class PKPassLibrary, NSMutableDictionary, NSMutableSet, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface WiFiWalletSource : NSObject <WiFiAvailabilitySource>

@property (retain, nonatomic) PKPassLibrary *passLibrary;
@property (retain, nonatomic) NSMutableDictionary *networks;
@property (retain, nonatomic) NSMutableSet *relevantPassIdentifiers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) id /* block */ changeHandler;
@property (copy, nonatomic) id /* block */ relevancyHandler;
@property (copy, nonatomic) id /* block */ removalHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_removePass:(id)a0 withSerialNumber:(id)a1;
- (void)_removeRelevantPasses;
- (void)dealloc;
- (void)_initializeWiFiPasses;
- (void)_issueRelevancyCallbackWithRelevantNetworks:(id)a0 notRelevantNetworks:(id)a1;
- (id)expiredWalletIDs;
- (id)relevantNetworks;
- (void)_issueChangeCallbackWithPass:(id)a0 removedNetworks:(id)a1;
- (id)init;
- (void)_passLibraryDidChange:(id)a0;
- (id)candidateNetworks;
- (id)initWithChangeHandler:(id /* block */)a0;
- (void)_handlePassLibraryChange:(id)a0;
- (void)_replacePass:(id)a0;
- (id)_networksWithIdentifier:(id)a0;
- (void)_passLibraryDidBecomeRelevantNotification:(id)a0;
- (void)_addPass:(id)a0;
- (void)_issueRemovalCallbackWithPass:(id)a0;
- (void)_handleRelevantPassUpdate:(id)a0;
- (id)_createWiFiWalletPassFromPass:(id)a0;
- (void).cxx_destruct;
- (void)_passDidBecomeRelevant:(id)a0;

@end
