@class NSHashTable;

@interface CKContextContentProviderManager : NSObject {
    NSHashTable *_providers;
}

+ (id)sharedManager;
+ (unsigned char)controlCodeForNonce:(unsigned long long)a0;
+ (unsigned long long)optionsForControlCode:(unsigned char)a0;
+ (BOOL)isSpringBoard;
+ (BOOL)isSafariContentProvider;

- (id)init;
- (void).cxx_destruct;
- (void)removeProvider:(id)a0;
- (unsigned long long)providerCount;
- (void)addProvider:(id)a0;
- (void)_prepareDonationWithNonce:(unsigned long long)a0 options:(unsigned long long)a1 andReply:(id /* block */)a2;
- (BOOL)_isDonationAllowedWithControlCode:(unsigned char)a0;
- (void)_loadContextKitIfNecessaryWithExecutor:(id)a0;

@end
