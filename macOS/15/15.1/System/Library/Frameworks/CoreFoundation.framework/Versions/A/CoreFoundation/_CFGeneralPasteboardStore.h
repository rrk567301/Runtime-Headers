@class _CFRemotePasteboardCache, NSString, NSObject, BKSHIDEventAuthenticationOriginator;
@protocol OS_dispatch_queue;

@interface _CFGeneralPasteboardStore : _CFPasteboardStore <NSXPCListenerDelegate, UAPasteboardClientProtocol> {
    long long _localOnlyGeneration;
    _CFRemotePasteboardCache *_remotePasteboardCache;
    NSObject<OS_dispatch_queue> *_remotePasteboardNotificationQueue;
    unsigned long long _lastAccessTimestamp;
    unsigned long long _lastRemoteAvailableTimestamp;
    unsigned long long _timeout;
    BKSHIDEventAuthenticationOriginator *_authenticationOriginator;
    NSObject<OS_dispatch_queue> *_authenticationQueue;
    struct __CFDictionary { } *_appsToVerificationTokenRequesters;
    NSObject<OS_dispatch_queue> *_approvalDialogQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generalPasteboard;

- (void)dealloc;
- (void)getUserApproval:(id)a0 withCompletion:(id /* block */)a1;
- (id)_initWithName:(struct __CFString { } *)a0;
- (id)_onqueue_cacheForGeneration:(long long)a0;
- (void)_onqueue_handleNewEntries:(struct __CFArray { } *)a0 forMessage:(id)a1 shouldInvalidateClientMetadata:(BOOL *)a2;
- (long long)_onqueue_nextGenerationCount;
- (void)_onqueue_notifyRemoteGenerationBecameAvailable:(unsigned char)a0;
- (void)handleMakeGenerationLocal:(id)a0;
- (void)handleNotifyHasEntries:(id)a0;
- (void)handlePasteNotification;
- (void)handleRefreshCache:(id)a0;
- (void)handleRegisterEntries:(id)a0;
- (void)handleRequestData:(id)a0;
- (void)handleVerificationTokenCreate:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)notifyRemoteGenerationBecameAvailable:(unsigned char)a0;
- (void)onqueue_handleDeadClient:(id)a0 withUUID:(struct __CFUUID { } *)a1;
- (void)pasteboardWillBeFetched:(id /* block */)a0;
- (void)remotePasteboardAvailable:(BOOL)a0;
- (void)setTimeout:(unsigned long long)a0;
- (void)validatePasteRequest:(id)a0 withCompletion:(id /* block */)a1;

@end
