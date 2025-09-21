@class NSError, NSData;

@interface AXGuestPassService : NSObject <AXUIClientDelegate, AXGuestPassServiceProtocol> {
    void /* unknown type, empty encoding */ syncFiredTimer;
    void /* unknown type, empty encoding */ _client;
    void /* unknown type, empty encoding */ _clientLock;
    void /* unknown type, empty encoding */ pinPairingObserverToken;
    void /* unknown type, empty encoding */ cloudKitAccountChangesObserverToken;
    void /* unknown type, empty encoding */ initialized;
}

@property (class, nonatomic, readonly) AXGuestPassService *sharedInstance;

- (id)init;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)a0;
- (void).cxx_destruct;
- (void)initializeSyncEngine;
- (void)endGuestPassSessionWithCompletionBlock:(void (^)(BOOL, NSError *))a0;
- (void)initializeMonitor;
- (void)beginGuestPassSessionWithData:(NSData *)a0 completionBlock:(void (^)(BOOL, NSError *))a1;
- (void)beginGuestPassTransferWithCompletionBlock:(void (^)(BOOL, NSError *))a0;
- (void)deleteDataFromiCloud;
- (void)endGuestPassTransferWithCompletionBlock:(void (^)(BOOL, NSError *))a0;
- (id)getSyncedProfileData:(id)a0;
- (id)getSyncedProfiles;
- (void)hideMenuBarItemWithCompletionBlock:(void (^)(BOOL, NSError *))a0;
- (BOOL)isTransferUIShowing;
- (void)resumeGuestPassSessionWithCompletionBlock:(void (^)(BOOL, NSError *))a0;
- (void)showMenuBarItemWithCompletionBlock:(void (^)(BOOL, NSError *))a0;
- (void)syncLatestDataToiCloud;

@end
