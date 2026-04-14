@class _CFPasteboardCache, _CFPasteboardClientInstanceID, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _CFPasteboardStore : NSObject {
    struct __CFString { } *_name;
    NSObject<OS_dispatch_queue> *_queue;
    _CFPasteboardCache *_cache;
    unsigned char _restrictSandboxExtension;
    int _allowedSandboxExtensionPID;
    struct { unsigned int val[8]; } _allowedSandboxExtensionAuditToken;
    _CFPasteboardClientInstanceID *_owner;
    unsigned char _ownerHasPendingChanges;
    struct __CFDictionary { } *_clientInstancesByUUID;
    struct __CFSet { } *_clientInstancesWithCacheInfoForCurrentGeneration;
    NSObject<OS_dispatch_source> *_expirationTimer;
}

+ (void)_removePasteboardWithName:(struct __CFString { } *)a0;
+ (struct __CFArray { } *)copyAllPasteboards;
+ (struct __CFString { } *)dumpAllClients;
+ (id)pasteboardStoreWithName:(struct __CFString { } *)a0 createIfNecessary:(BOOL)a1;

- (void)dealloc;
- (id)description;
- (void)performBarrier:(id /* block */)a0;
- (id)_initWithName:(struct __CFString { } *)a0;
- (void)_onqueue_beginGenerationWithNewOwner:(struct __CFUUID { } *)a0;
- (id)_onqueue_cacheForGeneration:(long long)a0;
- (void)_onqueue_clearGenerationSpecificData;
- (void)_onqueue_handleExpirationTimer;
- (void)_onqueue_handleNewEntries:(struct __CFArray { } *)a0 forMessage:(id)a1 shouldInvalidateClientMetadata:(BOOL *)a2;
- (void)_onqueue_invalidateCachesWithCurrentGeneration;
- (void)_onqueue_invalidateCurrentGenerationCacheEntries:(struct __CFArray { } *)a0 inResponseToMessage:(id)a1;
- (long long)_onqueue_nextGenerationCount;
- (void)_onqueue_noteMessageSenderNeedsCacheInvalidation:(id)a0;
- (int)analyzeSandboxExtensionEntry:(id)a0 destinedForClient:(id)a1;
- (id)filterDataFromEntry:(id)a0 inResponseToMessage:(id)a1 error:(int *)a2;
- (void)flushOwnerChangesIfNecessaryInResponseToMessage:(id)a0 completionHandler:(id /* block */)a1;
- (void)handleAllowExtensionProcess:(id)a0;
- (void)handleBeginGeneration:(id)a0;
- (void)handleCreate:(id)a0;
- (void)handleDeadClientWithUUID:(struct __CFUUID { } *)a0 allowPasteboardDeletion:(BOOL)a1;
- (void)handleGetCounts:(id)a0;
- (void)handleMakeGenerationLocal:(id)a0;
- (void)handleNotifyHasEntries:(id)a0;
- (void)handleRefreshCache:(id)a0;
- (void)handleRegisterEntries:(id)a0;
- (void)handleRelease:(id)a0;
- (void)handleRequestData:(id)a0;
- (void)handleResolvePromises:(id)a0;
- (void)handleRestrictExtension:(id)a0;
- (void)handleSetDataFlags:(id)a0;
- (void)handleSetExpirationDate:(id)a0;
- (void)handleUniquePromiseFile:(id)a0;
- (void)handleVerificationTokenCreate:(id)a0;
- (void)onqueue_handleDeadClient:(id)a0 withUUID:(struct __CFUUID { } *)a1;
- (id)reissueSandboxExtensionFromEntry:(id)a0 toClient:(id)a1 error:(int *)a2;
- (void)requestDataForGeneration:(unsigned long long)a0 itemIdentifier:(unsigned long long)a1 flavor:(struct __CFString { } *)a2 inResponseToMessage:(id)a3 completionHandler:(id /* block */)a4;
- (void)resolveAllPromisesOwnedByProcessWithIdentifier:(int)a0 completionHandler:(id /* block */)a1;

@end
