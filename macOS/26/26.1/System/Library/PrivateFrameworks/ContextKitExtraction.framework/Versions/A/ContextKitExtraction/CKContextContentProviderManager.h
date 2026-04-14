@class NSHashTable;

@interface CKContextContentProviderManager : NSObject {
    NSHashTable *_providers;
}

+ (unsigned char)controlCodeForNonce:(unsigned long long)a0;
+ (id)sharedManager;
+ (BOOL)isSpringBoard;
+ (BOOL)isSafariContentProvider;
+ (unsigned long long)optionsForControlCode:(unsigned char)a0;

- (void)_prepareDonationWithNonce:(unsigned long long)a0 options:(unsigned long long)a1 isRecentsCapture:(BOOL)a2 requiringMainQueue:(BOOL)a3 andReply:(id /* block */)a4;
- (void)_loadContextKitIfNecessaryWithExecutor:(id)a0;
- (void)removeProvider:(id)a0;
- (void)addProvider:(id)a0;
- (unsigned long long)providerCount;
- (void).cxx_destruct;
- (void)_prepareDonationWithNonce:(unsigned long long)a0 options:(unsigned long long)a1 isRecentsCapture:(BOOL)a2 andReply:(id /* block */)a3;
- (BOOL)_isDonationAllowedWithControlCode:(unsigned char)a0;
- (id)init;

@end
