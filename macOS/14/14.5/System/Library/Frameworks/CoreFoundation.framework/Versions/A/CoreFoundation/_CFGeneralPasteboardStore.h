@class NSString, _CFRemotePasteboardCache, NSObject;
@protocol OS_dispatch_queue;

@interface _CFGeneralPasteboardStore : _CFPasteboardStore <NSXPCListenerDelegate, UAPasteboardClientProtocol> {
    long long _localOnlyGeneration;
    _CFRemotePasteboardCache *_remotePasteboardCache;
    NSObject<OS_dispatch_queue> *_remotePasteboardNotificationQueue;
    unsigned long long _lastAccessTimestamp;
    unsigned long long _lastRemoteAvailableTimestamp;
    unsigned long long _timeout;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generalPasteboard;

- (void)dealloc;
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
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)notifyRemoteGenerationBecameAvailable:(unsigned char)a0;
- (void)pasteboardWillBeFetched:(id /* block */)a0;
- (void)remotePasteboardAvailable:(BOOL)a0;
- (void)setTimeout:(unsigned long long)a0;

@end
