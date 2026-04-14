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

- (void)_removeRelevantPasses;
- (void)_issueRemovalCallbackWithPass:(id)a0;
- (void)_handlePassLibraryChange:(id)a0;
- (void)_addPass:(id)a0;
- (void)_passDidBecomeRelevant:(id)a0;
- (id)_networksWithIdentifier:(id)a0;
- (void)_replacePass:(id)a0;
- (void)_passLibraryDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_issueChangeCallbackWithPass:(id)a0 removedNetworks:(id)a1;
- (id)relevantNetworks;
- (void)_initializeWiFiPasses;
- (void)_passLibraryDidBecomeRelevantNotification:(id)a0;
- (id)candidateNetworks;
- (id)_createWiFiWalletPassFromPass:(id)a0;
- (id)initWithChangeHandler:(id /* block */)a0;
- (void)_issueRelevancyCallbackWithRelevantNetworks:(id)a0 notRelevantNetworks:(id)a1;
- (void)dealloc;
- (id)expiredWalletIDs;
- (void)_handleRelevantPassUpdate:(id)a0;
- (void)_removePass:(id)a0 withSerialNumber:(id)a1;

@end
