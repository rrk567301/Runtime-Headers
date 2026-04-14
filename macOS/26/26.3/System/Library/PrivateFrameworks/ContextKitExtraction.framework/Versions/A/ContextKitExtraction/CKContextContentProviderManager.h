@class NSHashTable;

@interface CKContextContentProviderManager : NSObject {
    NSHashTable *_providers;
}

+ (BOOL)isSpringBoard;
+ (unsigned long long)optionsForControlCode:(unsigned char)a0;
+ (unsigned char)controlCodeForNonce:(unsigned long long)a0;
+ (BOOL)isSafariContentProvider;
+ (id)sharedManager;

- (void)_prepareDonationWithNonce:(unsigned long long)a0 options:(unsigned long long)a1 isRecentsCapture:(BOOL)a2 requiringMainQueue:(BOOL)a3 andReply:(id /* block */)a4;
- (id)init;
- (void)addProvider:(id)a0;
- (void).cxx_destruct;
- (void)_loadContextKitIfNecessaryWithExecutor:(id)a0;
- (void)removeProvider:(id)a0;
- (void)_prepareDonationWithNonce:(unsigned long long)a0 options:(unsigned long long)a1 isRecentsCapture:(BOOL)a2 andReply:(id /* block */)a3;
- (unsigned long long)providerCount;
- (BOOL)_isDonationAllowedWithControlCode:(unsigned char)a0;

@end
